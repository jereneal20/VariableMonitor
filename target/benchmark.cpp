//simplegame.cpp simple huh?
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//#include <io.h>
#define MAX_STRING 100
#define MAX_TOWN 5
#define MAX_ENEMY 5
#define MAX_ITEMS 40
#define FILE_NAME "csave.dat"

typedef struct{
	int base_hp;
	int hp;
	int max_hp;
	int att;
	int base_att;
	int def;
	int base_def;
	char name[MAX_STRING];
	int townNum;
	int level;
	unsigned int xp;
	unsigned int next_xp;
	int money;
}entity;

typedef struct{
	char name[MAX_STRING];
	int att;
	int def;
	int hp_plus;
	char tooltip[MAX_STRING];
}inventory;

typedef struct{
	char name[MAX_STRING];
}town;

town T[MAX_TOWN];
inventory inven[MAX_ITEMS];
inventory tmpInven;
int i_top=-1;
inventory storage[3];
int cost[3];
entity Main;
entity Enemy[MAX_ENEMY];
FILE *state;
bool gameover=false;

void saveState();
bool loadGame();
void init(bool first);
void itemPush(inventory item);
inventory itemFind(int index);
void discardItem(int index);
void store();
void travel(town dest,int distance,int townNum);
void setTravelDest();
void battle();
void rest();
void viewItems();
void setStat();
void start(bool first);
void buyItem(inventory item,int index);

int main(void){
	char buff;
	while(true){
		fflush(stdin);
		printf("<<중대생 rpg ver1.0 made by 신기호>>\n<<버그가 발생할 시 바로 알려주세요.>>\n");
		printf("1.새로하기\n2.이어하기\n3.종료\n");
		scanf("%c",&buff);
		switch(buff){
			case '1':
				system("cls");
				init(true);
				start(true);
				break;
			case '2':
				system("cls");
				if(loadGame()){
					init(false);
					start(false);
				}
				else{
					init(true);
					start(true);
				}
				break;
			case '3':
				return 0;
		}
		system("cls");
	}
	return 0;
}

bool loadGame(){
	int count=0;
	inventory tmpItem;
	state=fopen(FILE_NAME,"r");
	if(state==NULL){
		return false;
	}
	printf("Loading...\n");
	char buff[MAX_STRING];
	while(strcmp(buff,"EOF")!=0){
		fscanf(state,"%s",buff);
		if(strcmp(buff,"level:")==0)
			fscanf(state,"%d",&Main.level);
		else if(strcmp(buff,"base_hp:")==0)
			fscanf(state,"%d",&Main.base_hp);
		else if(strcmp(buff,"hp:")==0)
			fscanf(state,"%d",&Main.hp);
		else if(strcmp(buff,"base_att:")==0)
			fscanf(state,"%d",&Main.base_att);
		else if(strcmp(buff,"base_def:")==0)
			fscanf(state,"%d",&Main.base_def);
		else if(strcmp(buff,"name:")==0){
			char tmp;
			char tmpName[MAX_STRING];
			int i=0;
			fscanf(state,"%c",&tmp);
			do{
				fscanf(state,"%c",&tmp);
				tmpName[i++]=tmp;
			}while(tmp!='\n');
			tmpName[i-1]='\0';
			strcpy(Main.name,tmpName);
		}
		else if(strcmp(buff,"townNum:")==0)
			fscanf(state,"%d",&Main.townNum);
		else if(strcmp(buff,"xp:")==0)
			fscanf(state,"%u",&Main.xp);
		else if(strcmp(buff,"next_xp:")==0)
			fscanf(state,"%u",&Main.next_xp);
		else if(strcmp(buff,"money:")==0)
			fscanf(state,"%d",&Main.money);
		else if(strcmp(buff,"inven:")==0){
			int num;
			fscanf(state,"%d",&num);
			for(int i=0;i<num;i++){
				do{
					fscanf(state,"%s",buff);
					if(strcmp(buff,"name:")==0){
						char tmp;
						char tmpName[MAX_STRING];
						int i=0;
						fscanf(state,"%c",&tmp);
						do{
							fscanf(state,"%c",&tmp);
							tmpName[i++]=tmp;
						}while(tmp!='\n');
						tmpName[i-1]='\0';
						strcpy(tmpInven.name,tmpName);
					}
					else if(strcmp(buff,"att:")==0)
						fscanf(state,"%d",&tmpInven.att);
					else if(strcmp(buff,"def:")==0)
						fscanf(state,"%d",&tmpInven.def);
					else if(strcmp(buff,"hp_plus:")==0)
						fscanf(state,"%d",&tmpInven.hp_plus);
					else if(strcmp(buff,"tooltip:")==0){
						char tmp;
						char tmpName[MAX_STRING];
						int i=0;
						fscanf(state,"%c",&tmp);
						do{
							fscanf(state,"%c",&tmp);
							tmpName[i++]=tmp;
						}while(tmp!='\n');
						tmpName[i-1]='\0';
						strcpy(tmpInven.tooltip,tmpName);
					}
				}while(strcmp(buff,"END")!=0);
				itemPush(tmpInven);
			}
		}
	}
	fclose(state);
	setStat();
	printf("Load complete!\n");
	fflush(stdin);
	getchar();
	return true;
}

void saveState(){
	state=fopen(FILE_NAME,"w+");
	printf("Saving...\n");
	fprintf(state,"level: %d\n",Main.level);
	fprintf(state,"base_hp: %d\n",Main.base_hp);
	fprintf(state,"hp: %d\n",Main.hp);
	fprintf(state,"base_att: %d\n",Main.base_att);
	fprintf(state,"base_def: %d\n",Main.base_def);
	fprintf(state,"name: %s\n",Main.name);
	fprintf(state,"townNum: %d\n",Main.townNum);
	fprintf(state,"xp: %u\n",Main.xp);
	fprintf(state,"next_xp: %u\n",Main.next_xp);
	fprintf(state,"money: %d\n",Main.money);
	fprintf(state,"inven: %d\n",i_top+1);
	for(int i=0;i<=i_top;i++){
		fprintf(state,"name: %s\n",inven[i].name);
		fprintf(state,"att: %d\n",inven[i].att);
		fprintf(state,"def: %d\n",inven[i].def);
		fprintf(state,"hp_plus: %d\n",inven[i].hp_plus);
		fprintf(state,"tooltip: %s\n",inven[i].tooltip);
		fprintf(state,"END\n");
	}
	fprintf(state,"EOF");
	fclose(state);
	printf("Save complete!\n");
	fflush(stdin);
	getchar();
}

void init(bool first){
	gameover=false;
	strcpy(T[0].name,"208관");
	strcpy(T[1].name,"봅스트홀");
	strcpy(T[2].name,"R&D센터");
	strcpy(T[3].name,"흑석역");
	strcpy(T[4].name,"청룡탕");
	
	if(first){
		inventory item;
		item.att=1;
		item.def=0;
		item.hp_plus=0;
		strcpy(item.name,"볼 마우스");
		strcpy(item.tooltip,"구시대적인 마우스다.");
		itemPush(item);
		
		Main.base_hp=30;
		Main.hp=Main.base_hp;
		Main.base_att=1;
		Main.base_def=1;
		Main.townNum=0;
		
		Main.level=1;
		Main.xp=0;
		Main.next_xp=30;
		strcpy(Main.name,"");
	} 
	
	strcpy(Enemy[0].name,"과제");
	strcpy(Enemy[1].name,"씨드");
	strcpy(Enemy[2].name,"쌍권총");
	strcpy(Enemy[3].name,"드랍");
	strcpy(Enemy[4].name,"청룡");
	
	Enemy[0].att=3;
	Enemy[0].def=0;
	Enemy[0].hp=15;
	Enemy[0].max_hp=15;
	Enemy[0].money=15;
	Enemy[0].xp=10;
	Enemy[0].townNum=0;
	
	Enemy[1].att=10;
	Enemy[1].def=8;
	Enemy[1].hp=50;
	Enemy[1].max_hp=50;
	Enemy[1].money=35;
	Enemy[1].xp=20;
	Enemy[1].townNum=1;
	
	Enemy[2].att=40;
	Enemy[2].def=18;
	Enemy[2].hp=85;
	Enemy[2].max_hp=85;
	Enemy[2].money=46;
	Enemy[2].xp=30;
	Enemy[2].townNum=2;
	
	Enemy[3].att=68;
	Enemy[3].def=37;
	Enemy[3].hp=120;
	Enemy[3].max_hp=120;
	Enemy[3].money=58;
	Enemy[3].xp=64;
	Enemy[3].townNum=3;
	
	Enemy[4].att=125;
	Enemy[4].def=54;
	Enemy[4].hp=230;
	Enemy[4].max_hp=230;
	Enemy[4].money=70;
	Enemy[4].xp=120;
	Enemy[4].townNum=4;
}

void start(bool first){
	char buff;
	if(first){
		char name[MAX_STRING];
		printf("이름을 입력하세요: ");
		scanf("%s",name);
		strcpy(Main.name,name);
	}
	setStat();
	while(true){
		if(gameover)
			break;
		system("cls");
		printf("당신은 %s에 있습니다.\n무엇을 하시겠습니까?\n",T[Main.townNum].name);
		printf("1.아이템을 산다\n2.쉰다\n3.보유 아이템 확인\n4.다른 마을로 이동한다\n5.저장\n6.불러오기\n7.종료\n");
		scanf("%c",&buff);
		switch(buff){
			case '1':
				system("cls");
				store();
				break;
			case '2':
				system("cls");
				rest();
				break;
			case '3':
				system("cls");
				viewItems();
				break;
			case '4':
				system("cls");
				setTravelDest();
				break;
			case '5':
				system("cls");
				saveState();
				break;
			case '6':
				system("cls");
				loadGame();
				break;
			case '7':
				system("cls");
				gameover=true;
				break;
		}
	}
	i_top=-1;
	return;
}

void rest(){
	fflush(stdin);
	printf("충분한 휴식을 취했습니다.\n");
	Main.hp=Main.max_hp;
	getchar();
}

void store(){
	float num;
	bool exit=false;
	srand((unsigned)time(NULL));
	num=(rand()%10)/10+rand()%2;
	if(num<=0.4){
		strcpy(storage[0].name,"혁명의 구슬(오브)");
		storage[0].att=6;
		storage[0].def=2;
		storage[0].hp_plus=4;
		cost[0]=1300;
		strcpy(storage[0].tooltip,"기분이 상쾌해진다.");
	}
	else if(num<=0.7){
		strcpy(storage[0].name,"교수님의 노트(부적)");
		storage[0].att=10;
		storage[0].def=4;
		storage[0].hp_plus=20;
		cost[0]=2400;
		strcpy(storage[0].tooltip,"지식이 깊어진다.\n");
	}
	else if(num<=0.9){
		strcpy(storage[0].name,"절대 마우스(유니크)");
		storage[0].att=100;
		storage[0].def=100;
		storage[0].hp_plus=200;
		cost[0]=13500;
		strcpy(storage[0].tooltip,"모든것을 지배하는 하나의 마우스.\n");
	}
	else{
		strcpy(storage[0].name,"희미한 혁명의 기운(구슬)");
		storage[0].att=2;
		storage[0].def=1;
		storage[0].hp_plus=0;
		cost[0]=200;
		strcpy(storage[0].tooltip,"용기가 약간 생긴다.");
	}
	strcpy(storage[1].name,"컴공 과잠(방어구)");
	storage[1].att=0;
	storage[1].def=2;
	storage[1].hp_plus=5;
	cost[1]=320;
	strcpy(storage[1].tooltip,"40주년 과잠.");
	strcpy(storage[2].name,"교수님의 노트 조각(부적)");
	storage[2].att=3;
	storage[2].def=0;
	storage[2].hp_plus=0;
	cost[2]=350;
	strcpy(storage[2].tooltip,"교수님의 노트 중 일부.");
	while(true){
		if(exit)
			break;
		printf("보유하고 있는 돈: %d원\n",Main.money);
		for(int i=0;i<3;i++){
			printf("%d: %s\t--가격: %d 원\n",i+1,storage[i].name,cost[i]);
		}
		printf("무엇을 하시겠습니까?\n1.산다\n2.편의점을 나간다\n");
		scanf("%f",&num);
		switch((int)num){
			case 1:
				int num2;
				printf("무엇을 사시겠습니까?: ");
				scanf("%d",&num2);
				buyItem(storage[num2],num2-1);
				system("cls");
				break;
			case 2:
				exit=true;
				break;
		}
	}
}

void buyItem(inventory item,int index){
	if(Main.money<cost[index]){
		printf("돈이 부족합니다.\n");
		fflush(stdin);
		getchar();
		return;
	}
	if(i_top<=MAX_ITEMS-1){
		printf("점원: 감사합니다!\n");
		Main.money-=cost[index];
		printf("당신은 %s을 구입했습니다.\n",storage[index].name);
		itemPush(storage[index]);
		setStat();
		fflush(stdin);
		getchar();
		return;
	}
	else{
		printf("더 이상 아이템을 가질 수 없습니다.");
		fflush(stdin);
		getchar();
		return;
	}
	
}

void viewItems(){
	inventory tmp;
	char buff;
	bool flag=false;
	while(true){
		if(flag)
			break;
		fflush(stdin);
		printf("--%s 상태--\n레벨:%d\n경험치:%d\n다음 레벨까지:%d\n공격력:%d\n방어력:%d\n체력:%d / %d\n",Main.name,Main.level,Main.xp,Main.next_xp,Main.att,Main.def,Main.hp,Main.max_hp);
		printf("인벤토리:\n");
		for(int i=0;i<=i_top;i++){
			tmp=itemFind(i);
			printf("%d: %s\n",i+1,tmp.name);
		}
		printf("------------------\n");
		printf("무엇을 하시겠습니까?\n1.인벤토리 관리\n2.나간다\n");
		scanf("%c",&buff);
		switch(buff){
			case '1':
				int num;
				printf("선택: ");
				scanf("%d",&num);
				if(num>=1&&num<=i_top+1){
					bool flag2=false;
					int num2;
					while(true){
						if(flag2)
							break;
						fflush(stdin);
						tmp=itemFind(num-1);
						printf("<%s>\n옵션:\n1.살펴보기\n2.버리기\n3.취소\n",tmp.name);
						scanf("%d",&num2);
						switch(num2){
							case 1:
								printf("%s\n",inven[num-1].tooltip);
								flag2=true;
								fflush(stdin);
								getchar();
								system("cls");
								break;
							case 2:
								printf("아이템을 버렸습니다.\n");
								discardItem(num-1);
								flag2=true;
								system("cls");
								break;
							case 3:
								flag2=true;
								system("cls");
								break;
						}
					}
				}
				break;
			case '2':
				flag=true;
				break;
		}
	}
}

void setTravelDest(){
	char buff;
	bool exit=false;
	int distance;
	printf("어디로 가시겠습니까?(거리에 따라 전투의 발생 횟수가 변할 수 있습니다.)\n");
	for(int i=0;i<MAX_TOWN;i++){
		if(i!=Main.townNum){
			distance=i-Main.townNum;
			if(distance<0)
				printf("%s: 거리 %d\n",T[i].name,-distance);
			else
				printf("%s: 거리 %d\n",T[i].name,distance);
		}
	}
	printf("----------------------------\n");
	int count=0;
	int T_ptr[MAX_TOWN-1];
	for(int i=0;i<MAX_TOWN;i++){
		if(i!=Main.townNum){
			printf("%d, %s\n",count+1,T[i].name);
			T_ptr[count++]=i;
		}
	}
	while(true){
		if(exit)
			break;
		fflush(stdin);
		printf("선택: ");
		scanf("%c",&buff);
		switch(buff){
			case '1':
				travel(T[T_ptr[0]],distance,T_ptr[0]);
				exit=true;
				break;
			case '2':
				travel(T[T_ptr[1]],distance,T_ptr[1]);
				exit=true;
				break;
			case '3':
				travel(T[T_ptr[2]],distance,T_ptr[2]);
				exit=true;
				break;
			case '4':
				travel(T[T_ptr[3]],distance,T_ptr[3]);
				exit=true;
				break;
			case '5':
				travel(T[T_ptr[4]],distance,T_ptr[4]);
				exit=true;
				break;
		}
	}
}

void travel(town dest,int distance,int townNum){
	if(distance<0){
		for(int i=0;i<-distance;i++){
			srand((unsigned)time(NULL));
			int num=rand()%10+1;
			if(num<=6)
				battle();
			if(gameover)
				return;
		}
		Main.townNum=townNum;
	}
	else{
		for(int i=0;i<distance;i++){
			srand((unsigned)time(NULL));
			int num=rand()%10+1;
			if(num<4)
				battle();
			if(gameover)
				return;
		}
		Main.townNum=townNum;
	}
}

void battle(){
	char buff;
	int en;
	bool end=false;
	system("cls");
	entity tmpEn=Enemy[Main.townNum];
	printf("%s이(가) 싸우고 싶어합니다!!\n",tmpEn.name);
	fflush(stdin);
	getchar();
	while(true){
		if(end)
			break;
		fflush(stdin);
		system("cls");
		printf("플레이어:%s---\n체력: %d / %d\n적:%s---\n체력: %d / %d\n",Main.name,Main.hp,Main.max_hp,tmpEn.name,tmpEn.hp,tmpEn.max_hp);
		if(tmpEn.hp<=0){
			printf("승리!\n");
			printf("보상:\n");
			srand((unsigned)time(NULL));
			int money,xp;
			money=tmpEn.money;
			xp=tmpEn.xp;
			printf("1.돈: %d 원\n",money);
			printf("2.경험치: %d\n",xp);
			Main.money+=money;
			Main.xp+=xp;
			if(Main.xp>=Main.next_xp){
				Main.level++;
				Main.next_xp=Main.xp*2;
				Main.base_hp=Main.base_hp+Main.level*10;
				Main.base_att=Main.base_att+Main.level*2;
				Main.base_def=Main.base_def+Main.level;
				setStat();
				printf("레벨업!\n현재 레벨: %d\t다음 레벨까지 남은 경험치: %d\n체력: %d\t공격력: %d\t방어력: %d",Main.level,Main.next_xp,Main.max_hp,Main.att,Main.def);
			}
			setStat();
			fflush(stdin);
			getchar();
			end=true;
			continue;
		}
		else if(Main.hp<=0){
			printf("패배했습니다.\n");
			fflush(stdin);
			getchar();
			gameover=true;
			end=true;
			continue;
		}
		else{
			printf("1.공격\n2.방어\n3.도망\n");
			scanf("%c",&buff);
			switch(buff){
				case '1':
					srand((unsigned)time(NULL));
					en=rand()%10;
					printf("%s을(를) 공격했다!\n",tmpEn.name);
					fflush(stdin);
					getchar();
					if(en<=4){
						if(tmpEn.def-Main.att>0)
							tmpEn.hp--;
						else
							tmpEn.hp-=Main.att;
						printf("적 %s이(가) 공격했다!\n",tmpEn.name);
						fflush(stdin);
						getchar();
						if(Main.def-tmpEn.att>0)
							Main.hp--;
						else
							Main.hp-=tmpEn.att;
					}
					else if(en>4&&en<=8){
						if(tmpEn.def-Main.att>0)
							tmpEn.hp--;
						else
							tmpEn.hp-=Main.att-tmpEn.def;
						printf("적 %s이(가) 자신을 방어했다.\n",tmpEn.name);
						fflush(stdin);
						getchar();
					}
					else{
						printf("적 %s이(가) 도망갔다.\n",tmpEn.name);
						fflush(stdin);
						getchar();
						end=true;
						continue;
					}
					break;
				case '2':
					srand((unsigned)time(NULL));
					en=rand()%10;
					printf("방어했습니다.\n");
					fflush(stdin);
					getchar();
					if(en<=4){
						printf("적 %s이(가) 공격했다!\n",tmpEn.name);
						fflush(stdin);
						getchar();
						if(Main.def-tmpEn.att>0)
							Main.hp--;
						else
							Main.hp-=tmpEn.att-Main.def;
					}
					else if(en>4&&en<=8){
						printf("적 %s이(가) 자신을 방어했다.\n",tmpEn.name);
						fflush(stdin);
						getchar();
					}
					else{
						printf("적 %s이(가) 도망갔다.\n",tmpEn.name);
						fflush(stdin);
						getchar();
						end=true;
						continue;
					}
					break;
				case '3':
					srand((unsigned)time(NULL));
					int flee=rand()%10;
					if(flee>=6){
						printf("당신은 전투에서 도망쳤습니다.\n");
						fflush(stdin);
						getchar();
						end=true;
						continue;
					}
					else{
						printf("당신은 도망칠 수 없었습니다.\n");
						fflush(stdin);
						getchar();
						break;
					}
			}
		}
	}
}

void setStat(){
	Main.max_hp=Main.base_hp;
	Main.att=Main.base_att;
	Main.def=Main.base_def;
	for(int i=0;i<=i_top;i++){
		Main.max_hp=Main.max_hp+inven[i].hp_plus;
		Main.att=Main.att+inven[i].att;
		Main.def=Main.def+inven[i].def;
	}
}

void itemPush(inventory item){
	if(i_top>=MAX_ITEMS-1)
		return;
	inven[++i_top]=item; 
}

inventory itemFind(int index){
	return inven[index];
} 

void discardItem(int index){
	inventory tmpItem;
	tmpItem=inven[index];
	for(int i=index+1;i<=i_top;i++)
		inven[i-1]=inven[i];
	i_top--;
	Main.max_hp-=tmpItem.hp_plus;
	Main.att-=tmpItem.att;
	Main.def-=tmpItem.def;
}