# 1 "target/grep.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "target/grep.c"
# 35 "target/grep.c"
# 1 "/usr/include/errno.h" 1 3 4
# 29 "/usr/include/errno.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 313 "/usr/include/features.h" 3 4
# 1 "/usr/include/bits/predefs.h" 1 3 4
# 314 "/usr/include/features.h" 2 3 4
# 346 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 353 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 354 "/usr/include/sys/cdefs.h" 2 3 4
# 347 "/usr/include/features.h" 2 3 4
# 378 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 379 "/usr/include/features.h" 2 3 4
# 30 "/usr/include/errno.h" 2 3 4






# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 43 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 59 "/usr/include/errno.h" 3 4

# 36 "target/grep.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[/*binOp start*//*binOp start*//*binOp start*/15 * sizeof (int/*binOp end*/) - /*binOp start*/4 * sizeof (void */*binOp end*//*binOp end*/) - sizeof (size_t/*binOp end*/)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 416 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4
# 89 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 141 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
# 186 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 229 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 243 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 272 "/usr/include/stdio.h" 3 4

# 283 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 296 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 394 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__));
# 445 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 476 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 504 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 532 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 543 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 576 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 638 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 710 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 746 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 765 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 788 "/usr/include/stdio.h" 3 4

# 797 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 827 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 846 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 886 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 916 "/usr/include/stdio.h" 3 4

# 37 "target/grep.c" 2
# 48 "target/grep.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 323 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4


# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 29 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 62 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 100 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;




typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 23 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/select.h" 2 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(/*binOp start*/1024 / (/*binOp start*/8 * sizeof (unsigned long int/*binOp end*/)/*binOp end*/))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 69 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[/*binOp start*/1024 / (/*binOp start*/8 * (int) sizeof (__fd_mask/*binOp end*/)/*binOp end*/)];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));
# 224 "/usr/include/sys/types.h" 2 3 4
# 235 "/usr/include/sys/types.h" 3 4
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4




extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 553 "/usr/include/stdlib.h" 3 4






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 604 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 615 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 637 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 658 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 707 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 729 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 747 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 766 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 802 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 907 "/usr/include/stdlib.h" 3 4
extern int posix_openpt (int __oflag) ;
# 942 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 958 "/usr/include/stdlib.h" 3 4

# 49 "target/grep.c" 2
# 58 "target/grep.c"
# 1 "/usr/include/string.h" 1 3 4
# 28 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 94 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 125 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 162 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 208 "/usr/include/string.h" 3 4

# 233 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 260 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 279 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 312 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 340 "/usr/include/string.h" 3 4
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 395 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 425 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 443 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 487 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 515 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 534 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 557 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 644 "/usr/include/string.h" 3 4

# 59 "target/grep.c" 2
# 80 "target/grep.c"
# 1 "/usr/include/fcntl.h" 1 3 4
# 30 "/usr/include/fcntl.h" 3 4




# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 25 "/usr/include/bits/fcntl.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/fcntl.h" 2 3 4
# 160 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 259 "/usr/include/bits/fcntl.h" 3 4

# 304 "/usr/include/bits/fcntl.h" 3 4

# 35 "/usr/include/fcntl.h" 2 3 4
# 64 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 73 "/usr/include/fcntl.h" 3 4
extern int open (__const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 97 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 108 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, __const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 118 "/usr/include/fcntl.h" 3 4
extern int creat (__const char *__file, __mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 147 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len);
# 164 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off_t __offset, __off_t __len,
     int __advise) __attribute__ ((__nothrow__));
# 186 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off_t __offset, __off_t __len);
# 208 "/usr/include/fcntl.h" 3 4

# 81 "target/grep.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4

# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4
# 227 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 228 "/usr/include/unistd.h" 2 3 4
# 256 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 305 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
# 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
# 350 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 414 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;
# 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
# 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);






extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));






extern int usleep (__useconds_t __useconds);
# 465 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__)) ;
# 507 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;
# 520 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));
# 538 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     __attribute__ ((__nothrow__));




extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 593 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = /*binOp start*/_SC_LEVEL1_ICACHE_SIZE + /*binOp end*/50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS

  };
# 605 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
# 641 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));
# 650 "/usr/include/unistd.h" 3 4
extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
# 667 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__));
# 684 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__));







extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;
# 717 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));
# 773 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));






extern __pid_t vfork (void) __attribute__ ((__nothrow__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__));





extern int ttyslot (void) __attribute__ ((__nothrow__));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 887 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));
# 888 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__));


extern int revoke (__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) __attribute__ ((__nothrow__));



extern char *getusershell (void) __attribute__ ((__nothrow__));
extern void endusershell (void) __attribute__ ((__nothrow__));
extern void setusershell (void) __attribute__ ((__nothrow__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__)) ;






extern int chroot (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 973 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__));




extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__));




extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 1020 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__)) ;
# 1040 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
# 1061 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1153 "/usr/include/unistd.h" 3 4

# 82 "target/grep.c" 2





# 1 "target/getpagesize.h" 1
# 88 "target/grep.c" 2
# 1 "target/grep.h" 1
# 20 "target/grep.h"
extern void fatal(const char *, int);





extern struct matcher
{
  char *name;
  void (*compile)(char *, size_t);
  char *(*execute)(char *, size_t, char **);
} matchers[];
# 47 "target/grep.h"
extern char *matcher;



extern int match_icase;
extern int match_words;
extern int match_lines;
# 89 "target/grep.c" 2
# 123 "target/grep.c"
char *matcher;
int match_icase;
int match_words;
int match_lines;


static void (*compile)();
static char *(*execute)();


static char *prog;
static char *filename;
static int errseen;



static void
error(mesg, errnum)

     const

     char *mesg;
     int errnum;
{
  if (errnum)
    fprintf(stdout, "%s: %s: %s\n", prog, mesg, strerror(errnum));
  else
    fprintf(stdout, "%s: %s\n", prog, mesg);
  /*compound start*//*binOp start*/errseen = /*compound end*//*binOp end*/1;
}


void
fatal(mesg, errnum)

     const

     char *mesg;
     int errnum;
{
  error(mesg, errnum);
  exit(2);
}


char *
xmalloc(size)
     size_t size;
{
  char *result;

  /*compound start*//*binOp start*/result = malloc(size/*compound end*//*binOp end*/);
  if (/*binOp start*/size && !/*binOp end*/result)
    fatal("memory exhausted", 0);
  return result;
}


char *
xrealloc(ptr, size)
     char *ptr;
     size_t size;
{
  char *result;

  if (ptr)
    /*binOp start*/result = realloc(ptr, size/*binOp end*/);
  else
    /*binOp start*/result = malloc(size/*binOp end*/);
  if (/*binOp start*/size && !/*binOp end*/result)
    fatal("memory exhausted", 0);
  return result;
}





extern void *valloc(size_t);
# 211 "target/grep.c"
static char *buffer;
static size_t bufsalloc;
static size_t bufalloc;
static int bufdesc;
static char *bufbeg;
static char *buflim;






# 1 "/usr/include/sys/stat.h" 1 3 4
# 39 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 40 "/usr/include/sys/stat.h" 2 3 4
# 105 "/usr/include/sys/stat.h" 3 4


# 1 "/usr/include/bits/stat.h" 1 3 4
# 43 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 88 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 103 "/usr/include/bits/stat.h" 3 4
    long int __unused[3];
# 112 "/usr/include/bits/stat.h" 3 4
  };
# 108 "/usr/include/sys/stat.h" 2 3 4
# 211 "/usr/include/sys/stat.h" 3 4
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 240 "/usr/include/sys/stat.h" 3 4
extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 265 "/usr/include/sys/stat.h" 3 4
extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 286 "/usr/include/sys/stat.h" 3 4
extern int chmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__));





extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__));
# 323 "/usr/include/sys/stat.h" 3 4
extern int mkdir (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__));
# 401 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));
# 444 "/usr/include/sys/stat.h" 3 4
extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 5)));
# 536 "/usr/include/sys/stat.h" 3 4

# 224 "target/grep.c" 2
# 1 "/usr/include/sys/mman.h" 1 3 4
# 26 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 27 "/usr/include/sys/mman.h" 2 3 4
# 42 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/include/bits/mman.h" 1 3 4
# 43 "/usr/include/sys/mman.h" 2 3 4





# 58 "/usr/include/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__));
# 77 "/usr/include/sys/mman.h" 3 4
extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__));



extern int posix_madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__));




extern int mlock (__const void *__addr, size_t __len) __attribute__ ((__nothrow__));


extern int munlock (__const void *__addr, size_t __len) __attribute__ ((__nothrow__));




extern int mlockall (int __flags) __attribute__ ((__nothrow__));



extern int munlockall (void) __attribute__ ((__nothrow__));







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__));
# 145 "/usr/include/sys/mman.h" 3 4
extern int shm_open (__const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (__const char *__name);


# 225 "target/grep.c" 2

static int bufmapped;
static struct stat bufstat;
static off_t bufoffset;




void
reset(fd)
     int fd;
{
  static int initialized;

  if (!initialized)
    {
      /*compound start*//*binOp start*/initialized = /*compound end*//*binOp end*/1;

      /*compound start*//*binOp start*/bufsalloc = (/*binOp start*/(8192) > (getpagesize()/*binOp end*/) ? (8192) : (getpagesize())/*compound end*//*binOp end*/);



      /*compound start*//*binOp start*/bufalloc = /*binOp start*/5 * /*compound end*//*binOp end*//*binOp end*/bufsalloc;



      /*compound start*//*binOp start*/buffer = valloc(/*binOp start*/bufalloc + /*binOp end*/1/*compound end*//*binOp end*/);
      if (!buffer)
 fatal("memory exhausted", 0);
      /*compound start*//*binOp start*/bufbeg = /*compound end*//*binOp end*/buffer;
      /*compound start*//*binOp start*/buflim = /*compound end*//*binOp end*/buffer;
    }
  /*compound start*//*binOp start*/bufdesc = /*compound end*//*binOp end*/fd;

  if (/*binOp start*//*binOp start*/fstat(fd, &bufstat) < /*binOp end*/0 || !(/*binOp start*/(/*binOp start*/((bufstat.st_mode)) & /*binOp end*/0170000) == (0100000/*binOp end*/)/*binOp end*/))
    /*binOp start*/bufmapped = /*binOp end*/0;
  else
    {
      /*compound start*//*binOp start*/bufmapped = /*compound end*//*binOp end*/1;
      /*compound start*//*binOp start*/bufoffset = lseek(fd, 0, 1/*compound end*//*binOp end*/);
    }

}





static int
fillbuf(save)
     size_t save;
{
  char *nbuffer, *dp, *sp;
  int cc;

  caddr_t maddr;

  static int pagesize;

  if (/*binOp start*//*binOp start*/pagesize == /*binOp end*/0 && /*binOp start*/(/*binOp start*/pagesize = getpagesize(/*binOp end*/)) == /*binOp end*//*binOp end*/0)
    abort();

  if (/*binOp start*/save > /*binOp end*/bufsalloc)
    {
      while (/*binOp start*/save > /*binOp end*/bufsalloc)
 /*binOp start*/bufsalloc *= /*binOp end*/2;
      /*compound start*//*binOp start*/bufalloc = /*binOp start*/5 * /*compound end*//*binOp end*//*binOp end*/bufsalloc;
      /*compound start*//*binOp start*/nbuffer = valloc(/*binOp start*/bufalloc + /*binOp end*/1/*compound end*//*binOp end*/);
      if (!nbuffer)
 fatal("memory exhausted", 0);
    }
  else
    /*binOp start*/nbuffer = /*binOp end*/buffer;

  /*compound start*//*binOp start*/sp = /*binOp start*/buflim - /*compound end*//*binOp end*//*binOp end*/save;
  /*compound start*//*binOp start*/dp = /*binOp start*//*binOp start*/nbuffer + /*binOp end*/bufsalloc - /*compound end*//*binOp end*//*binOp end*/save;
  /*compound start*//*binOp start*/bufbeg = /*compound end*//*binOp end*/dp;
  while (save--)
    /*binOp start*/*dp++ = *sp/*binOp end*/++;




  /*compound start*//*binOp start*/buffer = /*compound end*//*binOp end*/nbuffer;


  if (/*binOp start*//*binOp start*/bufmapped && /*binOp start*//*binOp start*/bufoffset % /*binOp end*/pagesize == /*binOp end*//*binOp end*/0
      && /*binOp start*//*binOp start*/bufstat.st_size - /*binOp end*/bufoffset >= /*binOp start*/bufalloc - /*binOp end*//*binOp end*//*binOp end*/bufsalloc)
    {
      /*compound start*//*binOp start*/maddr = /*binOp start*/buffer + /*compound end*//*binOp end*//*binOp end*/bufsalloc;
      /*compound start*//*binOp start*/maddr = mmap(maddr, /*binOp start*/bufalloc - /*binOp end*/bufsalloc, /*binOp start*/0x1 | /*binOp end*/0x2,
     /*binOp start*/0x02 | /*binOp end*/0x10, bufdesc, bufoffset/*compound end*//*binOp end*/);
      if (/*binOp start*/maddr == (caddr_t) -/*binOp end*/1)
 {
   fprintf(stdout, "%s: warning: %s: %s\n", filename,
    strerror((*__errno_location ())));
   goto tryread;
 }






      /*compound start*//*binOp start*/cc = /*binOp start*/bufalloc - /*compound end*//*binOp end*//*binOp end*/bufsalloc;
      /*assign start*//*binOp start*/bufoffset += /*assign end*//*binOp end*/cc;
    }
  else
    {
    tryread:



      if (bufmapped)
 {
   /*compound start*//*binOp start*/bufmapped = /*compound end*//*binOp end*/0;
   lseek(bufdesc, bufoffset, 0);
 }
      /*compound start*//*binOp start*/cc = read(bufdesc, /*binOp start*/buffer + /*binOp end*/bufsalloc, /*binOp start*/bufalloc - /*binOp end*/bufsalloc/*compound end*//*binOp end*/);
    }



  if (/*binOp start*/cc > /*binOp end*/0)
    /*binOp start*/buflim = /*binOp start*//*binOp start*/buffer + /*binOp end*/bufsalloc + /*binOp end*//*binOp end*/cc;
  else
    /*binOp start*/buflim = /*binOp start*/buffer + /*binOp end*//*binOp end*/bufsalloc;
  return cc;
}


static int out_quiet;
static int out_invert;
static int out_file;
static int out_line;
static int out_byte;
static int out_before;
static int out_after;


static size_t totalcc;
static char *lastnl;
static char *lastout;


static size_t totalnl;
static int pending;

static void
nlscan(lim)
     char *lim;
{
  char *beg;

  for (/*binOp start*/beg = /*binOp end*/lastnl; /*binOp start*/beg < /*binOp end*/lim; ++beg)
    if (/*binOp start*/*beg == /*binOp end*/'\n')
      ++totalnl;
  /*compound start*//*binOp start*/lastnl = /*compound end*//*binOp end*/beg;
}

static void
prline(beg, lim, sep)
     char *beg;
     char *lim;
     char sep;
{
  if (out_file)
    printf("%s%c", filename, sep);
  if (out_line)
    {
      nlscan(beg);
      printf("%d%c", ++totalnl, sep);
      /*compound start*//*binOp start*/lastnl = /*compound end*//*binOp end*/lim;
    }
  if (out_byte)
    printf("%lu%c", /*binOp start*/totalcc + (/*binOp start*/beg - /*binOp end*/bufbeg/*binOp end*/), sep);
  fwrite(beg, 1, /*binOp start*/lim - /*binOp end*/beg, stdout);
  if (ferror(stdout))
    error("writing output", (*__errno_location ()));
  /*compound start*//*binOp start*/lastout = /*compound end*//*binOp end*/lim;
}


static void
prpending(lim)
     char *lim;
{
  char *nl;

  if (!lastout)
    /*binOp start*/lastout = /*binOp end*/bufbeg;
  while (/*binOp start*//*binOp start*/pending > /*binOp end*/0 && /*binOp start*/lastout < /*binOp end*//*binOp end*/lim)
    {
      --pending;
      if (/*binOp start*/(/*binOp start*/nl = memchr(lastout, '\n', /*binOp start*/lim - /*binOp end*/lastout/*binOp end*/)) != /*binOp end*/0)
 ++nl;
      else
 /*binOp start*/nl = /*binOp end*/lim;
      prline(lastout, nl, '-');
    }
}



static void
prtext(beg, lim, nlinesp)
     char *beg;
     char *lim;
     int *nlinesp;
{
  static int used;
  char *bp, *p, *nl;
  int i, n;

  if (/*binOp start*/!out_quiet && /*binOp start*/pending > /*binOp end*//*binOp end*/0)
    prpending(beg);

  /*compound start*//*binOp start*/p = /*compound end*//*binOp end*/beg;

  if (!out_quiet)
    {


      /*compound start*//*binOp start*/bp = lastout ? lastout : /*compound end*//*binOp end*/bufbeg;
      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp end*/out_before; ++i)
 if (/*binOp start*/p > /*binOp end*/bp)
   do
     --p;
   while (/*binOp start*//*binOp start*/p > /*binOp end*/bp && /*binOp start*/p[-1] != /*binOp end*//*binOp end*/'\n');



      if (/*binOp start*//*binOp start*/(/*binOp start*/out_before || /*binOp end*/out_after) && /*binOp end*/used && /*binOp start*/p != /*binOp end*//*binOp end*/lastout)
 puts("--");

      while (/*binOp start*/p < /*binOp end*/beg)
 {
   /*compound start*//*binOp start*/nl = memchr(p, '\n', /*binOp start*/beg - /*binOp end*/p/*compound end*//*binOp end*/);
   prline(p, /*binOp start*/nl + /*binOp end*/1, '-');
   /*compound start*//*binOp start*/p = /*binOp start*/nl + /*compound end*//*binOp end*//*binOp end*/1;
 }
    }

  if (nlinesp)
    {

      for (/*binOp start*/n = /*binOp end*/0; /*binOp start*/p < /*binOp end*/lim; ++n)
 {
   if (/*binOp start*/(/*binOp start*/nl = memchr(p, '\n', /*binOp start*/lim - /*binOp end*/p/*binOp end*/)) != /*binOp end*/0)
     ++nl;
   else
     /*binOp start*/nl = /*binOp end*/lim;
   if (!out_quiet)
     prline(p, nl, ':');
   /*compound start*//*binOp start*/p = /*compound end*//*binOp end*/nl;
 }
      /*compound start*//*binOp start*/*nlinesp = /*compound end*//*binOp end*/n;
    }
  else
    if (!out_quiet)
      prline(beg, lim, ':');

  /*compound start*//*binOp start*/pending = /*compound end*//*binOp end*/out_after;
  /*compound start*//*binOp start*/used = /*compound end*//*binOp end*/1;
}




static int
grepbuf(beg, lim)
     char *beg;
     char *lim;
{
  int nlines, n;
  register char *p, *b;
  char *endp;

  /*compound start*//*binOp start*/nlines = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/p = /*compound end*//*binOp end*/beg;
  while (/*binOp start*/(/*binOp start*/b = (*execute)(p, /*binOp start*/lim - /*binOp end*/p, &endp/*binOp end*/)) != /*binOp end*/0)
    {

      if (/*binOp start*//*binOp start*/b == /*binOp end*/lim && (/*binOp start*/(/*binOp start*//*binOp start*/b > /*binOp end*/beg && /*binOp start*/b[-1] == /*binOp end*//*binOp end*/'\n') || /*binOp start*/b == /*binOp end*//*binOp end*/beg/*binOp end*/))
 break;
      if (!out_invert)
 {
   prtext(b, endp, (int *) 0);
   /*assign start*//*binOp start*/nlines += /*assign end*//*binOp end*/1;
 }
      else if (/*binOp start*/p < /*binOp end*/b)
 {
   prtext(p, b, &n);
   /*assign start*//*binOp start*/nlines += /*assign end*//*binOp end*/n;
 }
      /*compound start*//*binOp start*/p = /*compound end*//*binOp end*/endp;
    }
  if (/*binOp start*/out_invert && /*binOp start*/p < /*binOp end*//*binOp end*/lim)
    {
      prtext(p, lim, &n);
      /*assign start*//*binOp start*/nlines += /*assign end*//*binOp end*/n;
    }
  return nlines;
}


static int
grep(fd)
     int fd;
{
  int nlines, i;
  size_t residue, save;
  char *beg, *lim;

  reset(fd);

  /*compound start*//*binOp start*/totalcc = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/lastout = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/totalnl = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/pending = /*compound end*//*binOp end*/0;

  /*compound start*//*binOp start*/nlines = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/residue = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/save = /*compound end*//*binOp end*/0;

  for (;;)
    {
      if (/*binOp start*/fillbuf(save) < /*binOp end*/0)
 {
   error(filename, (*__errno_location ()));
   return nlines;
 }
      /*compound start*//*binOp start*/lastnl = /*compound end*//*binOp end*/bufbeg;
      if (lastout)
 /*binOp start*/lastout = /*binOp end*/bufbeg;
      if (/*binOp start*//*binOp start*/buflim - /*binOp end*/bufbeg == /*binOp end*/save)
 break;
      /*compound start*//*binOp start*/beg = /*binOp start*//*binOp start*/bufbeg + /*binOp end*/save - /*compound end*//*binOp end*//*binOp end*/residue;
      for (/*binOp start*/lim = /*binOp end*/buflim; /*binOp start*//*binOp start*/lim > /*binOp end*/beg && /*binOp start*/lim[-1] != /*binOp end*//*binOp end*/'\n'; --lim)
 ;
      /*compound start*//*binOp start*/residue = /*binOp start*/buflim - /*compound end*//*binOp end*//*binOp end*/lim;
      if (/*binOp start*/beg < /*binOp end*/lim)
 {
   /*assign start*//*binOp start*/nlines += grepbuf(beg, lim/*assign end*//*binOp end*/);
   if (pending)
     prpending(lim);
 }
      /*compound start*//*binOp start*/i = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/beg = /*compound end*//*binOp end*/lim;
      while (/*binOp start*//*binOp start*//*binOp start*/i < /*binOp end*/out_before && /*binOp start*/beg > /*binOp end*//*binOp end*/bufbeg && /*binOp start*/beg != /*binOp end*//*binOp end*/lastout)
 {
   ++i;
   do
     --beg;
   while (/*binOp start*//*binOp start*/beg > /*binOp end*/bufbeg && /*binOp start*/beg[-1] != /*binOp end*//*binOp end*/'\n');
 }
      if (/*binOp start*/beg != /*binOp end*/lastout)
 /*binOp start*/lastout = /*binOp end*/0;
      /*compound start*//*binOp start*/save = /*binOp start*//*binOp start*/residue + /*binOp end*/lim - /*compound end*//*binOp end*//*binOp end*/beg;
      /*assign start*//*binOp start*/totalcc += /*binOp start*//*binOp start*/buflim - /*binOp end*/bufbeg - /*assign end*//*binOp end*//*binOp end*/save;
      if (out_line)
 nlscan(beg);
    }
  if (residue)
    {
      /*assign start*//*binOp start*/nlines += grepbuf(/*binOp start*//*binOp start*/bufbeg + /*binOp end*/save - /*binOp end*/residue, buflim/*assign end*//*binOp end*/);
      if (pending)
 prpending(buflim);
    }
  return nlines;
}

static char version[] = "GNU grep version 2.0";




static void
usage()
{
  fprintf(stdout, "usage: %s [-[[AB] ]<num>] [-[CEFGVchilnqsvwx]] [-[ef]] <expr> [<files...>]\n", prog);
  exit(2);
}



int
setmatcher(name)
     char *name;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; matchers[i].name; ++i)
    if (/*binOp start*/strcmp(name, matchers[i].name) == /*binOp end*/0)
      {
 /*compound start*//*binOp start*/compile = matchers[i]./*compound end*//*binOp end*/compile;
 /*compound start*//*binOp start*/execute = matchers[i]./*compound end*//*binOp end*/execute;
 return 1;
      }
  return 0;
}

int
main(argc, argv)
     int argc;
     char *argv[];
{
  char *keys;
  size_t keycc, oldcc, keyalloc;
  int keyfound, count_matches, no_filenames, list_files, suppress_errors;
  int opt, cc, desc, count, status;
  FILE *fp;
  extern char *optarg;
  extern int optind;

  /*compound start*//*binOp start*/argv[0] = /*compound end*//*binOp end*/"target";

  /*compound start*//*binOp start*/prog = argv[0/*compound end*//*binOp end*/];
  if (/*binOp start*/prog && strrchr(prog, '/'/*binOp end*/))
    /*binOp start*/prog = /*binOp start*/strrchr(prog, '/') + /*binOp end*//*binOp end*/1;

  /*compound start*//*binOp start*/keys = ((void *)0/*compound end*//*binOp end*/);
  /*compound start*//*binOp start*/keycc = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/keyfound = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/count_matches = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/no_filenames = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/list_files = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/suppress_errors = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/matcher = ((void *)0/*compound end*//*binOp end*/);

  while (/*binOp start*/(/*binOp start*/opt = getopt(argc, argv, "0123456789A:B:CEFGVX:bce:f:hiLlnqsvwxy"/*binOp end*/))
  != (-1/*binOp end*/))
    switch (opt)
      {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
 /*case comp start*//*binOp start*/out_before = /*binOp start*//*binOp start*//*binOp start*/10 * /*binOp end*/out_before + /*binOp end*/opt - /*case comp end*//*binOp end*//*binOp end*/'0';
 /*compound start*//*binOp start*/out_after = /*binOp start*//*binOp start*//*binOp start*/10 * /*binOp end*/out_after + /*binOp end*/opt - /*compound end*//*binOp end*//*binOp end*/'0';
 break;
      case 'A':
 /*case comp start*//*binOp start*/out_after = atoi(optarg/*case comp end*//*binOp end*/);
 if (/*binOp start*/out_after < /*binOp end*/0)
   usage();
 break;
      case 'B':
 /*case comp start*//*binOp start*/out_before = atoi(optarg/*case comp end*//*binOp end*/);
 if (/*binOp start*/out_before < /*binOp end*/0)
   usage();
 break;
      case 'C':
 /*case comp start*//*binOp start*/out_before = /*binOp start*/out_after = /*case comp end*//*binOp end*//*binOp end*/2;
 break;
      case 'E':
 if (/*binOp start*/matcher && /*binOp start*/strcmp(matcher, "egrep") != /*binOp end*//*binOp end*/0)
   fatal("you may specify only one of -E, -F, or -G", 0);
 /*compound start*//*binOp start*/matcher = /*compound end*//*binOp end*/"posix-egrep";
 break;
      case 'F':
 if (/*binOp start*/matcher && /*binOp start*/strcmp(matcher, "fgrep") != /*binOp end*//*binOp end*/0)
   fatal("you may specify only one of -E, -F, or -G", 0);;
 /*compound start*//*binOp start*/matcher = /*compound end*//*binOp end*/"fgrep";
 break;
      case 'G':
 if (/*binOp start*/matcher && /*binOp start*/strcmp(matcher, "grep") != /*binOp end*//*binOp end*/0)
   fatal("you may specify only one of -E, -F, or -G", 0);
 /*compound start*//*binOp start*/matcher = /*compound end*//*binOp end*/"grep";
 break;
      case 'V':
 fprintf(stdout, "%s\n", version);
 break;
      case 'X':
 if (matcher)
   fatal("matcher already specified", 0);
 /*compound start*//*binOp start*/matcher = /*compound end*//*binOp end*/optarg;
 break;
      case 'b':
 /*case comp start*//*binOp start*/out_byte = /*case comp end*//*binOp end*/1;
 break;
      case 'c':
 /*case comp start*//*binOp start*/out_quiet = /*case comp end*//*binOp end*/1;
 /*compound start*//*binOp start*/count_matches = /*compound end*//*binOp end*/1;
 break;
      case 'e':
 /*case comp start*//*binOp start*/cc = strlen(optarg/*case comp end*//*binOp end*/);
 /*compound start*//*binOp start*/keys = xrealloc(keys, /*binOp start*//*binOp start*/keycc + /*binOp end*/cc + /*binOp end*/1/*compound end*//*binOp end*/);
 if (keyfound)
   /*binOp start*/keys[keycc++] = /*binOp end*/'\n';
 strcpy(&keys[keycc], optarg);
 /*assign start*//*binOp start*/keycc += /*assign end*//*binOp end*/cc;
 /*compound start*//*binOp start*/keyfound = /*compound end*//*binOp end*/1;
 break;
      case 'f':
 /*case comp start*//*binOp start*/fp = /*binOp start*/strcmp(optarg, "-") != /*binOp end*/0 ? fopen(optarg, "r") : /*case comp end*//*binOp end*/stdin;
 if (!fp)
   fatal(optarg, (*__errno_location ()));
 for (/*binOp start*/keyalloc = /*binOp end*/1; /*binOp start*/keyalloc <= /*binOp end*/keycc; /*binOp start*/keyalloc *= /*binOp end*/2)
   ;
 /*compound start*//*binOp start*/keys = xrealloc(keys, keyalloc/*compound end*//*binOp end*/);
 /*compound start*//*binOp start*/oldcc = /*compound end*//*binOp end*/keycc;
 if (keyfound)
   /*binOp start*/keys[keycc++] = /*binOp end*/'\n';
 while (/*binOp start*/!feof(fp)
        && /*binOp start*/(/*binOp start*/cc = fread(/*binOp start*/keys + /*binOp end*/keycc, 1, /*binOp start*/keyalloc - /*binOp end*/keycc, fp/*binOp end*/)) > /*binOp end*//*binOp end*/0)
   {
     /*assign start*//*binOp start*/keycc += /*assign end*//*binOp end*/cc;
     if (/*binOp start*/keycc == /*binOp end*/keyalloc)
       /*binOp start*/keys = xrealloc(keys, /*binOp start*/keyalloc *= /*binOp end*/2/*binOp end*/);
   }
 if (/*binOp start*/fp != /*binOp end*/stdin)
   fclose(fp);

 if (/*binOp start*//*binOp start*//*binOp start*/keycc - /*binOp end*/oldcc > /*binOp end*/0 && /*binOp start*/keys[/*binOp start*/keycc - /*binOp end*/1] == /*binOp end*//*binOp end*/'\n')
   --keycc;
 /*compound start*//*binOp start*/keyfound = /*compound end*//*binOp end*/1;
 break;
      case 'h':
 /*case comp start*//*binOp start*/no_filenames = /*case comp end*//*binOp end*/1;
 break;
      case 'i':
      case 'y':
 /*case comp start*//*binOp start*/match_icase = /*case comp end*//*binOp end*/1;
 break;
      case 'L':


 /*case comp start*//*binOp start*/out_quiet = /*case comp end*//*binOp end*/1;
 /*compound start*//*binOp start*/list_files = -/*compound end*//*binOp end*/1;
 break;
      case 'l':
 /*case comp start*//*binOp start*/out_quiet = /*case comp end*//*binOp end*/1;
 /*compound start*//*binOp start*/list_files = /*compound end*//*binOp end*/1;
 break;
      case 'n':
 /*case comp start*//*binOp start*/out_line = /*case comp end*//*binOp end*/1;
 break;
      case 'q':
 /*case comp start*//*binOp start*/out_quiet = /*case comp end*//*binOp end*/1;
 break;
      case 's':
 /*case comp start*//*binOp start*/suppress_errors = /*case comp end*//*binOp end*/1;
 break;
      case 'v':
 /*case comp start*//*binOp start*/out_invert = /*case comp end*//*binOp end*/1;
 break;
      case 'w':
 /*case comp start*//*binOp start*/match_words = /*case comp end*//*binOp end*/1;
 break;
      case 'x':
 /*case comp start*//*binOp start*/match_lines = /*case comp end*//*binOp end*/1;
 break;
      default:
 usage();
 break;
      }

  if (!keyfound)
    if (/*binOp start*/optind < /*binOp end*/argc)
      {
 /*compound start*//*binOp start*/keys = argv[optind++/*compound end*//*binOp end*/];
 /*compound start*//*binOp start*/keycc = strlen(keys/*compound end*//*binOp end*/);
      }
    else
      usage();

  if (!matcher)
    /*binOp start*/matcher = /*binOp end*/prog;

  if (/*binOp start*/!setmatcher(matcher) && !setmatcher("default"/*binOp end*/))
    abort();

  (*compile)(keys, keycc);

  if (/*binOp start*//*binOp start*//*binOp start*/argc - /*binOp end*/optind > /*binOp end*/1 && !/*binOp end*/no_filenames)
    /*binOp start*/out_file = /*binOp end*/1;

  /*compound start*//*binOp start*/status = /*compound end*//*binOp end*/1;

  if (/*binOp start*/optind < /*binOp end*/argc)
    while (/*binOp start*/optind < /*binOp end*/argc)
      {
 /*compound start*//*binOp start*/desc = strcmp(argv[optind], "-") ? open(argv[optind], 00) : /*compound end*//*binOp end*/0;
 if (/*binOp start*/desc < /*binOp end*/0)
   {
     if (!suppress_errors)
       error(argv[optind], (*__errno_location ()));
   }
 else
   {
     /*compound start*//*binOp start*/filename = /*binOp start*/desc == /*binOp end*/0 ? "(standard input)" : argv[optind/*compound end*//*binOp end*/];
     /*compound start*//*binOp start*/count = grep(desc/*compound end*//*binOp end*/);
     if (count_matches)
       {
  if (out_file)
    printf("%s:", filename);
  printf("%d\n", count);
       }
     if (count)
       {
  /*compound start*//*binOp start*/status = /*compound end*//*binOp end*/0;
  if (/*binOp start*/list_files == /*binOp end*/1)
    printf("%s\n", filename);
       }
     else if (/*binOp start*/list_files == -/*binOp end*/1)
       printf("%s\n", filename);
   }
 if (/*binOp start*/desc != /*binOp end*/0)
   close(desc);
 ++optind;
      }
  else
    {
      /*compound start*//*binOp start*/filename = /*compound end*//*binOp end*/"(standard input)";
      /*compound start*//*binOp start*/count = grep(0/*compound end*//*binOp end*/);
      if (count_matches)
 printf("%d\n", count);
      if (count)
 {
   /*compound start*//*binOp start*/status = /*compound end*//*binOp end*/0;
   if (/*binOp start*/list_files == /*binOp end*/1)
     printf("(standard input)\n");
 }
      else if (/*binOp start*/list_files == -/*binOp end*/1)
 printf("(standard input)\n");
    }

  exit(errseen ? 2 : status);
}
# 1704 "target/grep.c"
static char re_syntax_table[256];

static void
init_syntax_once ()
{
   register int c;
   static int done = 0;

   if (done)
     return;

   memset ((re_syntax_table), 0, (sizeof re_syntax_table));

   for (/*binOp start*/c = /*binOp end*/'a'; /*binOp start*/c <= /*binOp end*/'z'; c++)
     /*binOp start*/re_syntax_table[c] = /*binOp end*/1;

   for (/*binOp start*/c = /*binOp end*/'A'; /*binOp start*/c <= /*binOp end*/'Z'; c++)
     /*binOp start*/re_syntax_table[c] = /*binOp end*/1;

   for (/*binOp start*/c = /*binOp end*/'0'; /*binOp start*/c <= /*binOp end*/'9'; c++)
     /*binOp start*/re_syntax_table[c] = /*binOp end*/1;

   /*compound start*//*binOp start*/re_syntax_table['_'] = /*compound end*//*binOp end*/1;

   /*compound start*//*binOp start*/done = /*compound end*//*binOp end*/1;
}
# 1738 "target/grep.c"
# 1 "target/regex.h" 1
# 38 "target/regex.h"
typedef unsigned reg_syntax_t;
# 137 "target/regex.h"
extern reg_syntax_t re_syntax_options;
# 246 "target/regex.h"
typedef enum
{
  REG_NOERROR = 0,
  REG_NOMATCH,



  REG_BADPAT,
  REG_ECOLLATE,
  REG_ECTYPE,
  REG_EESCAPE,
  REG_ESUBREG,
  REG_EBRACK,
  REG_EPAREN,
  REG_EBRACE,
  REG_BADBR,
  REG_ERANGE,
  REG_ESPACE,
  REG_BADRPT,


  REG_EEND,
  REG_ESIZE,
  REG_ERPAREN
} reg_errcode_t;







struct re_pattern_buffer
{




  unsigned char *buffer;


  unsigned long allocated;


  unsigned long used;


  reg_syntax_t syntax;




  char *fastmap;





  char *translate;


  size_t re_nsub;






  unsigned can_be_null : 1;
# 323 "target/regex.h"
  unsigned regs_allocated : 2;



  unsigned fastmap_accurate : 1;



  unsigned no_sub : 1;



  unsigned not_bol : 1;


  unsigned not_eol : 1;


  unsigned newline_anchor : 1;


};

typedef struct re_pattern_buffer regex_t;







typedef int regoff_t;




struct re_registers
{
  unsigned num_regs;
  regoff_t *start;
  regoff_t *end;
};
# 378 "target/regex.h"
typedef struct
{
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;
# 404 "target/regex.h"
extern reg_syntax_t re_set_syntax (reg_syntax_t syntax);




extern const char *re_compile_pattern
  (const char *pattern, int length, struct re_pattern_buffer *buffer);






extern int re_compile_fastmap (struct re_pattern_buffer *buffer);







extern int re_search
  (struct re_pattern_buffer *buffer, const char *string, int length, int start, int range, struct re_registers *regs);





extern int re_search_2
  (struct re_pattern_buffer *buffer, const char *string1, int length1, const char *string2, int length2, int start, int range, struct re_registers *regs, int stop);






extern int re_match
  (struct re_pattern_buffer *buffer, const char *string, int length, int start, struct re_registers *regs);




extern int re_match_2
  (struct re_pattern_buffer *buffer, const char *string1, int length1, const char *string2, int length2, int start, struct re_registers *regs, int stop);
# 464 "target/regex.h"
extern void re_set_registers
  (struct re_pattern_buffer *buffer, struct re_registers *regs, unsigned num_regs, regoff_t *starts, regoff_t *ends);



extern char *re_comp (const char *);
extern int re_exec (const char *);


extern int regcomp (regex_t *preg, const char *pattern, int cflags);
extern int regexec
  (const regex_t *preg, const char *string, size_t nmatch, regmatch_t pmatch[], int eflags);

extern size_t regerror
  (int errcode, const regex_t *preg, char *errbuf, size_t errbuf_size);

extern void regfree (regex_t *preg);
# 1739 "target/grep.c" 2


# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4

# 48 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = (/*binOp start*/(0) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (0/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (0/*binOp end*/)) >> /*binOp end*/8)),
  _ISlower = (/*binOp start*/(1) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (1/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (1/*binOp end*/)) >> /*binOp end*/8)),
  _ISalpha = (/*binOp start*/(2) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (2/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (2/*binOp end*/)) >> /*binOp end*/8)),
  _ISdigit = (/*binOp start*/(3) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (3/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (3/*binOp end*/)) >> /*binOp end*/8)),
  _ISxdigit = (/*binOp start*/(4) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (4/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (4/*binOp end*/)) >> /*binOp end*/8)),
  _ISspace = (/*binOp start*/(5) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (5/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (5/*binOp end*/)) >> /*binOp end*/8)),
  _ISprint = (/*binOp start*/(6) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (6/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (6/*binOp end*/)) >> /*binOp end*/8)),
  _ISgraph = (/*binOp start*/(7) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (7/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (7/*binOp end*/)) >> /*binOp end*/8)),
  _ISblank = (/*binOp start*/(8) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (8/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (8/*binOp end*/)) >> /*binOp end*/8)),
  _IScntrl = (/*binOp start*/(9) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (9/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (9/*binOp end*/)) >> /*binOp end*/8)),
  _ISpunct = (/*binOp start*/(10) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (10/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (10/*binOp end*/)) >> /*binOp end*/8)),
  _ISalnum = (/*binOp start*/(11) < /*binOp end*/8 ? (/*binOp start*/(/*binOp start*/1 << (11/*binOp end*/)) << /*binOp end*/8) : (/*binOp start*/(/*binOp start*/1 << (11/*binOp end*/)) >> /*binOp end*/8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));








extern int isblank (int) __attribute__ ((__nothrow__));


# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
# 323 "/usr/include/ctype.h" 3 4

# 1742 "target/grep.c" 2
# 1864 "target/grep.c"
typedef char boolean;
# 1877 "target/grep.c"
typedef enum
{
  no_op = 0,


  exactn = 1,


  anychar,







  charset,



  charset_not,
# 1906 "target/grep.c"
  start_memory,
# 1915 "target/grep.c"
  stop_memory,



  duplicate,


  begline,


  endline,



  begbuf,


  endbuf,


  jump,


  jump_past_alt,



  on_failure_jump,



  on_failure_keep_string_jump,



  pop_failure_jump,
# 1959 "target/grep.c"
  maybe_pop_jump,






  dummy_failure_jump,



  push_dummy_failure,



  succeed_n,



  jump_n,




  set_number_at,

  wordchar,
  notwordchar,

  wordbeg,
  wordend,

  wordbound,
  notwordbound
# 2006 "target/grep.c"
} re_opcode_t;
# 2448 "target/grep.c"
reg_syntax_t re_syntax_options = 0;
# 2458 "target/grep.c"
reg_syntax_t
re_set_syntax (syntax)
    reg_syntax_t syntax;
{
  reg_syntax_t ret = re_syntax_options;

  /*compound start*//*binOp start*/re_syntax_options = /*compound end*//*binOp end*/syntax;
  return ret;
}




static const char *re_error_msg[] =
  { ((void *)0),
    "No match",
    "Invalid regular expression",
    "Invalid collation character",
    "Invalid character class name",
    "Trailing backslash",
    "Invalid back reference",
    "Unmatched [ or [^",
    "Unmatched ( or \\(",
    "Unmatched \\{",
    "Invalid content of \\{\\}",
    "Invalid range end",
    "Memory exhausted",
    "Invalid preceding regular expression",
    "Premature end of regular expression",
    "Regular expression too big",
    "Unmatched ) or \\)",
  };



static void store_op1 (), store_op2 ();
static void insert_op1 (), insert_op2 ();
static boolean at_begline_loc_p (), at_endline_loc_p ();
static boolean group_in_compile_stack ();
static reg_errcode_t compile_range ();
# 2625 "target/grep.c"
typedef unsigned regnum_t;






typedef int pattern_offset_t;

typedef struct
{
  pattern_offset_t begalt_offset;
  pattern_offset_t fixup_alt_jump;
  pattern_offset_t inner_group_offset;
  pattern_offset_t laststart_offset;
  regnum_t regnum;
} compile_stack_elt_t;


typedef struct
{
  compile_stack_elt_t *stack;
  unsigned size;
  unsigned avail;
} compile_stack_type;
# 2712 "target/grep.c"
static reg_errcode_t
regex_compile (pattern, size, syntax, bufp)
     const char *pattern;
     int size;
     reg_syntax_t syntax;
     struct re_pattern_buffer *bufp;
{



  register unsigned char c, c1;


  const char *p1;


  register unsigned char *b;


  compile_stack_type compile_stack;


  const char *p = pattern;
  const char *pend = /*binOp start*/pattern + /*binOp end*/size;


  char *translate = bufp->translate;





  unsigned char *pending_exact = 0;




  unsigned char *laststart = 0;


  unsigned char *begalt;



  const char *beg_interval;




  unsigned char *fixup_alt_jump = 0;




  regnum_t regnum = 0;
# 2781 "target/grep.c"
  /*compound start*//*binOp start*/compile_stack.stack = ((compile_stack_elt_t *) malloc (/*binOp start*/(32) * sizeof (compile_stack_elt_t/*binOp end*/))/*compound end*//*binOp end*/);
  if (/*binOp start*/compile_stack.stack == ((void *)0/*binOp end*/))
    return REG_ESPACE;

  /*compound start*//*binOp start*/compile_stack.size = /*compound end*//*binOp end*/32;
  /*compound start*//*binOp start*/compile_stack.avail = /*compound end*//*binOp end*/0;


  /*compound start*//*binOp start*/bufp->syntax = /*compound end*//*binOp end*/syntax;
  /*compound start*//*binOp start*/bufp->fastmap_accurate = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/bufp->not_bol = /*binOp start*/bufp->not_eol = /*compound end*//*binOp end*//*binOp end*/0;




  /*compound start*//*binOp start*/bufp->used = /*compound end*//*binOp end*/0;


  /*compound start*//*binOp start*/bufp->re_nsub = /*compound end*//*binOp end*/0;



   init_syntax_once ();


  if (/*binOp start*/bufp->allocated == /*binOp end*/0)
    {
      if (bufp->buffer)
 {


          (/*binOp start*/(bufp->buffer) = (unsigned char *) realloc (bufp->buffer, /*binOp start*/(32) * sizeof (unsigned char/*binOp end*/)/*binOp end*/));
        }
      else
        {
          /*compound start*//*binOp start*/bufp->buffer = ((unsigned char *) malloc (/*binOp start*/(32) * sizeof (unsigned char/*binOp end*/))/*compound end*//*binOp end*/);
        }
      if (!bufp->buffer) return REG_ESPACE;

      /*compound start*//*binOp start*/bufp->allocated = /*compound end*//*binOp end*/32;
    }

  /*compound start*//*binOp start*/begalt = /*binOp start*/b = bufp->/*compound end*//*binOp end*//*binOp end*/buffer;


  while (/*binOp start*/p != /*binOp end*/pend)
    {
      do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0);

      switch (c)
        {
        case '^':
          {
            if (
                   /*binOp start*//*binOp start*//*binOp start*/p == /*binOp start*/pattern + /*binOp end*//*binOp end*/1

                || /*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*//*binOp end*/)

                || at_begline_loc_p (pattern, p, syntax/*binOp end*/))
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (begline/*compound end*//*binOp end*/); } while (0);
            else
              goto normal_char;
          }
          break;


        case '$':
          {
            if (
                   /*binOp start*//*binOp start*//*binOp start*/p == /*binOp end*/pend

                || /*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*//*binOp end*/)

                || at_endline_loc_p (p, pend, syntax/*binOp end*/))
               do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (endline/*compound end*//*binOp end*/); } while (0);
             else
               goto normal_char;
           }
           break;


 case '+':
        case '?':
          if (/*binOp start*/(/*binOp start*/syntax & (/*binOp start*/(1) << /*binOp end*/1/*binOp end*/))
              || (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)/*binOp end*/))
            goto normal_char;
        handle_plus:
        case '*':

          if (!laststart)
            {
              if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                return REG_BADRPT;
              else if (!(/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)))
                goto normal_char;
            }

          {

            boolean keep_string_p = 0;


            char zero_times_ok = 0, many_times_ok = 0;






            for (;;)
              {
                /*assign start*//*binOp start*/zero_times_ok |= /*binOp start*/c != /*assign end*//*binOp end*//*binOp end*/'+';
                /*assign start*//*binOp start*/many_times_ok |= /*binOp start*/c != /*assign end*//*binOp end*//*binOp end*/'?';

                if (/*binOp start*/p == /*binOp end*/pend)
                  break;

                do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0);

                if (/*binOp start*//*binOp start*/c == /*binOp end*/'*'
                    || (/*binOp start*/!(/*binOp start*/syntax & (/*binOp start*/(1) << /*binOp end*/1/*binOp end*/)) && (/*binOp start*//*binOp start*/c == /*binOp end*/'+' || /*binOp start*/c == /*binOp end*//*binOp end*/'?'/*binOp end*/)/*binOp end*/))
                  ;

                else if (/*binOp start*//*binOp start*/syntax & (/*binOp start*/(1) << /*binOp end*/1/*binOp end*/) && /*binOp start*/c == /*binOp end*//*binOp end*/'\\')
                  {
                    if (/*binOp start*/p == /*binOp end*/pend) return REG_EESCAPE;

                    do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c1 = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c1 = translate[c1/*binOp end*/]; } while (0);
                    if (!(/*binOp start*//*binOp start*/c1 == /*binOp end*/'+' || /*binOp start*/c1 == /*binOp end*//*binOp end*/'?'))
                      {
                        p--;
                        p--;
                        break;
                      }

                    /*compound start*//*binOp start*/c = /*compound end*//*binOp end*/c1;
                  }
                else
                  {
                    p--;
                    break;
                  }


               }



            if (!laststart)
              break;



            if (many_times_ok)
              {
# 2945 "target/grep.c"
                ;


                while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (3/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0);






                if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/(translate ? translate[(unsigned char) (*(/*binOp start*/p - /*binOp end*/2))] : (*(/*binOp start*/p - /*binOp end*/2))) == (translate ? translate[(unsigned char) ('.')] : ('.')/*binOp end*/)
      && /*binOp end*/zero_times_ok
                    && /*binOp start*/p < /*binOp end*//*binOp end*/pend && /*binOp start*/(translate ? translate[(unsigned char) (*p)] : (*p)) == (translate ? translate[(unsigned char) ('\n')] : ('\n')/*binOp end*//*binOp end*/)
                    && !(/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)/*binOp end*/))
                  {
                    store_op1 (jump, b, /*binOp start*//*binOp start*/(laststart) - (b/*binOp end*/) - /*binOp end*/3);
                    /*compound start*//*binOp start*/keep_string_p = /*compound end*//*binOp end*/1;
                  }
                else

                  store_op1 (maybe_pop_jump, b, /*binOp start*//*binOp start*/(/*binOp start*/laststart - /*binOp end*/3) - (b/*binOp end*/) - /*binOp end*/3);


                /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/3;
              }



            while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (3/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0);
            insert_op1 (keep_string_p ? on_failure_keep_string_jump : on_failure_jump, laststart, /*binOp start*//*binOp start*/(/*binOp start*/b + /*binOp end*/3) - (laststart/*binOp end*/) - /*binOp end*/3, b);


            /*compound start*//*binOp start*/pending_exact = /*compound end*//*binOp end*/0;
            /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/3;

            if (!zero_times_ok)
              {





                while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (3/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0);
                insert_op1 (dummy_failure_jump, laststart, /*binOp start*//*binOp start*/(/*binOp start*/laststart + /*binOp end*/6) - (laststart/*binOp end*/) - /*binOp end*/3, b);
                /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/3;
              }
            }
   break;


 case '.':
          /*case comp start*//*binOp start*/laststart = /*case comp end*//*binOp end*/b;
          do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (anychar/*compound end*//*binOp end*/); } while (0);
          break;


        case '[':
          {
            boolean had_char_class = 0;

            if (/*binOp start*/p == /*binOp end*/pend) return REG_EBRACK;



     while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (34/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0);

            /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/b;



            do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (/*binOp start*/*p == /*binOp end*/'^' ? charset_not : charset/*compound end*//*binOp end*/); } while (0);
            if (/*binOp start*/*p == /*binOp end*/'^')
              p++;


            /*compound start*//*binOp start*/p1 = /*compound end*//*binOp end*/p;


            do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (/*binOp start*/(/*binOp start*/1 << /*binOp end*/8) / /*binOp end*/8/*compound end*//*binOp end*/); } while (0);


            memset ((b), 0, (/*binOp start*/(/*binOp start*/1 << /*binOp end*/8) / /*binOp end*/8));


            if (/*binOp start*//*binOp start*/(re_opcode_t) b[-2] == /*binOp end*/charset_not
                && (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)/*binOp end*/))
              (/*binOp start*/b[/*binOp start*/((unsigned char) ('\n')) / /*binOp end*/8] |= /*binOp start*/1 << (/*binOp start*/((unsigned char) '\n') % /*binOp end*/8/*binOp end*//*binOp end*/));


            for (;;)
              {
                if (/*binOp start*/p == /*binOp end*/pend) return REG_EBRACK;

                do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0);


                if (/*binOp start*/(/*binOp start*/syntax & (1/*binOp end*/)) && /*binOp start*/c == /*binOp end*//*binOp end*/'\\')
                  {
                    if (/*binOp start*/p == /*binOp end*/pend) return REG_EESCAPE;

                    do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c1 = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c1 = translate[c1/*binOp end*/]; } while (0);
                    (/*binOp start*/b[/*binOp start*/((unsigned char) (c1)) / /*binOp end*/8] |= /*binOp start*/1 << (/*binOp start*/((unsigned char) c1) % /*binOp end*/8/*binOp end*//*binOp end*/));
                    continue;
                  }




                if (/*binOp start*//*binOp start*/c == /*binOp end*/']' && /*binOp start*/p != /*binOp start*/p1 + /*binOp end*//*binOp end*//*binOp end*/1)
                  break;



                if (/*binOp start*//*binOp start*/had_char_class && /*binOp start*/c == /*binOp end*//*binOp end*/'-' && /*binOp start*/*p != /*binOp end*//*binOp end*/']')
                  return REG_ERANGE;





                if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*/c == /*binOp end*/'-'
                    && !(/*binOp start*//*binOp start*//*binOp start*/p - /*binOp end*/2 >= /*binOp end*/pattern && /*binOp start*/p[-2] == /*binOp end*//*binOp end*/'['/*binOp end*/)
                    && !(/*binOp start*//*binOp start*//*binOp start*//*binOp start*/p - /*binOp end*/3 >= /*binOp end*/pattern && /*binOp start*/p[-3] == /*binOp end*//*binOp end*/'[' && /*binOp start*/p[-2] == /*binOp end*//*binOp end*/'^'/*binOp end*/)
                    && /*binOp start*/*p != /*binOp end*//*binOp end*/']')
                  {
                    reg_errcode_t ret
                      = compile_range (&p, pend, translate, syntax, b);
                    if (/*binOp start*/ret != /*binOp end*/REG_NOERROR) return ret;
                  }

                else if (/*binOp start*//*binOp start*/p[0] == /*binOp end*/'-' && /*binOp start*/p[1] != /*binOp end*//*binOp end*/']')
                  {
                    reg_errcode_t ret;


                    do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c1 = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c1 = translate[c1/*binOp end*/]; } while (0);

                    /*compound start*//*binOp start*/ret = compile_range (&p, pend, translate, syntax, b/*compound end*//*binOp end*/);
                    if (/*binOp start*/ret != /*binOp end*/REG_NOERROR) return ret;
                  }




                else if (/*binOp start*//*binOp start*//*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) && /*binOp start*/c == /*binOp end*//*binOp end*/'[' && /*binOp start*/*p == /*binOp end*//*binOp end*/':')
                  {
                    char str[/*binOp start*/6 + /*binOp end*/1];

                    do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0);
                    /*compound start*//*binOp start*/c1 = /*compound end*//*binOp end*/0;


                    if (/*binOp start*/p == /*binOp end*/pend) return REG_EBRACK;

                    for (;;)
                      {
                        do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0);
                        if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*/c == /*binOp end*/':' || /*binOp start*/c == /*binOp end*//*binOp end*/']' || /*binOp start*/p == /*binOp end*//*binOp end*/pend
                            || /*binOp start*/c1 == /*binOp end*//*binOp end*/6)
                          break;
                        /*compound start*//*binOp start*/str[c1++] = /*compound end*//*binOp end*/c;
                      }
                    /*compound start*//*binOp start*/str[c1] = /*compound end*//*binOp end*/'\0';




                    if (/*binOp start*//*binOp start*/c == /*binOp end*/':' && /*binOp start*/*p == /*binOp end*//*binOp end*/']')
                      {
                        int ch;
                        boolean is_alnum = ((/*binOp start*/strcmp (str, "alnum") == /*binOp end*/0));
                        boolean is_alpha = ((/*binOp start*/strcmp (str, "alpha") == /*binOp end*/0));
                        boolean is_blank = ((/*binOp start*/strcmp (str, "blank") == /*binOp end*/0));
                        boolean is_cntrl = ((/*binOp start*/strcmp (str, "cntrl") == /*binOp end*/0));
                        boolean is_digit = ((/*binOp start*/strcmp (str, "digit") == /*binOp end*/0));
                        boolean is_graph = ((/*binOp start*/strcmp (str, "graph") == /*binOp end*/0));
                        boolean is_lower = ((/*binOp start*/strcmp (str, "lower") == /*binOp end*/0));
                        boolean is_print = ((/*binOp start*/strcmp (str, "print") == /*binOp end*/0));
                        boolean is_punct = ((/*binOp start*/strcmp (str, "punct") == /*binOp end*/0));
                        boolean is_space = ((/*binOp start*/strcmp (str, "space") == /*binOp end*/0));
                        boolean is_upper = ((/*binOp start*/strcmp (str, "upper") == /*binOp end*/0));
                        boolean is_xdigit = ((/*binOp start*/strcmp (str, "xdigit") == /*binOp end*/0));

                        if (!(/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/((/*binOp start*/strcmp (str, "alpha") == /*binOp end*/0)) || ((/*binOp start*/strcmp (str, "upper") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "lower") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "digit") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "alnum") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "xdigit") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "space") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "print") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "punct") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "graph") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "cntrl") == /*binOp end*/0)/*binOp end*/) || ((/*binOp start*/strcmp (str, "blank") == /*binOp end*/0)/*binOp end*/))) return REG_ECTYPE;



                        do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0);

                        if (/*binOp start*/p == /*binOp end*/pend) return REG_EBRACK;

                        for (/*binOp start*/ch = /*binOp end*/0; /*binOp start*/ch < /*binOp start*/1 << /*binOp end*//*binOp end*/8; ch++)
                          {
                            if ( /*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/is_alnum && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)/*binOp end*/))
                                || (/*binOp start*/is_alpha && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISalpha/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_blank && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISblank/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_cntrl && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_IScntrl/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_digit && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISdigit/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_graph && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISgraph/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_lower && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISlower/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_print && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISprint/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_punct && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISpunct/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_space && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISspace/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_upper && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISupper/*binOp end*/)/*binOp end*/)/*binOp end*/)
                                || (/*binOp start*/is_xdigit && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) /*binOp end*/_ISxdigit/*binOp end*/)/*binOp end*/)/*binOp end*/))
                            (/*binOp start*/b[/*binOp start*/((unsigned char) (ch)) / /*binOp end*/8] |= /*binOp start*/1 << (/*binOp start*/((unsigned char) ch) % /*binOp end*/8/*binOp end*//*binOp end*/));
                          }
                        /*compound start*//*binOp start*/had_char_class = /*compound end*//*binOp end*/1;
                      }
                    else
                      {
                        c1++;
                        while (c1--)
                          p--;
                        (/*binOp start*/b[/*binOp start*/((unsigned char) ('[')) / /*binOp end*/8] |= /*binOp start*/1 << (/*binOp start*/((unsigned char) '[') % /*binOp end*/8/*binOp end*//*binOp end*/));
                        (/*binOp start*/b[/*binOp start*/((unsigned char) (':')) / /*binOp end*/8] |= /*binOp start*/1 << (/*binOp start*/((unsigned char) ':') % /*binOp end*/8/*binOp end*//*binOp end*/));
                        /*compound start*//*binOp start*/had_char_class = /*compound end*//*binOp end*/0;
                      }
                  }
                else
                  {
                    /*compound start*//*binOp start*/had_char_class = /*compound end*//*binOp end*/0;
                    (/*binOp start*/b[/*binOp start*/((unsigned char) (c)) / /*binOp end*/8] |= /*binOp start*/1 << (/*binOp start*/((unsigned char) c) % /*binOp end*/8/*binOp end*//*binOp end*/));
                  }
              }



            while (/*binOp start*//*binOp start*/(int) b[-1] > /*binOp end*/0 && /*binOp start*/b[/*binOp start*/b[-1] - /*binOp end*/1] == /*binOp end*//*binOp end*/0)
              b[-1]--;
            /*assign start*//*binOp start*/b += b[-1/*assign end*//*binOp end*/];
          }
          break;


 case '(':
          if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
            goto handle_open;
          else
            goto normal_char;


        case ')':
          if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
            goto handle_close;
          else
            goto normal_char;


        case '\n':
          if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
            goto handle_alt;
          else
            goto normal_char;


 case '|':
          if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
            goto handle_alt;
          else
            goto normal_char;


        case '{':
           if (/*binOp start*//*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) && /*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*//*binOp end*/))
             goto handle_interval;
           else
             goto normal_char;


        case '\\':
          if (/*binOp start*/p == /*binOp end*/pend) return REG_EESCAPE;




          do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; } while (0);

          switch (c)
            {
            case '(':
              if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                goto normal_backslash;

            handle_open:
              bufp->re_nsub++;
              regnum++;

              if ((/*binOp start*/compile_stack.avail == compile_stack./*binOp end*/size))
                {
                  (/*binOp start*/(compile_stack.stack) = (compile_stack_elt_t *) realloc (compile_stack.stack, /*binOp start*/(/*binOp start*/compile_stack.size << /*binOp end*/1) * sizeof (compile_stack_elt_t/*binOp end*/)/*binOp end*/));

                  if (/*binOp start*/compile_stack.stack == ((void *)0/*binOp end*/)) return REG_ESPACE;

                  /*assign start*//*binOp start*/compile_stack.size <<= /*assign end*//*binOp end*/1;
                }





              /*compound start*//*binOp start*/(compile_stack.stack[compile_stack.avail]).begalt_offset = /*binOp start*/begalt - bufp->/*compound end*//*binOp end*//*binOp end*/buffer;
              /*compound start*//*binOp start*/(compile_stack.stack[compile_stack.avail]).fixup_alt_jump
                = fixup_alt_jump ? /*binOp start*//*binOp start*/fixup_alt_jump - bufp->/*binOp end*/buffer + /*binOp end*/1 : /*compound end*//*binOp end*/0;
              /*compound start*//*binOp start*/(compile_stack.stack[compile_stack.avail]).laststart_offset = /*binOp start*/b - bufp->/*compound end*//*binOp end*//*binOp end*/buffer;
              /*compound start*//*binOp start*/(compile_stack.stack[compile_stack.avail]).regnum = /*compound end*//*binOp end*/regnum;





              if (/*binOp start*/regnum <= /*binOp end*/255)
                {
                  /*compound start*//*binOp start*/(compile_stack.stack[compile_stack.avail]).inner_group_offset = /*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + /*compound end*//*binOp end*//*binOp end*/2;
                  do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (3/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (start_memory/*compound end*//*binOp end*/); /*compound start*//*binOp start*/*b++ = (unsigned char) (regnum/*compound end*//*binOp end*/); /*compound start*//*binOp start*/*b++ = (unsigned char) (0/*compound end*//*binOp end*/); } while (0);
                }

              compile_stack.avail++;

              /*compound start*//*binOp start*/fixup_alt_jump = /*compound end*//*binOp end*/0;
              /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/0;
              /*compound start*//*binOp start*/begalt = /*compound end*//*binOp end*/b;



       /*compound start*//*binOp start*/pending_exact = /*compound end*//*binOp end*/0;
              break;


            case ')':
              if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) goto normal_backslash;

              if ((/*binOp start*/compile_stack.avail == /*binOp end*/0))
                if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                  goto normal_backslash;
                else
                  return REG_ERPAREN;

            handle_close:
              if (fixup_alt_jump)
                {



                  do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (push_dummy_failure/*compound end*//*binOp end*/); } while (0);



                  store_op1 (jump_past_alt, fixup_alt_jump, /*binOp start*//*binOp start*/(/*binOp start*/b - /*binOp end*/1) - (fixup_alt_jump/*binOp end*/) - /*binOp end*/3);
                }


              if ((/*binOp start*/compile_stack.avail == /*binOp end*/0))
                if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                  goto normal_char;
                else
                  return REG_ERPAREN;



              ;
              {



                regnum_t this_group_regnum;

                compile_stack.avail--;
                /*compound start*//*binOp start*/begalt = /*binOp start*/bufp->buffer + (compile_stack.stack[compile_stack.avail])./*compound end*//*binOp end*//*binOp end*/begalt_offset;
                /*compound start*//*binOp start*/fixup_alt_jump
                  = (compile_stack.stack[compile_stack.avail]).fixup_alt_jump
                    ? /*binOp start*//*binOp start*/bufp->buffer + (compile_stack.stack[compile_stack.avail])./*binOp end*/fixup_alt_jump - /*binOp end*/1
                    : /*compound end*//*binOp end*/0;
                /*compound start*//*binOp start*/laststart = /*binOp start*/bufp->buffer + (compile_stack.stack[compile_stack.avail])./*compound end*//*binOp end*//*binOp end*/laststart_offset;
                /*compound start*//*binOp start*/this_group_regnum = (compile_stack.stack[compile_stack.avail])./*compound end*//*binOp end*/regnum;



  /*compound start*//*binOp start*/pending_exact = /*compound end*//*binOp end*/0;



                if (/*binOp start*/this_group_regnum <= /*binOp end*/255)
                  {
                    unsigned char *inner_group_loc
                      = /*binOp start*/bufp->buffer + (compile_stack.stack[compile_stack.avail])./*binOp end*/inner_group_offset;

                    /*compound start*//*binOp start*/*inner_group_loc = /*binOp start*/regnum - /*compound end*//*binOp end*//*binOp end*/this_group_regnum;
                    do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (3/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (stop_memory/*compound end*//*binOp end*/); /*compound start*//*binOp start*/*b++ = (unsigned char) (this_group_regnum/*compound end*//*binOp end*/); /*compound start*//*binOp start*/*b++ = (unsigned char) (/*binOp start*/regnum - /*binOp end*/this_group_regnum/*compound end*//*binOp end*/); } while (0);

                  }
              }
              break;


            case '|':
              if (/*binOp start*//*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) || /*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*//*binOp end*/))
                goto normal_backslash;
            handle_alt:
              if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                goto normal_char;



              while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (3/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0);
              insert_op1 (on_failure_jump, begalt, /*binOp start*//*binOp start*/(/*binOp start*/b + /*binOp end*/6) - (begalt/*binOp end*/) - /*binOp end*/3, b);
              /*compound start*//*binOp start*/pending_exact = /*compound end*//*binOp end*/0;
              /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/3;
# 3370 "target/grep.c"
              if (fixup_alt_jump)
                store_op1 (jump_past_alt, fixup_alt_jump, /*binOp start*//*binOp start*/(b) - (fixup_alt_jump/*binOp end*/) - /*binOp end*/3);




              /*compound start*//*binOp start*/fixup_alt_jump = /*compound end*//*binOp end*/b;
              while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (3/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0);
              /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/3;

              /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/0;
              /*compound start*//*binOp start*/begalt = /*compound end*//*binOp end*/b;
              break;


            case '{':

              if (/*binOp start*//*binOp start*/!(/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))


                  || (/*binOp start*/(/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) && (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)/*binOp end*/)/*binOp end*/)
                  || (/*binOp start*//*binOp start*//*binOp start*/p - /*binOp end*/2 == /*binOp end*/pattern && /*binOp start*/p == /*binOp end*//*binOp end*/pend/*binOp end*/))
                goto normal_backslash;

            handle_interval:
              {



                int lower_bound = -1, upper_bound = -1;

                /*compound start*//*binOp start*/beg_interval = /*binOp start*/p - /*compound end*//*binOp end*//*binOp end*/1;

                if (/*binOp start*/p == /*binOp end*/pend)
                  {
                    if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                      goto unfetch_interval;
                    else
                      return REG_EBRACE;
                  }

                { if (/*binOp start*/p != /*binOp end*/pend) { do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0); while ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISdigit/*binOp end*/))) { if (/*binOp start*/lower_bound < /*binOp end*/0) /*binOp start*/lower_bound = /*binOp end*/0; /*compound start*//*binOp start*/lower_bound = /*binOp start*//*binOp start*//*binOp start*/lower_bound * /*binOp end*/10 + /*binOp end*/c - /*compound end*//*binOp end*//*binOp end*/'0'; if (/*binOp start*/p == /*binOp end*/pend) break; do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0); } } };

                if (/*binOp start*/c == /*binOp end*/',')
                  {
                    { if (/*binOp start*/p != /*binOp end*/pend) { do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0); while ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISdigit/*binOp end*/))) { if (/*binOp start*/upper_bound < /*binOp end*/0) /*binOp start*/upper_bound = /*binOp end*/0; /*compound start*//*binOp start*/upper_bound = /*binOp start*//*binOp start*//*binOp start*/upper_bound * /*binOp end*/10 + /*binOp end*/c - /*compound end*//*binOp end*//*binOp end*/'0'; if (/*binOp start*/p == /*binOp end*/pend) break; do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0); } } };
                    if (/*binOp start*/upper_bound < /*binOp end*/0) /*binOp start*/upper_bound = (/*binOp start*/(/*binOp start*/1 << /*binOp end*/15) - /*binOp end*/1/*binOp end*/);
                  }
                else

                  /*binOp start*/upper_bound = /*binOp end*/lower_bound;

                if (/*binOp start*//*binOp start*//*binOp start*/lower_bound < /*binOp end*/0 || /*binOp start*/upper_bound > (/*binOp start*/(/*binOp start*/1 << /*binOp end*/15) - /*binOp end*/1/*binOp end*//*binOp end*/)
                    || /*binOp start*/lower_bound > /*binOp end*//*binOp end*/upper_bound)
                  {
                    if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                      goto unfetch_interval;
                    else
                      return REG_BADBR;
                  }

                if (!(/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)))
                  {
                    if (/*binOp start*/c != /*binOp end*/'\\') return REG_EBRACE;

                    do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0);
                  }

                if (/*binOp start*/c != /*binOp end*/'}')
                  {
                    if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                      goto unfetch_interval;
                    else
                      return REG_BADBR;
                  }




                if (!laststart)
                  {
                    if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                      return REG_BADRPT;
                    else if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                      /*binOp start*/laststart = /*binOp end*/b;
                    else
                      goto unfetch_interval;
                  }




                 if (/*binOp start*/upper_bound == /*binOp end*/0)
                   {
                     while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (3/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0);
                     insert_op1 (jump, laststart, /*binOp start*//*binOp start*/(/*binOp start*/b + /*binOp end*/3) - (laststart/*binOp end*/) - /*binOp end*/3, b);
                     /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/3;
                   }
# 3478 "target/grep.c"
                 else
                   {

                     unsigned nbytes = /*binOp start*/10 + /*binOp start*/(/*binOp start*/upper_bound > /*binOp end*/1) * /*binOp end*//*binOp end*/10;

                     while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (nbytes/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0);






                     insert_op2 (succeed_n, laststart, /*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/b + /*binOp end*/5 + /*binOp start*/(/*binOp start*/upper_bound > /*binOp end*/1) * /*binOp end*//*binOp end*/5) - (laststart/*binOp end*/) - /*binOp end*/3, lower_bound, b);


                     /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/5;





                     insert_op2 (set_number_at, laststart, 5, lower_bound, b);
                     /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/5;

                     if (/*binOp start*/upper_bound > /*binOp end*/1)
                       {






                         store_op2 (jump_n, b, /*binOp start*//*binOp start*/(/*binOp start*/laststart + /*binOp end*/5) - (b/*binOp end*/) - /*binOp end*/3, /*binOp start*/upper_bound - /*binOp end*/1);

                         /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/5;
# 3528 "target/grep.c"
                         insert_op2 (set_number_at, laststart, /*binOp start*/b - /*binOp end*/laststart,
                                     /*binOp start*/upper_bound - /*binOp end*/1, b);
                         /*assign start*//*binOp start*/b += /*assign end*//*binOp end*/5;
                       }
                   }
                /*compound start*//*binOp start*/pending_exact = /*compound end*//*binOp end*/0;
                /*compound start*//*binOp start*/beg_interval = ((void *)0/*compound end*//*binOp end*/);
              }
              break;

            unfetch_interval:

               ;
               /*compound start*//*binOp start*/p = /*compound end*//*binOp end*/beg_interval;
               /*compound start*//*binOp start*/beg_interval = ((void *)0/*compound end*//*binOp end*/);


               do {if (/*binOp start*/p == /*binOp end*/pend) return REG_EEND; /*compound start*//*binOp start*/c = (unsigned char) *p/*compound end*//*binOp end*/++; if (translate) /*binOp start*/c = translate[c/*binOp end*/]; } while (0);

               if (!(/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)))
                 {
                   if (/*binOp start*//*binOp start*/p > /*binOp end*/pattern && /*binOp start*/p[-1] == /*binOp end*//*binOp end*/'\\')
                     goto normal_backslash;
                 }
               goto normal_char;
# 3575 "target/grep.c"
            case 'w':
              /*case comp start*//*binOp start*/laststart = /*case comp end*//*binOp end*/b;
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (wordchar/*compound end*//*binOp end*/); } while (0);
              break;


            case 'W':
              /*case comp start*//*binOp start*/laststart = /*case comp end*//*binOp end*/b;
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (notwordchar/*compound end*//*binOp end*/); } while (0);
              break;


            case '<':
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (wordbeg/*compound end*//*binOp end*/); } while (0);
              break;

            case '>':
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (wordend/*compound end*//*binOp end*/); } while (0);
              break;

            case 'b':
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (wordbound/*compound end*//*binOp end*/); } while (0);
              break;

            case 'B':
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (notwordbound/*compound end*//*binOp end*/); } while (0);
              break;

            case '`':
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (begbuf/*compound end*//*binOp end*/); } while (0);
              break;

            case '\'':
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (endbuf/*compound end*//*binOp end*/); } while (0);
              break;

            case '1': case '2': case '3': case '4': case '5':
            case '6': case '7': case '8': case '9':
              if (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                goto normal_char;

              /*compound start*//*binOp start*/c1 = /*binOp start*/c - /*compound end*//*binOp end*//*binOp end*/'0';

              if (/*binOp start*/c1 > /*binOp end*/regnum)
                return REG_ESUBREG;


              if (group_in_compile_stack (compile_stack, c1))
                goto normal_char;

              /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/b;
              do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (2/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (duplicate/*compound end*//*binOp end*/); /*compound start*//*binOp start*/*b++ = (unsigned char) (c1/*compound end*//*binOp end*/); } while (0);
              break;


            case '+':
            case '?':
              if (/*binOp start*/syntax & (/*binOp start*/(1) << /*binOp end*/1/*binOp end*/))
                goto handle_plus;
              else
                goto normal_backslash;

            default:
            normal_backslash:



              /*binOp start*/c = (translate ? translate[(unsigned char) (c)] : (c)/*binOp end*/);
              goto normal_char;
            }
          break;


 default:

 normal_char:

          if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/!pending_exact


              || /*binOp start*//*binOp start*//*binOp start*/pending_exact + */*binOp end*/pending_exact + /*binOp end*/1 != /*binOp end*//*binOp end*/b


       || /*binOp start*/*pending_exact == /*binOp start*/(/*binOp start*/1 << /*binOp end*/8) - /*binOp end*//*binOp end*//*binOp end*/1


              || /*binOp start*/*p == /*binOp end*//*binOp end*/'*' || /*binOp start*/*p == /*binOp end*//*binOp end*/'^'
       || ((/*binOp start*/syntax & (/*binOp start*/(1) << /*binOp end*/1/*binOp end*/))
    ? /*binOp start*//*binOp start*/*p == /*binOp end*/'\\' && (/*binOp start*//*binOp start*/p[1] == /*binOp end*/'+' || /*binOp start*/p[1] == /*binOp end*//*binOp end*/'?'/*binOp end*/)
    : (/*binOp start*//*binOp start*/*p == /*binOp end*/'+' || /*binOp start*/*p == /*binOp end*//*binOp end*/'?')/*binOp end*/)
       || (/*binOp start*/(/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
                  && ((/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
        ? /*binOp start*/*p == /*binOp end*/'{'
                      : (/*binOp start*//*binOp start*/p[0] == /*binOp end*/'\\' && /*binOp start*/p[1] == /*binOp end*//*binOp end*/'{')/*binOp end*/)/*binOp end*/))
     {


              /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/b;

       do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (2/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (exactn/*compound end*//*binOp end*/); /*compound start*//*binOp start*/*b++ = (unsigned char) (0/*compound end*//*binOp end*/); } while (0);
       /*compound start*//*binOp start*/pending_exact = /*binOp start*/b - /*compound end*//*binOp end*//*binOp end*/1;
            }

   do { while (/*binOp start*//*binOp start*//*binOp start*/b - bufp->/*binOp end*/buffer + (1/*binOp end*/) > bufp->/*binOp end*/allocated) do { unsigned char *old_buffer = bufp->buffer; if (/*binOp start*/bufp->allocated == (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) return REG_ESIZE; /*assign start*//*binOp start*/bufp->allocated <<= /*assign end*//*binOp end*/1; if (/*binOp start*/bufp->allocated > (/*binOp start*/1L << /*binOp end*/16/*binOp end*/)) /*binOp start*/bufp->allocated = (/*binOp start*/1L << /*binOp end*/16/*binOp end*/); /*compound start*//*binOp start*/bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated/*compound end*//*binOp end*/); if (/*binOp start*/bufp->buffer == ((void *)0/*binOp end*/)) return REG_ESPACE; if (/*binOp start*/old_buffer != bufp->/*binOp end*/buffer) { /*compound start*//*binOp start*/b = /*binOp start*/(/*binOp start*/b - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; /*compound start*//*binOp start*/begalt = /*binOp start*/(/*binOp start*/begalt - /*binOp end*/old_buffer) + bufp->/*compound end*//*binOp end*//*binOp end*/buffer; if (fixup_alt_jump) /*binOp start*/fixup_alt_jump = /*binOp start*/(/*binOp start*/fixup_alt_jump - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (laststart) /*binOp start*/laststart = /*binOp start*/(/*binOp start*/laststart - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; if (pending_exact) /*binOp start*/pending_exact = /*binOp start*/(/*binOp start*/pending_exact - /*binOp end*/old_buffer) + bufp->/*binOp end*//*binOp end*/buffer; } } while (0); /*compound start*//*binOp start*/*b++ = (unsigned char) (c/*compound end*//*binOp end*/); } while (0);
          (*pending_exact)++;
   break;
        }
    }




  if (fixup_alt_jump)
    store_op1 (jump_past_alt, fixup_alt_jump, /*binOp start*//*binOp start*/(b) - (fixup_alt_jump/*binOp end*/) - /*binOp end*/3);

  if (!(/*binOp start*/compile_stack.avail == /*binOp end*/0))
    return REG_EPAREN;

  free (compile_stack.stack);


  /*compound start*//*binOp start*/bufp->used = /*binOp start*/b - bufp->/*compound end*//*binOp end*//*binOp end*/buffer;
# 3706 "target/grep.c"
  return REG_NOERROR;
}





static void
store_op1 (op, loc, arg)
    re_opcode_t op;
    unsigned char *loc;
    int arg;
{
  /*compound start*//*binOp start*/*loc = (unsigned char) /*compound end*//*binOp end*/op;
  do { /*compound start*//*binOp start*/(/*binOp start*/loc + /*binOp end*/1)[0] = /*binOp start*/(arg) & /*compound end*//*binOp end*//*binOp end*/0377; /*compound start*//*binOp start*/(/*binOp start*/loc + /*binOp end*/1)[1] = /*binOp start*/(arg) >> /*compound end*//*binOp end*//*binOp end*/8; } while (0);
}




static void
store_op2 (op, loc, arg1, arg2)
    re_opcode_t op;
    unsigned char *loc;
    int arg1, arg2;
{
  /*compound start*//*binOp start*/*loc = (unsigned char) /*compound end*//*binOp end*/op;
  do { /*compound start*//*binOp start*/(/*binOp start*/loc + /*binOp end*/1)[0] = /*binOp start*/(arg1) & /*compound end*//*binOp end*//*binOp end*/0377; /*compound start*//*binOp start*/(/*binOp start*/loc + /*binOp end*/1)[1] = /*binOp start*/(arg1) >> /*compound end*//*binOp end*//*binOp end*/8; } while (0);
  do { /*compound start*//*binOp start*/(/*binOp start*/loc + /*binOp end*/3)[0] = /*binOp start*/(arg2) & /*compound end*//*binOp end*//*binOp end*/0377; /*compound start*//*binOp start*/(/*binOp start*/loc + /*binOp end*/3)[1] = /*binOp start*/(arg2) >> /*compound end*//*binOp end*//*binOp end*/8; } while (0);
}





static void
insert_op1 (op, loc, arg, end)
    re_opcode_t op;
    unsigned char *loc;
    int arg;
    unsigned char *end;
{
  register unsigned char *pfrom = end;
  register unsigned char *pto = /*binOp start*/end + /*binOp end*/3;

  while (/*binOp start*/pfrom != /*binOp end*/loc)
    /*binOp start*/*--pto = *--/*binOp end*/pfrom;

  store_op1 (op, loc, arg);
}




static void
insert_op2 (op, loc, arg1, arg2, end)
    re_opcode_t op;
    unsigned char *loc;
    int arg1, arg2;
    unsigned char *end;
{
  register unsigned char *pfrom = end;
  register unsigned char *pto = /*binOp start*/end + /*binOp end*/5;

  while (/*binOp start*/pfrom != /*binOp end*/loc)
    /*binOp start*/*--pto = *--/*binOp end*/pfrom;

  store_op2 (op, loc, arg1, arg2);
}






static boolean
at_begline_loc_p (pattern, p, syntax)
    const char *pattern, *p;
    reg_syntax_t syntax;
{
  const char *prev = /*binOp start*/p - /*binOp end*/2;
  boolean prev_prev_backslash = /*binOp start*//*binOp start*/prev > /*binOp end*/pattern && /*binOp start*/prev[-1] == /*binOp end*//*binOp end*/'\\';

  return

       /*binOp start*/(/*binOp start*//*binOp start*/*prev == /*binOp end*/'(' && (/*binOp start*//*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) || /*binOp end*/prev_prev_backslash/*binOp end*/))

    || (/*binOp start*//*binOp start*/*prev == /*binOp end*/'|' && (/*binOp start*//*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) || /*binOp end*/prev_prev_backslash/*binOp end*/)/*binOp end*/);
}





static boolean
at_endline_loc_p (p, pend, syntax)
    const char *p, *pend;
    int syntax;
{
  const char *next = p;
  boolean next_backslash = /*binOp start*/*next == /*binOp end*/'\\';
  const char *next_next = /*binOp start*//*binOp start*/p + /*binOp end*/1 < /*binOp end*/pend ? /*binOp start*/p + /*binOp end*/1 : ((void *)0);

  return

       /*binOp start*/(/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) ? /*binOp start*/*next == /*binOp end*/')'
        : /*binOp start*//*binOp start*/next_backslash && /*binOp end*/next_next && /*binOp start*/*next_next == /*binOp end*//*binOp end*/')')

    || (/*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) ? /*binOp start*/*next == /*binOp end*/'|'
        : /*binOp start*//*binOp start*/next_backslash && /*binOp end*/next_next && /*binOp start*/*next_next == /*binOp end*//*binOp end*/'|'/*binOp end*/);
}





static boolean
group_in_compile_stack (compile_stack, regnum)
    compile_stack_type compile_stack;
    regnum_t regnum;
{
  int this_element;

  for (/*binOp start*/this_element = /*binOp start*/compile_stack.avail - /*binOp end*//*binOp end*/1;
       /*binOp start*/this_element >= /*binOp end*/0;
       this_element--)
    if (/*binOp start*/compile_stack.stack[this_element].regnum == /*binOp end*/regnum)
      return 1;

  return 0;
}
# 3850 "target/grep.c"
static reg_errcode_t
compile_range (p_ptr, pend, translate, syntax, b)
    const char **p_ptr, *pend;
    char *translate;
    reg_syntax_t syntax;
    unsigned char *b;
{
  unsigned this_char;

  const char *p = *p_ptr;
  int range_start, range_end;

  if (/*binOp start*/p == /*binOp end*/pend)
    return REG_ERANGE;
# 3872 "target/grep.c"
  /*compound start*//*binOp start*/range_start = ((unsigned char *) p)[-2/*compound end*//*binOp end*/];
  /*compound start*//*binOp start*/range_end = ((unsigned char *) p)[0/*compound end*//*binOp end*/];



  (*p_ptr)++;


  if (/*binOp start*/range_start > /*binOp end*/range_end)
    return /*binOp start*/syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) ? REG_ERANGE : REG_NOERROR;





  for (/*binOp start*/this_char = /*binOp end*/range_start; /*binOp start*/this_char <= /*binOp end*/range_end; this_char++)
    {
      (/*binOp start*/b[/*binOp start*/((unsigned char) ((translate ? translate[(unsigned char) (this_char)] : (this_char)))) / /*binOp end*/8] |= /*binOp start*/1 << (/*binOp start*/((unsigned char) (translate ? translate[(unsigned char) (this_char)] : (this_char))) % /*binOp end*/8/*binOp end*//*binOp end*/));
    }

  return REG_NOERROR;
}
# 3911 "target/grep.c"
int re_max_failures = 2000;

typedef const unsigned char *fail_stack_elt_t;

typedef struct
{
  fail_stack_elt_t *stack;
  unsigned size;
  unsigned avail;
} fail_stack_type;
# 4182 "target/grep.c"
int
re_compile_fastmap (bufp)
     struct re_pattern_buffer *bufp;
{
  int j, k;
  fail_stack_type fail_stack;

  char *destination;


  unsigned num_regs = 0;

  register char *fastmap = bufp->fastmap;
  unsigned char *pattern = bufp->buffer;
  unsigned long size = bufp->used;
  const unsigned char *p = pattern;
  register unsigned char *pend = /*binOp start*/pattern + /*binOp end*/size;





  boolean path_can_be_null = 1;


  boolean succeed_n_p = 0;

  ;

  do { /*compound start*//*binOp start*/fail_stack.stack = (fail_stack_elt_t *) __builtin_alloca (/*binOp start*/5 * sizeof (fail_stack_elt_t/*binOp end*/)/*compound end*//*binOp end*/); if (/*binOp start*/fail_stack.stack == ((void *)0/*binOp end*/)) return -2; /*compound start*//*binOp start*/fail_stack.size = /*compound end*//*binOp end*/5; /*compound start*//*binOp start*/fail_stack.avail = /*compound end*//*binOp end*/0; } while (0);
  memset ((fastmap), 0, (/*binOp start*/1 << /*binOp end*/8));
  /*compound start*//*binOp start*/bufp->fastmap_accurate = /*compound end*//*binOp end*/1;
  /*compound start*//*binOp start*/bufp->can_be_null = /*compound end*//*binOp end*/0;

  while (/*binOp start*//*binOp start*/p != /*binOp end*/pend || !(/*binOp start*/fail_stack.avail == /*binOp end*/0/*binOp end*/))
    {
      if (/*binOp start*/p == /*binOp end*/pend)
        {
          /*assign start*//*binOp start*/bufp->can_be_null |= /*assign end*//*binOp end*/path_can_be_null;


          /*compound start*//*binOp start*/path_can_be_null = /*compound end*//*binOp end*/1;

          /*compound start*//*binOp start*/p = fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/];
 }


      ;




      switch ((re_opcode_t) *p++)

 {






 case duplicate:
   /*case comp start*//*binOp start*/bufp->can_be_null = /*case comp end*//*binOp end*/1;
          return 0;





 case exactn:
          /*case comp start*//*binOp start*/fastmap[p[1]] = /*case comp end*//*binOp end*/1;
   break;


        case charset:
          for (/*binOp start*/j = /*binOp start*//*binOp start*/*p++ * /*binOp end*/8 - /*binOp end*//*binOp end*/1; /*binOp start*/j >= /*binOp end*/0; j--)
     if (/*binOp start*/p[/*binOp start*/j / /*binOp end*/8] & (/*binOp start*/1 << (/*binOp start*/j % /*binOp end*/8/*binOp end*/)/*binOp end*/))
              /*binOp start*/fastmap[j] = /*binOp end*/1;
   break;


 case charset_not:

   for (/*binOp start*/j = /*binOp start*/*p * /*binOp end*//*binOp end*/8; /*binOp start*/j < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); j++)
            /*binOp start*/fastmap[j] = /*binOp end*/1;

   for (/*binOp start*/j = /*binOp start*//*binOp start*/*p++ * /*binOp end*/8 - /*binOp end*//*binOp end*/1; /*binOp start*/j >= /*binOp end*/0; j--)
     if (!(/*binOp start*/p[/*binOp start*/j / /*binOp end*/8] & (/*binOp start*/1 << (/*binOp start*/j % /*binOp end*/8/*binOp end*/)/*binOp end*/)))
              /*binOp start*/fastmap[j] = /*binOp end*/1;
          break;


 case wordchar:
   for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); j++)
     if (/*binOp start*/re_syntax_table[j] == /*binOp end*/1)
       /*binOp start*/fastmap[j] = /*binOp end*/1;
   break;


 case notwordchar:
   for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); j++)
     if (/*binOp start*/re_syntax_table[j] != /*binOp end*/1)
       /*binOp start*/fastmap[j] = /*binOp end*/1;
   break;


        case anychar:

   for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); j++)
            /*binOp start*/fastmap[j] = /*binOp end*/1;


          if (!(/*binOp start*/bufp->syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)))
            /*binOp start*/fastmap['\n'] = /*binOp end*/0;



   else if (bufp->can_be_null)
     return 0;


   break;
# 4334 "target/grep.c"
        case no_op:
        case begline:
        case endline:
 case begbuf:
 case endbuf:
 case wordbound:
 case notwordbound:
 case wordbeg:
 case wordend:
        case push_dummy_failure:
          continue;


 case jump_n:
        case pop_failure_jump:
 case maybe_pop_jump:
 case jump:
        case jump_past_alt:
 case dummy_failure_jump:
          do { do { /*compound start*//*binOp start*/(j) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(j) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
   /*assign start*//*binOp start*/p += /*assign end*//*binOp end*/j;
   if (/*binOp start*/j > /*binOp end*/0)
     continue;






          if (/*binOp start*//*binOp start*/(re_opcode_t) *p != /*binOp end*/on_failure_jump
       && /*binOp start*/(re_opcode_t) *p != /*binOp end*//*binOp end*/succeed_n)
     continue;

          p++;
          do { do { /*compound start*//*binOp start*/(j) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(j) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
          /*assign start*//*binOp start*/p += /*assign end*//*binOp end*/j;


          if (/*binOp start*/!(/*binOp start*/fail_stack.avail == /*binOp end*/0)
       && /*binOp start*/fail_stack.stack[/*binOp start*/fail_stack.avail - /*binOp end*/1] == /*binOp end*//*binOp end*/p)
            fail_stack.avail--;

          continue;


        case on_failure_jump:
        case on_failure_keep_string_jump:
 handle_on_failure_jump:
          do { do { /*compound start*//*binOp start*/(j) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(j) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
# 4391 "target/grep.c"
          if (/*binOp start*//*binOp start*/p + /*binOp end*/j < /*binOp end*/pend)
            {
              if (!((/*binOp start*/(/*binOp start*/fail_stack.avail == fail_stack./*binOp end*/size) && !(/*binOp start*/(fail_stack).size > /*binOp start*/re_max_failures * (/*binOp start*//*binOp start*/(/*binOp start*/num_regs - /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*//*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).stack = (fail_stack_elt_t *) (/*binOp start*//*binOp start*//*binOp start*/destination = (char *) __builtin_alloca (/*binOp start*/(/*binOp start*/(fail_stack).size << /*binOp end*/1) * sizeof (fail_stack_elt_t/*binOp end*/)/*binOp end*/), memcpy ((destination), ((fail_stack).stack), (/*binOp start*/(fail_stack).size * sizeof (fail_stack_elt_t/*binOp end*/))/*binOp end*/), /*binOp end*/destination/*binOp end*/), /*binOp start*/(fail_stack).stack == ((void *)0/*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).size <<= /*binOp end*/1, /*binOp end*/1/*binOp end*/))/*binOp end*/)) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).stack[(fail_stack).avail++] = /*binOp start*/p + /*binOp end*//*binOp end*/j, /*binOp end*/1)))
                return -2;
            }
          else
            /*binOp start*/bufp->can_be_null = /*binOp end*/1;

          if (succeed_n_p)
            {
              do { do { /*compound start*//*binOp start*/(k) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(k) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
              /*compound start*//*binOp start*/succeed_n_p = /*compound end*//*binOp end*/0;
     }

          continue;


 case succeed_n:

          /*case assign start*//*binOp start*/p += /*binOp end*/2;


          do { do { /*compound start*//*binOp start*/(k) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(k) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
          if (/*binOp start*/k == /*binOp end*/0)
     {
              /*assign start*//*binOp start*/p -= /*assign end*//*binOp end*/4;
         /*compound start*//*binOp start*/succeed_n_p = /*compound end*//*binOp end*/1;
              goto handle_on_failure_jump;
            }
          continue;


 case set_number_at:
          /*case assign start*//*binOp start*/p += /*binOp end*/4;
          continue;


 case start_memory:
        case stop_memory:
   /*case assign start*//*binOp start*/p += /*binOp end*/2;
   continue;


 default:
          abort ();
        }







      /*compound start*//*binOp start*/path_can_be_null = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/p = /*compound end*//*binOp end*/pend;
    }



  /*assign start*//*binOp start*/bufp->can_be_null |= /*assign end*//*binOp end*/path_can_be_null;
  return 0;
}
# 4467 "target/grep.c"
void
re_set_registers (bufp, regs, num_regs, starts, ends)
    struct re_pattern_buffer *bufp;
    struct re_registers *regs;
    unsigned num_regs;
    regoff_t *starts, *ends;
{
  if (num_regs)
    {
      /*compound start*//*binOp start*/bufp->regs_allocated = /*compound end*//*binOp end*/1;
      /*compound start*//*binOp start*/regs->num_regs = /*compound end*//*binOp end*/num_regs;
      /*compound start*//*binOp start*/regs->start = /*compound end*//*binOp end*/starts;
      /*compound start*//*binOp start*/regs->end = /*compound end*//*binOp end*/ends;
    }
  else
    {
      /*compound start*//*binOp start*/bufp->regs_allocated = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/regs->num_regs = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/regs->start = /*binOp start*/regs->end = (regoff_t) /*compound end*//*binOp end*//*binOp end*/0;
    }
}






int
re_search (bufp, string, size, startpos, range, regs)
     struct re_pattern_buffer *bufp;
     const char *string;
     int size, startpos, range;
     struct re_registers *regs;
{
  return re_search_2 (bufp, ((void *)0), 0, string, size, startpos, range,
        regs, size);
}
# 4527 "target/grep.c"
int
re_search_2 (bufp, string1, size1, string2, size2, startpos, range, regs, stop)
     struct re_pattern_buffer *bufp;
     const char *string1, *string2;
     int size1, size2;
     int startpos;
     int range;
     struct re_registers *regs;
     int stop;
{
  int val;
  register char *fastmap = bufp->fastmap;
  register char *translate = bufp->translate;
  int total_size = /*binOp start*/size1 + /*binOp end*/size2;
  int endpos = /*binOp start*/startpos + /*binOp end*/range;


  if (/*binOp start*//*binOp start*/startpos < /*binOp end*/0 || /*binOp start*/startpos > /*binOp end*//*binOp end*/total_size)
    return -1;



  if (/*binOp start*/endpos < -/*binOp end*/1)
    /*binOp start*/range = /*binOp start*/-1 - /*binOp end*//*binOp end*/startpos;
  else if (/*binOp start*/endpos > /*binOp end*/total_size)
    /*binOp start*/range = /*binOp start*/total_size - /*binOp end*//*binOp end*/startpos;



  if (/*binOp start*//*binOp start*//*binOp start*/bufp->used > /*binOp end*/0 && /*binOp start*/(re_opcode_t) bufp->buffer[0] == /*binOp end*//*binOp end*/begbuf && /*binOp start*/range > /*binOp end*//*binOp end*/0)
    {
      if (/*binOp start*/startpos > /*binOp end*/0)
 return -1;
      else
 /*binOp start*/range = /*binOp end*/1;
    }


  if (/*binOp start*/fastmap && !bufp->/*binOp end*/fastmap_accurate)
    if (/*binOp start*/re_compile_fastmap (bufp) == -/*binOp end*/2)
      return -2;


  for (;;)
    {




      if (/*binOp start*//*binOp start*/fastmap && /*binOp start*/startpos < /*binOp end*//*binOp end*/total_size && !bufp->/*binOp end*/can_be_null)
 {
   if (/*binOp start*/range > /*binOp end*/0)
     {
       register const char *d;
       register int lim = 0;
       int irange = range;

              if (/*binOp start*//*binOp start*/startpos < /*binOp end*/size1 && /*binOp start*//*binOp start*/startpos + /*binOp end*/range >= /*binOp end*//*binOp end*/size1)
                /*binOp start*/lim = /*binOp start*/range - (/*binOp start*/size1 - /*binOp end*/startpos/*binOp end*//*binOp end*/);

       /*compound start*//*binOp start*/d = /*binOp start*/(/*binOp start*/startpos >= /*binOp end*/size1 ? /*binOp start*/string2 - /*binOp end*/size1 : string1) + /*compound end*//*binOp end*//*binOp end*/startpos;



       if (translate)
                while (/*binOp start*//*binOp start*/range > /*binOp end*/lim
                       && !fastmap[(unsigned char)
       translate[(unsigned char) *d++]/*binOp end*/])
                  range--;
       else
                while (/*binOp start*//*binOp start*/range > /*binOp end*/lim && !fastmap[(unsigned char) *d++/*binOp end*/])
                  range--;

       /*assign start*//*binOp start*/startpos += /*binOp start*/irange - /*assign end*//*binOp end*//*binOp end*/range;
     }
   else
     {
       register char c = (/*binOp start*//*binOp start*/size1 == /*binOp end*/0 || /*binOp start*/startpos >= /*binOp end*//*binOp end*/size1
                                 ? string2[/*binOp start*/startpos - /*binOp end*/size1]
                                 : string1[startpos]);

       if (!fastmap[(unsigned char) (translate ? translate[(unsigned char) (c)] : (c))])
  goto advance;
     }
 }


      if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*/range >= /*binOp end*/0 && /*binOp start*/startpos == /*binOp end*//*binOp end*/total_size && /*binOp end*/fastmap
          && !bufp->/*binOp end*/can_be_null)
 return -1;

      /*compound start*//*binOp start*/val = re_match_2 (bufp, string1, size1, string2, size2,
                 startpos, regs, stop/*compound end*//*binOp end*/);
      if (/*binOp start*/val >= /*binOp end*/0)
 return startpos;

      if (/*binOp start*/val == -/*binOp end*/2)
 return -2;

    advance:
      if (!range)
        break;
      else if (/*binOp start*/range > /*binOp end*/0)
        {
          range--;
          startpos++;
        }
      else
        {
          range++;
          startpos--;
        }
    }
  return -1;
}



static int bcmp_translate ();
static boolean alt_match_null_string_p (),
               common_op_match_null_string_p (),
               group_match_null_string_p ();
# 4661 "target/grep.c"
typedef union
{
  fail_stack_elt_t word;
  struct
  {



    unsigned match_null_string_p : 2;
    unsigned is_active : 1;
    unsigned matched_something : 1;
    unsigned ever_matched_something : 1;
  } bits;
} register_info_type;
# 4786 "target/grep.c"
int
re_match (bufp, string, size, pos, regs)
     struct re_pattern_buffer *bufp;
     const char *string;
     int size, pos;
     struct re_registers *regs;
 {
  return re_match_2 (bufp, ((void *)0), 0, string, size, pos, regs, size);
}
# 4811 "target/grep.c"
int
re_match_2 (bufp, string1, size1, string2, size2, pos, regs, stop)
     struct re_pattern_buffer *bufp;
     const char *string1, *string2;
     int size1, size2;
     int pos;
     struct re_registers *regs;
     int stop;
{

  int mcnt;
  unsigned char *p1;


  const char *end1, *end2;



  const char *end_match_1, *end_match_2;


  const char *d, *dend;


  unsigned char *p = bufp->buffer;
  register unsigned char *pend = /*binOp start*/p + bufp->/*binOp end*/used;


  char *translate = bufp->translate;
# 4850 "target/grep.c"
  fail_stack_type fail_stack;
# 4859 "target/grep.c"
  unsigned num_regs = /*binOp start*/bufp->re_nsub + /*binOp end*/1;


  unsigned lowest_active_reg = (/*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + /*binOp end*/1);
  unsigned highest_active_reg = (/*binOp start*/1 << /*binOp end*/8);
# 4872 "target/grep.c"
  const char **regstart, **regend;






  const char **old_regstart, **old_regend;







  register_info_type *reg_info;





  unsigned best_regs_set = 0;
  const char **best_regstart, **best_regend;
# 4904 "target/grep.c"
  const char *match_end = ((void *)0);


  const char **reg_dummy;
  register_info_type *reg_info_dummy;






  ;

  do { /*compound start*//*binOp start*/fail_stack.stack = (fail_stack_elt_t *) __builtin_alloca (/*binOp start*/5 * sizeof (fail_stack_elt_t/*binOp end*/)/*compound end*//*binOp end*/); if (/*binOp start*/fail_stack.stack == ((void *)0/*binOp end*/)) return -2; /*compound start*//*binOp start*/fail_stack.size = /*compound end*//*binOp end*/5; /*compound start*//*binOp start*/fail_stack.avail = /*compound end*//*binOp end*/0; } while (0);






  if (bufp->re_nsub)
    {
      /*compound start*//*binOp start*/regstart = ((const char * *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (const char */*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/regend = ((const char * *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (const char */*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/old_regstart = ((const char * *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (const char */*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/old_regend = ((const char * *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (const char */*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/best_regstart = ((const char * *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (const char */*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/best_regend = ((const char * *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (const char */*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/reg_info = ((register_info_type *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (register_info_type/*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/reg_dummy = ((const char * *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (const char */*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/reg_info_dummy = ((register_info_type *) __builtin_alloca (/*binOp start*/(num_regs) * sizeof (register_info_type/*binOp end*/))/*compound end*//*binOp end*/);

      if (!(/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/regstart && /*binOp end*/regend && /*binOp end*/old_regstart && /*binOp end*/old_regend && /*binOp end*/reg_info
            && /*binOp end*/best_regstart && /*binOp end*/best_regend && /*binOp end*/reg_dummy && /*binOp end*/reg_info_dummy))
        {
          __builtin_alloca (0);
          return -2;
        }
    }
# 4955 "target/grep.c"
  if (/*binOp start*//*binOp start*/pos < /*binOp end*/0 || /*binOp start*/pos > /*binOp start*/size1 + /*binOp end*//*binOp end*//*binOp end*/size2)
    {
      __builtin_alloca (0);
      return -1;
    }




  for (/*binOp start*/mcnt = /*binOp end*/1; /*binOp start*/mcnt < /*binOp end*/num_regs; mcnt++)
    {
      /*compound start*//*binOp start*/regstart[mcnt] = /*binOp start*/regend[mcnt]
        = /*binOp start*/old_regstart[mcnt] = /*binOp start*/old_regend[mcnt] = ((char *) -1/*compound end*//*binOp end*//*binOp end*//*binOp end*//*binOp end*/);

      /*compound start*//*binOp start*/((reg_info[mcnt]).bits.match_null_string_p) = /*compound end*//*binOp end*/3;
      /*compound start*//*binOp start*/((reg_info[mcnt]).bits.is_active) = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/((reg_info[mcnt]).bits.matched_something) = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/((reg_info[mcnt]).bits.ever_matched_something) = /*compound end*//*binOp end*/0;
    }



  if (/*binOp start*//*binOp start*/size2 == /*binOp end*/0 && /*binOp start*/string1 != ((void *)0/*binOp end*//*binOp end*/))
    {
      /*compound start*//*binOp start*/string2 = /*compound end*//*binOp end*/string1;
      /*compound start*//*binOp start*/size2 = /*compound end*//*binOp end*/size1;
      /*compound start*//*binOp start*/string1 = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/size1 = /*compound end*//*binOp end*/0;
    }
  /*compound start*//*binOp start*/end1 = /*binOp start*/string1 + /*compound end*//*binOp end*//*binOp end*/size1;
  /*compound start*//*binOp start*/end2 = /*binOp start*/string2 + /*compound end*//*binOp end*//*binOp end*/size2;


  if (/*binOp start*/stop <= /*binOp end*/size1)
    {
      /*compound start*//*binOp start*/end_match_1 = /*binOp start*/string1 + /*compound end*//*binOp end*//*binOp end*/stop;
      /*compound start*//*binOp start*/end_match_2 = /*compound end*//*binOp end*/string2;
    }
  else
    {
      /*compound start*//*binOp start*/end_match_1 = /*compound end*//*binOp end*/end1;
      /*compound start*//*binOp start*/end_match_2 = /*binOp start*//*binOp start*/string2 + /*binOp end*/stop - /*compound end*//*binOp end*//*binOp end*/size1;
    }







  if (/*binOp start*//*binOp start*/size1 > /*binOp end*/0 && /*binOp start*/pos <= /*binOp end*//*binOp end*/size1)
    {
      /*compound start*//*binOp start*/d = /*binOp start*/string1 + /*compound end*//*binOp end*//*binOp end*/pos;
      /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_1;
    }
  else
    {
      /*compound start*//*binOp start*/d = /*binOp start*//*binOp start*/string2 + /*binOp end*/pos - /*compound end*//*binOp end*//*binOp end*/size1;
      /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_2;
    }

  ;
  ;
  ;
  ;
  ;




  for (;;)
    {
      ;

      if (/*binOp start*/p == /*binOp end*/pend)
 {
          ;



          if (/*binOp start*/d != /*binOp end*/end_match_2)
     {
              ;

              if (!(/*binOp start*/fail_stack.avail == /*binOp end*/0))
                {
                  boolean same_str_p = (/*binOp start*/(/*binOp start*//*binOp start*/size1 && /*binOp start*/string1 <= (match_end/*binOp end*//*binOp end*/) && /*binOp start*/(match_end) <= /*binOp start*/string1 + /*binOp end*//*binOp end*//*binOp end*/size1)
                          == (/*binOp start*/dend == /*binOp end*/end_match_1/*binOp end*/));


                  if (/*binOp start*//*binOp start*/!best_regs_set
                      || (/*binOp start*/same_str_p && /*binOp start*/d > /*binOp end*//*binOp end*/match_end/*binOp end*/)
                      || (/*binOp start*/!same_str_p && !(/*binOp start*/dend == /*binOp end*/end_match_1/*binOp end*/)/*binOp end*/))
                    {
                      /*compound start*//*binOp start*/best_regs_set = /*compound end*//*binOp end*/1;
                      /*compound start*//*binOp start*/match_end = /*compound end*//*binOp end*/d;

                      ;

                      for (/*binOp start*/mcnt = /*binOp end*/1; /*binOp start*/mcnt < /*binOp end*/num_regs; mcnt++)
                        {
                          /*compound start*//*binOp start*/best_regstart[mcnt] = regstart[mcnt/*compound end*//*binOp end*/];
                          /*compound start*//*binOp start*/best_regend[mcnt] = regend[mcnt/*compound end*//*binOp end*/];
                        }
                    }
                  goto fail;
                }


              else if (best_regs_set)
                {
           restore_best_regs:





                  ;

                  /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/match_end;
                  /*compound start*//*binOp start*/dend = ((/*binOp start*//*binOp start*/d >= /*binOp end*/string1 && /*binOp start*/d <= /*binOp end*//*binOp end*/end1)
             ? end_match_1 : end_match_2/*compound end*//*binOp end*/);

    for (/*binOp start*/mcnt = /*binOp end*/1; /*binOp start*/mcnt < /*binOp end*/num_regs; mcnt++)
      {
        /*compound start*//*binOp start*/regstart[mcnt] = best_regstart[mcnt/*compound end*//*binOp end*/];
        /*compound start*//*binOp start*/regend[mcnt] = best_regend[mcnt/*compound end*//*binOp end*/];
      }
                }
            }

          ;


          if (/*binOp start*/regs && !bufp->/*binOp end*/no_sub)
     {

              if (/*binOp start*/bufp->regs_allocated == /*binOp end*/0)
                {


                  /*compound start*//*binOp start*/regs->num_regs = (/*binOp start*/(30) > (/*binOp start*/num_regs + /*binOp end*/1/*binOp end*/) ? (30) : (/*binOp start*/num_regs + /*binOp end*/1)/*compound end*//*binOp end*/);
                  /*compound start*//*binOp start*/regs->start = ((regoff_t *) malloc (/*binOp start*/(regs->num_regs) * sizeof (regoff_t/*binOp end*/))/*compound end*//*binOp end*/);
                  /*compound start*//*binOp start*/regs->end = ((regoff_t *) malloc (/*binOp start*/(regs->num_regs) * sizeof (regoff_t/*binOp end*/))/*compound end*//*binOp end*/);
                  if (/*binOp start*//*binOp start*/regs->start == ((void *)0/*binOp end*/) || /*binOp start*/regs->end == ((void *)0/*binOp end*//*binOp end*/))
                    return -2;
                  /*compound start*//*binOp start*/bufp->regs_allocated = /*compound end*//*binOp end*/1;
                }
              else if (/*binOp start*/bufp->regs_allocated == /*binOp end*/1)
                {


                  if (/*binOp start*/regs->num_regs < /*binOp start*/num_regs + /*binOp end*//*binOp end*/1)
                    {
                      /*compound start*//*binOp start*/regs->num_regs = /*binOp start*/num_regs + /*compound end*//*binOp end*//*binOp end*/1;
                      (/*binOp start*/(regs->start) = (regoff_t *) realloc (regs->start, /*binOp start*/(regs->num_regs) * sizeof (regoff_t/*binOp end*/)/*binOp end*/));
                      (/*binOp start*/(regs->end) = (regoff_t *) realloc (regs->end, /*binOp start*/(regs->num_regs) * sizeof (regoff_t/*binOp end*/)/*binOp end*/));
                      if (/*binOp start*//*binOp start*/regs->start == ((void *)0/*binOp end*/) || /*binOp start*/regs->end == ((void *)0/*binOp end*//*binOp end*/))
                        return -2;
                    }
                }
              else
  {


    ;
  }




              if (/*binOp start*/regs->num_regs > /*binOp end*/0)
                {
                  /*compound start*//*binOp start*/regs->start[0] = /*compound end*//*binOp end*/pos;
                  /*compound start*//*binOp start*/regs->end[0] = ((/*binOp start*/dend == /*binOp end*/end_match_1) ? /*binOp start*/d - /*binOp end*/string1
             : /*binOp start*//*binOp start*/d - /*binOp end*/string2 + /*binOp end*/size1/*compound end*//*binOp end*/);
                }



       for (/*binOp start*/mcnt = /*binOp end*/1; /*binOp start*/mcnt < (/*binOp start*/(num_regs) < (regs->num_regs/*binOp end*/) ? (num_regs) : (regs->num_regs)/*binOp end*/); mcnt++)
  {
                  if (/*binOp start*/(/*binOp start*/(regstart[mcnt]) == ((char *) -1/*binOp end*/)) || (/*binOp start*/(regend[mcnt]) == ((char *) -1/*binOp end*/)/*binOp end*/))
                    /*binOp start*/regs->start[mcnt] = /*binOp start*/regs->end[mcnt] = -/*binOp end*//*binOp end*/1;
                  else
                    {
        /*compound start*//*binOp start*/regs->start[mcnt] = ((/*binOp start*//*binOp start*/size1 && /*binOp start*/string1 <= (regstart[mcnt]/*binOp end*//*binOp end*/) && /*binOp start*/(regstart[mcnt]) <= /*binOp start*/string1 + /*binOp end*//*binOp end*//*binOp end*/size1) ? /*binOp start*/(regstart[mcnt]) - /*binOp end*/string1 : /*binOp start*//*binOp start*/(regstart[mcnt]) - /*binOp end*/string2 + /*binOp end*/size1/*compound end*//*binOp end*/);
                      /*compound start*//*binOp start*/regs->end[mcnt] = ((/*binOp start*//*binOp start*/size1 && /*binOp start*/string1 <= (regend[mcnt]/*binOp end*//*binOp end*/) && /*binOp start*/(regend[mcnt]) <= /*binOp start*/string1 + /*binOp end*//*binOp end*//*binOp end*/size1) ? /*binOp start*/(regend[mcnt]) - /*binOp end*/string1 : /*binOp start*//*binOp start*/(regend[mcnt]) - /*binOp end*/string2 + /*binOp end*/size1/*compound end*//*binOp end*/);
                    }
  }






              for (/*binOp start*/mcnt = /*binOp end*/num_regs; /*binOp start*/mcnt < regs->/*binOp end*/num_regs; mcnt++)
                /*binOp start*/regs->start[mcnt] = /*binOp start*/regs->end[mcnt] = -/*binOp end*//*binOp end*/1;
     }

          __builtin_alloca (0);
          ;


          ;

          /*compound start*//*binOp start*/mcnt = /*binOp start*//*binOp start*/d - /*binOp end*/pos - ((/*binOp start*/dend == /*binOp end*/end_match_1)
       ? string1
       : /*binOp start*/string2 - /*binOp end*/size1/*compound end*//*binOp end*//*binOp end*/);

          ;

          return mcnt;
        }





      switch ((re_opcode_t) *p++)

 {


        case no_op:
          ;
          break;





 case exactn:
   /*case comp start*//*binOp start*/mcnt = *p/*case comp end*//*binOp end*/++;
          ;



          if (translate)
     {
       do
  {
    while (/*binOp start*/d == /*binOp end*/dend) { if (/*binOp start*/dend == /*binOp end*/end_match_2) goto fail; /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/string2; /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_2; };
    if (/*binOp start*/translate[(unsigned char) *d++] != (char) *p/*binOp end*/++)
                    goto fail;
  }
       while (--mcnt);
     }
   else
     {
       do
  {
    while (/*binOp start*/d == /*binOp end*/dend) { if (/*binOp start*/dend == /*binOp end*/end_match_2) goto fail; /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/string2; /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_2; };
    if (/*binOp start*/*d++ != (char) *p/*binOp end*/++) goto fail;
  }
       while (--mcnt);
     }
   do { unsigned r; for (/*binOp start*/r = /*binOp end*/lowest_active_reg; /*binOp start*/r <= /*binOp end*/highest_active_reg; r++) { /*compound start*//*binOp start*/((reg_info[r]).bits.matched_something) = /*binOp start*/((reg_info[r]).bits.ever_matched_something) = /*compound end*//*binOp end*//*binOp end*/1; } } while (0);
          break;



 case anychar:
          ;

          while (/*binOp start*/d == /*binOp end*/dend) { if (/*binOp start*/dend == /*binOp end*/end_match_2) goto fail; /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/string2; /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_2; };

          if (/*binOp start*/(/*binOp start*/!(/*binOp start*/bufp->syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) && /*binOp start*/(translate ? translate[(unsigned char) (*d)] : (*d)) == /*binOp end*//*binOp end*/'\n')
              || (/*binOp start*//*binOp start*/bufp->syntax & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) && /*binOp start*/(translate ? translate[(unsigned char) (*d)] : (*d)) == /*binOp end*//*binOp end*/'\000'/*binOp end*/))
     goto fail;

          do { unsigned r; for (/*binOp start*/r = /*binOp end*/lowest_active_reg; /*binOp start*/r <= /*binOp end*/highest_active_reg; r++) { /*compound start*//*binOp start*/((reg_info[r]).bits.matched_something) = /*binOp start*/((reg_info[r]).bits.ever_matched_something) = /*compound end*//*binOp end*//*binOp end*/1; } } while (0);
          ;
          d++;
   break;


 case charset:
 case charset_not:
   {
     register unsigned char c;
     boolean not = /*binOp start*/(re_opcode_t) *(/*binOp start*/p - /*binOp end*/1) == /*binOp end*/charset_not;

            ;

     while (/*binOp start*/d == /*binOp end*/dend) { if (/*binOp start*/dend == /*binOp end*/end_match_2) goto fail; /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/string2; /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_2; };
     /*compound start*//*binOp start*/c = (translate ? translate[(unsigned char) (*d)] : (*d)/*compound end*//*binOp end*/);



     if (/*binOp start*//*binOp start*/c < (unsigned) (/*binOp start*/*p * /*binOp end*/8/*binOp end*/)
  && /*binOp start*/p[/*binOp start*/1 + /*binOp start*/c / /*binOp end*//*binOp end*/8] & (/*binOp start*/1 << (/*binOp start*/c % /*binOp end*/8/*binOp end*/)/*binOp end*//*binOp end*/))
       /*binOp start*/not = !/*binOp end*/not;

     /*assign start*//*binOp start*/p += /*binOp start*/1 + */*assign end*//*binOp end*//*binOp end*/p;

     if (!not) goto fail;

     do { unsigned r; for (/*binOp start*/r = /*binOp end*/lowest_active_reg; /*binOp start*/r <= /*binOp end*/highest_active_reg; r++) { /*compound start*//*binOp start*/((reg_info[r]).bits.matched_something) = /*binOp start*/((reg_info[r]).bits.ever_matched_something) = /*compound end*//*binOp end*//*binOp end*/1; } } while (0);
            d++;
     break;
   }







        case start_memory:
   ;


   /*compound start*//*binOp start*/p1 = /*compound end*//*binOp end*/p;

          if (/*binOp start*/((reg_info[*p]).bits.match_null_string_p) == /*binOp end*/3)
            /*binOp start*/((reg_info[*p]).bits.match_null_string_p)
              = group_match_null_string_p (&p1, pend, reg_info/*binOp end*/);






          /*compound start*//*binOp start*/old_regstart[*p] = ((reg_info[*p]).bits.match_null_string_p)
                             ? (/*binOp start*/(regstart[*p]) == ((char *) -1/*binOp end*/)) ? d : regstart[*p]
                             : regstart[*p/*compound end*//*binOp end*/];
   ;


          /*compound start*//*binOp start*/regstart[*p] = /*compound end*//*binOp end*/d;
   ;

          /*compound start*//*binOp start*/((reg_info[*p]).bits.is_active) = /*compound end*//*binOp end*/1;
          /*compound start*//*binOp start*/((reg_info[*p]).bits.matched_something) = /*compound end*//*binOp end*/0;


          /*compound start*//*binOp start*/highest_active_reg = */*compound end*//*binOp end*/p;



          if (/*binOp start*/lowest_active_reg == (/*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + /*binOp end*/1/*binOp end*/))
            /*binOp start*/lowest_active_reg = */*binOp end*/p;


          /*assign start*//*binOp start*/p += /*assign end*//*binOp end*/2;
          break;





 case stop_memory:
   ;






          /*compound start*//*binOp start*/old_regend[*p] = ((reg_info[*p]).bits.match_null_string_p)
                           ? (/*binOp start*/(regend[*p]) == ((char *) -1/*binOp end*/)) ? d : regend[*p]
      : regend[*p/*compound end*//*binOp end*/];
   ;


          /*compound start*//*binOp start*/regend[*p] = /*compound end*//*binOp end*/d;
   ;


          /*compound start*//*binOp start*/((reg_info[*p]).bits.is_active) = /*compound end*//*binOp end*/0;



          if (/*binOp start*/lowest_active_reg == /*binOp end*/highest_active_reg)
            {
              /*compound start*//*binOp start*/lowest_active_reg = (/*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + /*binOp end*/1/*compound end*//*binOp end*/);
              /*compound start*//*binOp start*/highest_active_reg = (/*binOp start*/1 << /*binOp end*/8/*compound end*//*binOp end*/);
            }
          else
            {



              unsigned char r = /*binOp start*/*p - /*binOp end*/1;
              while (/*binOp start*//*binOp start*/r > /*binOp end*/0 && !((reg_info[r]).bits.is_active/*binOp end*/))
                r--;
# 5350 "target/grep.c"
       if (/*binOp start*/r == /*binOp end*/0)
                {
                  /*compound start*//*binOp start*/lowest_active_reg = (/*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + /*binOp end*/1/*compound end*//*binOp end*/);
                  /*compound start*//*binOp start*/highest_active_reg = (/*binOp start*/1 << /*binOp end*/8/*compound end*//*binOp end*/);
                }
              else
                /*binOp start*/highest_active_reg = /*binOp end*/r;
            }






          if (/*binOp start*/(/*binOp start*/!((reg_info[*p]).bits.matched_something)
               || /*binOp start*/(re_opcode_t) p[-3] == /*binOp end*//*binOp end*/start_memory)
       && /*binOp start*/(/*binOp start*/p + /*binOp end*/2) < /*binOp end*//*binOp end*/pend)
            {
              boolean is_a_jump_n = 0;

              /*compound start*//*binOp start*/p1 = /*binOp start*/p + /*compound end*//*binOp end*//*binOp end*/2;
              /*compound start*//*binOp start*/mcnt = /*compound end*//*binOp end*/0;
              switch ((re_opcode_t) *p1++)
                {
                  case jump_n:
      /*case comp start*//*binOp start*/is_a_jump_n = /*case comp end*//*binOp end*/1;
                  case pop_failure_jump:
    case maybe_pop_jump:
    case jump:
    case dummy_failure_jump:
                    do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);
      if (is_a_jump_n)
        /*binOp start*/p1 += /*binOp end*/2;
                    break;

                  default:
                                     ;
                }
       /*assign start*//*binOp start*/p1 += /*assign end*//*binOp end*/mcnt;






              if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*/mcnt < /*binOp end*/0 && /*binOp start*/(re_opcode_t) *p1 == /*binOp end*//*binOp end*/on_failure_jump
                  && /*binOp start*/(re_opcode_t) p1[3] == /*binOp end*//*binOp end*/start_memory && /*binOp start*/p1[4] == */*binOp end*//*binOp end*/p)
  {
# 5408 "target/grep.c"
                  if (((reg_info[*p]).bits.ever_matched_something))
      {
        unsigned r;

                      /*compound start*//*binOp start*/((reg_info[*p]).bits.ever_matched_something) = /*compound end*//*binOp end*/0;


                      for (/*binOp start*/r = */*binOp end*/p; /*binOp start*/r < /*binOp start*/*p + *(/*binOp start*/p + /*binOp end*/1/*binOp end*//*binOp end*/); r++)
                        {
                          /*compound start*//*binOp start*/regstart[r] = old_regstart[r/*compound end*//*binOp end*/];


                          if (/*binOp start*/(int) old_regend[r] >= (int) regstart[r/*binOp end*/])
                            /*binOp start*/regend[r] = old_regend[r/*binOp end*/];
                        }
                    }
    p1++;
                  do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);
                  do { char *destination; int this_reg; ; ; ; ; ; ; ; while (/*binOp start*/(/*binOp start*/(fail_stack).size - (fail_stack)./*binOp end*/avail) < (/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/highest_active_reg - /*binOp end*/lowest_active_reg + /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*/)) { if (!(/*binOp start*/(fail_stack).size > /*binOp start*/re_max_failures * (/*binOp start*//*binOp start*/(/*binOp start*/num_regs - /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*//*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).stack = (fail_stack_elt_t *) (/*binOp start*//*binOp start*//*binOp start*/destination = (char *) __builtin_alloca (/*binOp start*/(/*binOp start*/(fail_stack).size << /*binOp end*/1) * sizeof (fail_stack_elt_t/*binOp end*/)/*binOp end*/), memcpy ((destination), ((fail_stack).stack), (/*binOp start*/(fail_stack).size * sizeof (fail_stack_elt_t/*binOp end*/))/*binOp end*/), /*binOp end*/destination/*binOp end*/), /*binOp start*/(fail_stack).stack == ((void *)0/*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).size <<= /*binOp end*/1, /*binOp end*/1/*binOp end*/)))) return -2; ; ; } ; for (/*binOp start*/this_reg = /*binOp end*/lowest_active_reg; /*binOp start*/this_reg <= /*binOp end*/highest_active_reg; this_reg++) { ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg/*compound end*//*binOp end*/]; ; ; ; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg]./*compound end*//*binOp end*/word; } ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/lowest_active_reg; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/highest_active_reg; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = /*binOp start*/(fail_stack_elt_t) p1 + /*compound end*//*binOp end*//*binOp end*/mcnt; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/d; ; ; } while (0);

                  goto fail;
                }
            }


          /*assign start*//*binOp start*/p += /*assign end*//*binOp end*/2;
          break;




        case duplicate:
   {
     register const char *d2, *dend2;
     int regno = *p++;
     ;


            if (/*binOp start*/(/*binOp start*/(regstart[regno]) == ((char *) -1/*binOp end*/)) || (/*binOp start*/(regend[regno]) == ((char *) -1/*binOp end*/)/*binOp end*/))
              goto fail;


            /*compound start*//*binOp start*/d2 = regstart[regno/*compound end*//*binOp end*/];






            /*compound start*//*binOp start*/dend2 = ((/*binOp start*/(/*binOp start*//*binOp start*/size1 && /*binOp start*/string1 <= (regstart[regno]/*binOp end*//*binOp end*/) && /*binOp start*/(regstart[regno]) <= /*binOp start*/string1 + /*binOp end*//*binOp end*//*binOp end*/size1)
        == (/*binOp start*//*binOp start*/size1 && /*binOp start*/string1 <= (regend[regno]/*binOp end*//*binOp end*/) && /*binOp start*/(regend[regno]) <= /*binOp start*/string1 + /*binOp end*//*binOp end*//*binOp end*/size1/*binOp end*/))
       ? regend[regno] : end_match_1/*compound end*//*binOp end*/);
     for (;;)
       {


  while (/*binOp start*/d2 == /*binOp end*/dend2)
    {
      if (/*binOp start*/dend2 == /*binOp end*/end_match_2) break;
      if (/*binOp start*/dend2 == regend[regno/*binOp end*/]) break;


                    /*compound start*//*binOp start*/d2 = /*compound end*//*binOp end*/string2;
                    /*compound start*//*binOp start*/dend2 = regend[regno/*compound end*//*binOp end*/];
    }

  if (/*binOp start*/d2 == /*binOp end*/dend2) break;


  while (/*binOp start*/d == /*binOp end*/dend) { if (/*binOp start*/dend == /*binOp end*/end_match_2) goto fail; /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/string2; /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_2; };


  /*compound start*//*binOp start*/mcnt = /*binOp start*/dend - /*compound end*//*binOp end*//*binOp end*/d;



                if (/*binOp start*/mcnt > /*binOp start*/dend2 - /*binOp end*//*binOp end*/d2)
    /*binOp start*/mcnt = /*binOp start*/dend2 - /*binOp end*//*binOp end*/d2;



  if (translate
                    ? bcmp_translate (d, d2, mcnt, translate)
                    : memcmp ((d), (d2), (mcnt)))
    goto fail;
  /*compound start*//*binOp start*//*binOp start*/d += /*binOp end*/mcnt, /*binOp start*/d2 += /*compound end*//*binOp end*//*binOp end*/mcnt;
       }
   }
   break;





 case begline:
          ;

          if ((/*binOp start*//*binOp start*/(d) == (size1 ? string1 : string2/*binOp end*/) || !/*binOp end*/size2))
            {
              if (!bufp->not_bol) break;
            }
          else if (/*binOp start*//*binOp start*/d[-1] == /*binOp end*/'\n' && bufp->/*binOp end*/newline_anchor)
            {
              break;
            }

          goto fail;



 case endline:
          ;

          if ((/*binOp start*/(d) == /*binOp end*/end2))
            {
              if (!bufp->not_eol) break;
            }


          else if (/*binOp start*//*binOp start*/(/*binOp start*/d == /*binOp end*/end1 ? *string2 : *d) == /*binOp end*/'\n'
                   && bufp->/*binOp end*/newline_anchor)
            {
              break;
            }
          goto fail;



        case begbuf:
          ;
          if ((/*binOp start*//*binOp start*/(d) == (size1 ? string1 : string2/*binOp end*/) || !/*binOp end*/size2))
            break;
          goto fail;



        case endbuf:
          ;
   if ((/*binOp start*/(d) == /*binOp end*/end2))
     break;
          goto fail;
# 5567 "target/grep.c"
        case on_failure_keep_string_jump:
          ;

          do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
          ;

          do { char *destination; int this_reg; ; ; ; ; ; ; ; while (/*binOp start*/(/*binOp start*/(fail_stack).size - (fail_stack)./*binOp end*/avail) < (/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/highest_active_reg - /*binOp end*/lowest_active_reg + /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*/)) { if (!(/*binOp start*/(fail_stack).size > /*binOp start*/re_max_failures * (/*binOp start*//*binOp start*/(/*binOp start*/num_regs - /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*//*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).stack = (fail_stack_elt_t *) (/*binOp start*//*binOp start*//*binOp start*/destination = (char *) __builtin_alloca (/*binOp start*/(/*binOp start*/(fail_stack).size << /*binOp end*/1) * sizeof (fail_stack_elt_t/*binOp end*/)/*binOp end*/), memcpy ((destination), ((fail_stack).stack), (/*binOp start*/(fail_stack).size * sizeof (fail_stack_elt_t/*binOp end*/))/*binOp end*/), /*binOp end*/destination/*binOp end*/), /*binOp start*/(fail_stack).stack == ((void *)0/*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).size <<= /*binOp end*/1, /*binOp end*/1/*binOp end*/)))) return -2; ; ; } ; for (/*binOp start*/this_reg = /*binOp end*/lowest_active_reg; /*binOp start*/this_reg <= /*binOp end*/highest_active_reg; this_reg++) { ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg/*compound end*//*binOp end*/]; ; ; ; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg]./*compound end*//*binOp end*/word; } ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/lowest_active_reg; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/highest_active_reg; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = /*binOp start*/(fail_stack_elt_t) p + /*compound end*//*binOp end*//*binOp end*/mcnt; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) ((void *)0/*compound end*//*binOp end*/); ; ; } while (0);
          break;
# 5589 "target/grep.c"
 case on_failure_jump:
        on_failure:
          ;

          do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
          ;
# 5605 "target/grep.c"
          /*compound start*//*binOp start*/p1 = /*compound end*//*binOp end*/p;





          while (/*binOp start*//*binOp start*/p1 < /*binOp end*/pend && /*binOp start*/(re_opcode_t) *p1 == /*binOp end*//*binOp end*/no_op)
            p1++;

          if (/*binOp start*//*binOp start*/p1 < /*binOp end*/pend && /*binOp start*/(re_opcode_t) *p1 == /*binOp end*//*binOp end*/start_memory)
            {




              /*compound start*//*binOp start*/highest_active_reg = /*binOp start*/*(/*binOp start*/p1 + /*binOp end*/1) + *(/*binOp start*/p1 + /*binOp end*/2/*compound end*//*binOp end*//*binOp end*/);
              if (/*binOp start*/lowest_active_reg == (/*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + /*binOp end*/1/*binOp end*/))
                /*binOp start*/lowest_active_reg = *(/*binOp start*/p1 + /*binOp end*/1/*binOp end*/);
            }

          ;
          do { char *destination; int this_reg; ; ; ; ; ; ; ; while (/*binOp start*/(/*binOp start*/(fail_stack).size - (fail_stack)./*binOp end*/avail) < (/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/highest_active_reg - /*binOp end*/lowest_active_reg + /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*/)) { if (!(/*binOp start*/(fail_stack).size > /*binOp start*/re_max_failures * (/*binOp start*//*binOp start*/(/*binOp start*/num_regs - /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*//*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).stack = (fail_stack_elt_t *) (/*binOp start*//*binOp start*//*binOp start*/destination = (char *) __builtin_alloca (/*binOp start*/(/*binOp start*/(fail_stack).size << /*binOp end*/1) * sizeof (fail_stack_elt_t/*binOp end*/)/*binOp end*/), memcpy ((destination), ((fail_stack).stack), (/*binOp start*/(fail_stack).size * sizeof (fail_stack_elt_t/*binOp end*/))/*binOp end*/), /*binOp end*/destination/*binOp end*/), /*binOp start*/(fail_stack).stack == ((void *)0/*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).size <<= /*binOp end*/1, /*binOp end*/1/*binOp end*/)))) return -2; ; ; } ; for (/*binOp start*/this_reg = /*binOp end*/lowest_active_reg; /*binOp start*/this_reg <= /*binOp end*/highest_active_reg; this_reg++) { ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg/*compound end*//*binOp end*/]; ; ; ; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg]./*compound end*//*binOp end*/word; } ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/lowest_active_reg; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/highest_active_reg; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = /*binOp start*/(fail_stack_elt_t) p + /*compound end*//*binOp end*//*binOp end*/mcnt; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/d; ; ; } while (0);
          break;




        case maybe_pop_jump:
          do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
          ;
          {
     register unsigned char *p2 = p;
# 5652 "target/grep.c"
     while (/*binOp start*//*binOp start*//*binOp start*/p2 + /*binOp end*/2 < /*binOp end*/pend
     && (/*binOp start*//*binOp start*/(re_opcode_t) *p2 == /*binOp end*/stop_memory
         || /*binOp start*/(re_opcode_t) *p2 == /*binOp end*//*binOp end*/start_memory/*binOp end*/))
       /*binOp start*/p2 += /*binOp end*/3;


            if (/*binOp start*/p2 == /*binOp end*/pend)
       {



           /*compound start*//*binOp start*/p[-3] = (unsigned char) /*compound end*//*binOp end*/pop_failure_jump;
                ;

              }

            else if (/*binOp start*//*binOp start*/(re_opcode_t) *p2 == /*binOp end*/exactn
       || (/*binOp start*/bufp->newline_anchor && /*binOp start*/(re_opcode_t) *p2 == /*binOp end*//*binOp end*/endline/*binOp end*/))
       {
  register unsigned char c
                  = /*binOp start*/*p2 == (unsigned char) /*binOp end*/endline ? '\n' : p2[2];
  /*compound start*//*binOp start*/p1 = /*binOp start*/p + /*compound end*//*binOp end*//*binOp end*/mcnt;




                if (/*binOp start*//*binOp start*/(re_opcode_t) p1[3] == /*binOp end*/exactn && /*binOp start*/p1[5] != /*binOp end*//*binOp end*/c)
                  {
        /*compound start*//*binOp start*/p[-3] = (unsigned char) /*compound end*//*binOp end*/pop_failure_jump;
                    ;

                  }

  else if (/*binOp start*//*binOp start*/(re_opcode_t) p1[3] == /*binOp end*/charset
    || /*binOp start*/(re_opcode_t) p1[3] == /*binOp end*//*binOp end*/charset_not)
    {
      int not = /*binOp start*/(re_opcode_t) p1[3] == /*binOp end*/charset_not;

      if (/*binOp start*//*binOp start*/c < (unsigned char) (/*binOp start*/p1[4] * /*binOp end*/8/*binOp end*/)
   && /*binOp start*/p1[/*binOp start*/5 + /*binOp start*/c / /*binOp end*//*binOp end*/8] & (/*binOp start*/1 << (/*binOp start*/c % /*binOp end*/8/*binOp end*/)/*binOp end*//*binOp end*/))
        /*binOp start*/not = !/*binOp end*/not;



      if (!not)
                      {
            /*compound start*//*binOp start*/p[-3] = (unsigned char) /*compound end*//*binOp end*/pop_failure_jump;
                        ;
                      }
    }
       }
   }
   /*assign start*//*binOp start*/p -= /*assign end*//*binOp end*/2;
   if (/*binOp start*/(re_opcode_t) p[-1] != /*binOp end*/pop_failure_jump)
     {
       /*compound start*//*binOp start*/p[-1] = (unsigned char) /*compound end*//*binOp end*/jump;
              ;
       goto unconditional_jump;
     }
# 5720 "target/grep.c"
        case pop_failure_jump:
          {





            unsigned dummy_low_reg, dummy_high_reg;
            unsigned char *pdummy;
            const char *sdummy;

            ;
            { int this_reg; const unsigned char *string_temp; ; ; ; ; ; ; ; /*compound start*//*binOp start*/string_temp = fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; if (/*binOp start*/string_temp != ((void *)0/*binOp end*/)) /*binOp start*/sdummy = (const char *) /*binOp end*/string_temp; ; ; ; /*compound start*//*binOp start*/pdummy = (unsigned char *) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; ; /*compound start*//*binOp start*/dummy_high_reg = (unsigned) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/dummy_low_reg = (unsigned) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; for (/*binOp start*/this_reg = /*binOp end*/dummy_high_reg; /*binOp start*/this_reg >= /*binOp end*/dummy_low_reg; this_reg--) { ; /*compound start*//*binOp start*/reg_info_dummy[this_reg].word = fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/reg_dummy[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/reg_dummy[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; } ; };


          }




        case jump:
 unconditional_jump:
   do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
          ;
   /*assign start*//*binOp start*/p += /*assign end*//*binOp end*/mcnt;
          ;
   break;




        case jump_past_alt:
          ;
          goto unconditional_jump;







        case dummy_failure_jump:
          ;


          do { char *destination; int this_reg; ; ; ; ; ; ; ; while (/*binOp start*/(/*binOp start*/(fail_stack).size - (fail_stack)./*binOp end*/avail) < (/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/highest_active_reg - /*binOp end*/lowest_active_reg + /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*/)) { if (!(/*binOp start*/(fail_stack).size > /*binOp start*/re_max_failures * (/*binOp start*//*binOp start*/(/*binOp start*/num_regs - /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*//*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).stack = (fail_stack_elt_t *) (/*binOp start*//*binOp start*//*binOp start*/destination = (char *) __builtin_alloca (/*binOp start*/(/*binOp start*/(fail_stack).size << /*binOp end*/1) * sizeof (fail_stack_elt_t/*binOp end*/)/*binOp end*/), memcpy ((destination), ((fail_stack).stack), (/*binOp start*/(fail_stack).size * sizeof (fail_stack_elt_t/*binOp end*/))/*binOp end*/), /*binOp end*/destination/*binOp end*/), /*binOp start*/(fail_stack).stack == ((void *)0/*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).size <<= /*binOp end*/1, /*binOp end*/1/*binOp end*/)))) return -2; ; ; } ; for (/*binOp start*/this_reg = /*binOp end*/lowest_active_reg; /*binOp start*/this_reg <= /*binOp end*/highest_active_reg; this_reg++) { ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg/*compound end*//*binOp end*/]; ; ; ; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg]./*compound end*//*binOp end*/word; } ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/lowest_active_reg; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/highest_active_reg; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/0; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/0; ; ; } while (0);
          goto unconditional_jump;







        case push_dummy_failure:
          ;


          do { char *destination; int this_reg; ; ; ; ; ; ; ; while (/*binOp start*/(/*binOp start*/(fail_stack).size - (fail_stack)./*binOp end*/avail) < (/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/highest_active_reg - /*binOp end*/lowest_active_reg + /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*/)) { if (!(/*binOp start*/(fail_stack).size > /*binOp start*/re_max_failures * (/*binOp start*//*binOp start*/(/*binOp start*/num_regs - /*binOp end*/1) * /*binOp end*/3 + /*binOp end*/4/*binOp end*//*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).stack = (fail_stack_elt_t *) (/*binOp start*//*binOp start*//*binOp start*/destination = (char *) __builtin_alloca (/*binOp start*/(/*binOp start*/(fail_stack).size << /*binOp end*/1) * sizeof (fail_stack_elt_t/*binOp end*/)/*binOp end*/), memcpy ((destination), ((fail_stack).stack), (/*binOp start*/(fail_stack).size * sizeof (fail_stack_elt_t/*binOp end*/))/*binOp end*/), /*binOp end*/destination/*binOp end*/), /*binOp start*/(fail_stack).stack == ((void *)0/*binOp end*/) ? 0 : (/*binOp start*//*binOp start*/(fail_stack).size <<= /*binOp end*/1, /*binOp end*/1/*binOp end*/)))) return -2; ; ; } ; for (/*binOp start*/this_reg = /*binOp end*/lowest_active_reg; /*binOp start*/this_reg <= /*binOp end*/highest_active_reg; this_reg++) { ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg/*compound end*//*binOp end*/]; ; ; ; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg]./*compound end*//*binOp end*/word; } ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/lowest_active_reg; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/highest_active_reg; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/0; ; ; ; /*compound start*//*binOp start*/fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) /*compound end*//*binOp end*/0; ; ; } while (0);
          break;



        case succeed_n:
          do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(/*binOp start*/p + /*binOp end*/2) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(/*binOp start*/p + /*binOp end*/2) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0);
          ;

          ;

          if (/*binOp start*/mcnt > /*binOp end*/0)
            {
               mcnt--;
        /*assign start*//*binOp start*/p += /*assign end*//*binOp end*/2;
               do { do { /*compound start*//*binOp start*/(p)[0] = /*binOp start*/(mcnt) & /*compound end*//*binOp end*//*binOp end*/0377; /*compound start*//*binOp start*/(p)[1] = /*binOp start*/(mcnt) >> /*compound end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
               ;
            }
   else if (/*binOp start*/mcnt == /*binOp end*/0)
            {
              ;
       /*compound start*//*binOp start*/p[2] = (unsigned char) /*compound end*//*binOp end*/no_op;
              /*compound start*//*binOp start*/p[3] = (unsigned char) /*compound end*//*binOp end*/no_op;
              goto on_failure;
            }
          break;

        case jump_n:
          do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(/*binOp start*/p + /*binOp end*/2) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(/*binOp start*/p + /*binOp end*/2) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0);
          ;


          if (mcnt)
            {
               mcnt--;
               do { /*compound start*//*binOp start*/(/*binOp start*/p + /*binOp end*/2)[0] = /*binOp start*/(mcnt) & /*compound end*//*binOp end*//*binOp end*/0377; /*compound start*//*binOp start*/(/*binOp start*/p + /*binOp end*/2)[1] = /*binOp start*/(mcnt) >> /*compound end*//*binOp end*//*binOp end*/8; } while (0);
        goto unconditional_jump;
            }

   else
     /*binOp start*/p += /*binOp end*/4;
          break;

 case set_number_at:
   {
            ;

            do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
            /*compound start*//*binOp start*/p1 = /*binOp start*/p + /*compound end*//*binOp end*//*binOp end*/mcnt;
            do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p) += /*assign end*//*binOp end*/2; } while (0);
            ;
     do { /*compound start*//*binOp start*/(p1)[0] = /*binOp start*/(mcnt) & /*compound end*//*binOp end*//*binOp end*/0377; /*compound start*//*binOp start*/(p1)[1] = /*binOp start*/(mcnt) >> /*compound end*//*binOp end*//*binOp end*/8; } while (0);
            break;
          }

        case wordbound:
          ;
          if ((/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/(d) == (size1 ? string1 : string2/*binOp end*/) || !/*binOp end*/size2) || (/*binOp start*/(d) == /*binOp end*/end2/*binOp end*/) || /*binOp start*/(/*binOp start*/re_syntax_table[/*binOp start*/(/*binOp start*/d - /*binOp end*/1) == /*binOp end*/end1 ? *string2 : /*binOp start*/(/*binOp start*/d - /*binOp end*/1) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(/*binOp start*/d - /*binOp end*/1)] == /*binOp end*/1) != (/*binOp start*/re_syntax_table[/*binOp start*/(d) == /*binOp end*/end1 ? *string2 : /*binOp start*/(d) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(d)] == /*binOp end*/1/*binOp end*//*binOp end*/)))
     break;
          goto fail;

 case notwordbound:
          ;
   if ((/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/(d) == (size1 ? string1 : string2/*binOp end*/) || !/*binOp end*/size2) || (/*binOp start*/(d) == /*binOp end*/end2/*binOp end*/) || /*binOp start*/(/*binOp start*/re_syntax_table[/*binOp start*/(/*binOp start*/d - /*binOp end*/1) == /*binOp end*/end1 ? *string2 : /*binOp start*/(/*binOp start*/d - /*binOp end*/1) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(/*binOp start*/d - /*binOp end*/1)] == /*binOp end*/1) != (/*binOp start*/re_syntax_table[/*binOp start*/(d) == /*binOp end*/end1 ? *string2 : /*binOp start*/(d) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(d)] == /*binOp end*/1/*binOp end*//*binOp end*/)))
     goto fail;
          break;

 case wordbeg:
          ;
   if (/*binOp start*/(/*binOp start*/re_syntax_table[/*binOp start*/(d) == /*binOp end*/end1 ? *string2 : /*binOp start*/(d) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(d)] == /*binOp end*/1) && (/*binOp start*/(/*binOp start*//*binOp start*/(d) == (size1 ? string1 : string2/*binOp end*/) || !/*binOp end*/size2) || !(/*binOp start*/re_syntax_table[/*binOp start*/(/*binOp start*/d - /*binOp end*/1) == /*binOp end*/end1 ? *string2 : /*binOp start*/(/*binOp start*/d - /*binOp end*/1) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(/*binOp start*/d - /*binOp end*/1)] == /*binOp end*/1/*binOp end*/)/*binOp end*/))
     break;
          goto fail;

 case wordend:
          ;
   if (/*binOp start*//*binOp start*/!(/*binOp start*//*binOp start*/(d) == (size1 ? string1 : string2/*binOp end*/) || !/*binOp end*/size2) && (/*binOp start*/re_syntax_table[/*binOp start*/(/*binOp start*/d - /*binOp end*/1) == /*binOp end*/end1 ? *string2 : /*binOp start*/(/*binOp start*/d - /*binOp end*/1) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(/*binOp start*/d - /*binOp end*/1)] == /*binOp end*/1/*binOp end*/)
              && (/*binOp start*/!(/*binOp start*/re_syntax_table[/*binOp start*/(d) == /*binOp end*/end1 ? *string2 : /*binOp start*/(d) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(d)] == /*binOp end*/1) || (/*binOp start*/(d) == /*binOp end*/end2/*binOp end*/)/*binOp end*/))
     break;
          goto fail;
# 5916 "target/grep.c"
 case wordchar:
          ;
   while (/*binOp start*/d == /*binOp end*/dend) { if (/*binOp start*/dend == /*binOp end*/end_match_2) goto fail; /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/string2; /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_2; };
          if (!(/*binOp start*/re_syntax_table[/*binOp start*/(d) == /*binOp end*/end1 ? *string2 : /*binOp start*/(d) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(d)] == /*binOp end*/1))
            goto fail;
   do { unsigned r; for (/*binOp start*/r = /*binOp end*/lowest_active_reg; /*binOp start*/r <= /*binOp end*/highest_active_reg; r++) { /*compound start*//*binOp start*/((reg_info[r]).bits.matched_something) = /*binOp start*/((reg_info[r]).bits.ever_matched_something) = /*compound end*//*binOp end*//*binOp end*/1; } } while (0);
          d++;
   break;

 case notwordchar:
          ;
   while (/*binOp start*/d == /*binOp end*/dend) { if (/*binOp start*/dend == /*binOp end*/end_match_2) goto fail; /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/string2; /*compound start*//*binOp start*/dend = /*compound end*//*binOp end*/end_match_2; };
   if ((/*binOp start*/re_syntax_table[/*binOp start*/(d) == /*binOp end*/end1 ? *string2 : /*binOp start*/(d) == /*binOp start*/string2 - /*binOp end*//*binOp end*/1 ? *(/*binOp start*/end1 - /*binOp end*/1) : *(d)] == /*binOp end*/1))
            goto fail;
          do { unsigned r; for (/*binOp start*/r = /*binOp end*/lowest_active_reg; /*binOp start*/r <= /*binOp end*/highest_active_reg; r++) { /*compound start*//*binOp start*/((reg_info[r]).bits.matched_something) = /*binOp start*/((reg_info[r]).bits.ever_matched_something) = /*compound end*//*binOp end*//*binOp end*/1; } } while (0);
          d++;
   break;


        default:
          abort ();
 }
      continue;



    fail:
      if (!(/*binOp start*/fail_stack.avail == /*binOp end*/0))
 {
          ;
          { int this_reg; const unsigned char *string_temp; ; ; ; ; ; ; ; /*compound start*//*binOp start*/string_temp = fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; if (/*binOp start*/string_temp != ((void *)0/*binOp end*/)) /*binOp start*/d = (const char *) /*binOp end*/string_temp; ; ; ; /*compound start*//*binOp start*/p = (unsigned char *) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; ; /*compound start*//*binOp start*/highest_active_reg = (unsigned) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/lowest_active_reg = (unsigned) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; for (/*binOp start*/this_reg = /*binOp end*/highest_active_reg; /*binOp start*/this_reg >= /*binOp end*/lowest_active_reg; this_reg--) { ; /*compound start*//*binOp start*/reg_info[this_reg].word = fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/regend[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; /*compound start*//*binOp start*/regstart[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail/*compound end*//*binOp end*/]; ; } ; };




          if (!p)
     goto fail;


   ;
          if (/*binOp start*/p < /*binOp end*/pend)
            {
              boolean is_a_jump_n = 0;



              switch ((re_opcode_t) *p)
                {
                case jump_n:
                  /*case comp start*//*binOp start*/is_a_jump_n = /*case comp end*//*binOp end*/1;
                case maybe_pop_jump:
                case pop_failure_jump:
                case jump:
                  /*case comp start*//*binOp start*/p1 = /*binOp start*/p + /*case comp end*//*binOp end*//*binOp end*/1;
                  do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);
                  /*assign start*//*binOp start*/p1 += /*assign end*//*binOp end*/mcnt;

                  if (/*binOp start*/(/*binOp start*/is_a_jump_n && /*binOp start*/(re_opcode_t) *p1 == /*binOp end*//*binOp end*/succeed_n)
                      || (/*binOp start*/!is_a_jump_n
                          && /*binOp start*/(re_opcode_t) *p1 == /*binOp end*//*binOp end*/on_failure_jump/*binOp end*/))
                    goto fail;
                  break;
                default:
                                   ;
                }
            }

          if (/*binOp start*//*binOp start*/d >= /*binOp end*/string1 && /*binOp start*/d <= /*binOp end*//*binOp end*/end1)
     /*binOp start*/dend = /*binOp end*/end_match_1;
        }
      else
        break;
    }

  if (best_regs_set)
    goto restore_best_regs;

  __builtin_alloca (0);

  return -1;
}
# 6011 "target/grep.c"
static boolean
group_match_null_string_p (p, end, reg_info)
    unsigned char **p, *end;
    register_info_type *reg_info;
{
  int mcnt;

  unsigned char *p1 = /*binOp start*/*p + /*binOp end*/2;

  while (/*binOp start*/p1 < /*binOp end*/end)
    {




      switch ((re_opcode_t) *p1)
        {

        case on_failure_jump:
          p1++;
          do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);




   if (/*binOp start*/mcnt >= /*binOp end*/0)
     {
# 6056 "target/grep.c"
              while (/*binOp start*/(re_opcode_t) p1[/*binOp start*/mcnt-/*binOp end*/3] == /*binOp end*/jump_past_alt)
                {




                  if (!alt_match_null_string_p (p1, /*binOp start*//*binOp start*/p1 + /*binOp end*/mcnt - /*binOp end*/3,
                          reg_info))
                    return 0;



                  /*assign start*//*binOp start*/p1 += /*assign end*//*binOp end*/mcnt;



                  if (/*binOp start*/(re_opcode_t) *p1 != /*binOp end*/on_failure_jump)
                    break;



    p1++;
                  do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);
                  if (/*binOp start*/(re_opcode_t) p1[/*binOp start*/mcnt-/*binOp end*/3] != /*binOp end*/jump_past_alt)
                    {

                      /*assign start*//*binOp start*/p1 -= /*assign end*//*binOp end*/3;
                      break;
                    }
                }




              do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(/*binOp start*/p1 - /*binOp end*/2) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(/*binOp start*/p1 - /*binOp end*/2) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0);

              if (!alt_match_null_string_p (p1, /*binOp start*/p1 + /*binOp end*/mcnt, reg_info))
                return 0;

              /*assign start*//*binOp start*/p1 += /*assign end*//*binOp end*/mcnt;
            }
          break;


        case stop_memory:
   ;
          /*compound start*//*binOp start*/*p = /*binOp start*/p1 + /*compound end*//*binOp end*//*binOp end*/2;
          return 1;


        default:
          if (!common_op_match_null_string_p (&p1, end, reg_info))
            return 0;
        }
    }

  return 0;
}






static boolean
alt_match_null_string_p (p, end, reg_info)
    unsigned char *p, *end;
    register_info_type *reg_info;
{
  int mcnt;
  unsigned char *p1 = p;

  while (/*binOp start*/p1 < /*binOp end*/end)
    {



      switch ((re_opcode_t) *p1)
        {

        case on_failure_jump:
          p1++;
          do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);
          /*assign start*//*binOp start*/p1 += /*assign end*//*binOp end*/mcnt;
          break;

 default:
          if (!common_op_match_null_string_p (&p1, end, reg_info))
            return 0;
        }
    }

  return 1;
}







static boolean
common_op_match_null_string_p (p, end, reg_info)
    unsigned char **p, *end;
    register_info_type *reg_info;
{
  int mcnt;
  boolean ret;
  int reg_no;
  unsigned char *p1 = *p;

  switch ((re_opcode_t) *p1++)
    {
    case no_op:
    case begline:
    case endline:
    case begbuf:
    case endbuf:
    case wordbeg:
    case wordend:
    case wordbound:
    case notwordbound:





      break;

    case start_memory:
      /*case comp start*//*binOp start*/reg_no = */*case comp end*//*binOp end*/p1;
      ;
      /*compound start*//*binOp start*/ret = group_match_null_string_p (&p1, end, reg_info/*compound end*//*binOp end*/);




      if (/*binOp start*/((reg_info[reg_no]).bits.match_null_string_p) == /*binOp end*/3)
        /*binOp start*/((reg_info[reg_no]).bits.match_null_string_p) = /*binOp end*/ret;

      if (!ret)
        return 0;
      break;


    case jump:
      do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);
      if (/*binOp start*/mcnt >= /*binOp end*/0)
        /*binOp start*/p1 += /*binOp end*/mcnt;
      else
        return 0;
      break;

    case succeed_n:

      /*case assign start*//*binOp start*/p1 += /*binOp end*/2;
      do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);

      if (/*binOp start*/mcnt == /*binOp end*/0)
        {
          /*assign start*//*binOp start*/p1 -= /*assign end*//*binOp end*/4;
          do { do { /*compound start*//*binOp start*/(mcnt) = /*binOp start*/*(p1) & /*compound end*//*binOp end*//*binOp end*/0377; /*assign start*//*binOp start*/(mcnt) += /*binOp start*/((signed char) (*(/*binOp start*/(p1) + /*binOp end*/1))) << /*assign end*//*binOp end*//*binOp end*/8; } while (0); /*assign start*//*binOp start*/(p1) += /*assign end*//*binOp end*/2; } while (0);
          /*assign start*//*binOp start*/p1 += /*assign end*//*binOp end*/mcnt;
        }
      else
        return 0;
      break;

    case duplicate:
      if (!((reg_info[*p1]).bits.match_null_string_p))
        return 0;
      break;

    case set_number_at:
      /*case assign start*//*binOp start*/p1 += /*binOp end*/4;

    default:

      return 0;
  }

  /*compound start*//*binOp start*/*p = /*compound end*//*binOp end*/p1;
  return 1;
}





static int
bcmp_translate (s1, s2, len, translate)
     unsigned char *s1, *s2;
     register int len;
     char *translate;
{
  register unsigned char *p1 = s1, *p2 = s2;
  while (len)
    {
      if (/*binOp start*/translate[*p1++] != translate[*p2++/*binOp end*/]) return 1;
      len--;
    }
  return 0;
}
# 6271 "target/grep.c"
const char *
re_compile_pattern (pattern, length, bufp)
     const char *pattern;
     int length;
     struct re_pattern_buffer *bufp;
{
  reg_errcode_t ret;



  /*compound start*//*binOp start*/bufp->regs_allocated = /*compound end*//*binOp end*/0;




  /*compound start*//*binOp start*/bufp->no_sub = /*compound end*//*binOp end*/0;


  /*compound start*//*binOp start*/bufp->newline_anchor = /*compound end*//*binOp end*/1;

  /*compound start*//*binOp start*/ret = regex_compile (pattern, length, re_syntax_options, bufp/*compound end*//*binOp end*/);

  return re_error_msg[(int) ret];
}
# 6390 "target/grep.c"
int
regcomp (preg, pattern, cflags)
    regex_t *preg;
    const char *pattern;
    int cflags;
{
  reg_errcode_t ret;
  unsigned syntax
    = (/*binOp start*/cflags & /*binOp end*/1) ?
      (/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) : (/*binOp start*/(/*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) | (/*binOp start*/(1) << /*binOp end*/1/*binOp end*/));


  /*compound start*//*binOp start*/preg->buffer = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/preg->allocated = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/preg->used = /*compound end*//*binOp end*/0;





  /*compound start*//*binOp start*/preg->fastmap = /*compound end*//*binOp end*/0;

  if (/*binOp start*/cflags & (/*binOp start*/1 << /*binOp end*/1/*binOp end*/))
    {
      unsigned i;

      /*compound start*//*binOp start*/preg->translate = (char *) malloc (256/*compound end*//*binOp end*/);
      if (/*binOp start*/preg->translate == ((void *)0/*binOp end*/))
        return (int) REG_ESPACE;


      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp end*/256; i++)
        /*binOp start*/preg->translate[i] = (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) /*binOp end*/_ISupper/*binOp end*/)) ? tolower (i) : /*binOp end*/i;
    }
  else
    /*binOp start*/preg->translate = ((void *)0/*binOp end*/);


  if (/*binOp start*/cflags & (/*binOp start*/(/*binOp start*/1 << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
    {
      /*assign start*//*binOp start*/syntax &= ~(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*assign end*//*binOp end*/);
      /*assign start*//*binOp start*/syntax |= (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*assign end*//*binOp end*/);

      /*compound start*//*binOp start*/preg->newline_anchor = /*compound end*//*binOp end*/1;
    }
  else
    /*binOp start*/preg->newline_anchor = /*binOp end*/0;

  /*compound start*//*binOp start*/preg->no_sub = !!(/*binOp start*/cflags & (/*binOp start*/(/*binOp start*/(/*binOp start*/1 << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)/*compound end*//*binOp end*/);



  /*compound start*//*binOp start*/ret = regex_compile (pattern, strlen (pattern), syntax, preg/*compound end*//*binOp end*/);



  if (/*binOp start*/ret == /*binOp end*/REG_ERPAREN) /*binOp start*/ret = /*binOp end*/REG_EPAREN;

  return (int) ret;
}
# 6466 "target/grep.c"
int
regexec (preg, string, nmatch, pmatch, eflags)
    const regex_t *preg;
    const char *string;
    size_t nmatch;
    regmatch_t pmatch[];
    int eflags;
{
  int ret;
  struct re_registers regs;
  regex_t private_preg;
  int len = strlen (string);
  boolean want_reg_info = /*binOp start*/!preg->no_sub && /*binOp start*/nmatch > /*binOp end*//*binOp end*/0;

  /*compound start*//*binOp start*/private_preg = */*compound end*//*binOp end*/preg;

  /*compound start*//*binOp start*/private_preg.not_bol = !!(/*binOp start*/eflags & /*binOp end*/1/*compound end*//*binOp end*/);
  /*compound start*//*binOp start*/private_preg.not_eol = !!(/*binOp start*/eflags & (/*binOp start*/1 << /*binOp end*/1/*binOp end*/)/*compound end*//*binOp end*/);




  /*compound start*//*binOp start*/private_preg.regs_allocated = /*compound end*//*binOp end*/2;

  if (want_reg_info)
    {
      /*compound start*//*binOp start*/regs.num_regs = /*compound end*//*binOp end*/nmatch;
      /*compound start*//*binOp start*/regs.start = ((regoff_t *) malloc (/*binOp start*/(nmatch) * sizeof (regoff_t/*binOp end*/))/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/regs.end = ((regoff_t *) malloc (/*binOp start*/(nmatch) * sizeof (regoff_t/*binOp end*/))/*compound end*//*binOp end*/);
      if (/*binOp start*//*binOp start*/regs.start == ((void *)0/*binOp end*/) || /*binOp start*/regs.end == ((void *)0/*binOp end*//*binOp end*/))
        return (int) REG_NOMATCH;
    }


  /*compound start*//*binOp start*/ret = re_search (&private_preg, string, len,
                                0, len,
                   want_reg_info ? &regs : (struct re_registers *) 0/*compound end*//*binOp end*/);


  if (want_reg_info)
    {
      if (/*binOp start*/ret >= /*binOp end*/0)
        {
          unsigned r;

          for (/*binOp start*/r = /*binOp end*/0; /*binOp start*/r < /*binOp end*/nmatch; r++)
            {
              /*compound start*//*binOp start*/pmatch[r].rm_so = regs.start[r/*compound end*//*binOp end*/];
              /*compound start*//*binOp start*/pmatch[r].rm_eo = regs.end[r/*compound end*//*binOp end*/];
            }
        }


      free (regs.start);
      free (regs.end);
    }


  return /*binOp start*/ret >= /*binOp end*/0 ? (int) REG_NOERROR : (int) REG_NOMATCH;
}





size_t
regerror (errcode, preg, errbuf, errbuf_size)
    int errcode;
    const regex_t *preg;
    char *errbuf;
    size_t errbuf_size;
{
  const char *msg;
  size_t msg_size;

  if (/*binOp start*//*binOp start*/errcode < /*binOp end*/0
      || /*binOp start*/errcode >= (/*binOp start*/sizeof (re_error_msg) / sizeof (re_error_msg[0]/*binOp end*/)/*binOp end*//*binOp end*/))




    abort ();

  /*compound start*//*binOp start*/msg = re_error_msg[errcode/*compound end*//*binOp end*/];



  if (! msg)
    /*binOp start*/msg = /*binOp end*/"Success";

  /*compound start*//*binOp start*/msg_size = /*binOp start*/strlen (msg) + /*compound end*//*binOp end*//*binOp end*/1;

  if (/*binOp start*/errbuf_size != /*binOp end*/0)
    {
      if (/*binOp start*/msg_size > /*binOp end*/errbuf_size)
        {
          strncpy (errbuf, msg, /*binOp start*/errbuf_size - /*binOp end*/1);
          /*compound start*//*binOp start*/errbuf[/*binOp start*/errbuf_size - /*binOp end*/1] = /*compound end*//*binOp end*/0;
        }
      else
        strcpy (errbuf, msg);
    }

  return msg_size;
}




void
regfree (preg)
    regex_t *preg;
{
  if (/*binOp start*/preg->buffer != ((void *)0/*binOp end*/))
    free (preg->buffer);
  /*compound start*//*binOp start*/preg->buffer = ((void *)0/*compound end*//*binOp end*/);

  /*compound start*//*binOp start*/preg->allocated = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/preg->used = /*compound end*//*binOp end*/0;

  if (/*binOp start*/preg->fastmap != ((void *)0/*binOp end*/))
    free (preg->fastmap);
  /*compound start*//*binOp start*/preg->fastmap = ((void *)0/*compound end*//*binOp end*/);
  /*compound start*//*binOp start*/preg->fastmap_accurate = /*compound end*//*binOp end*/0;

  if (/*binOp start*/preg->translate != ((void *)0/*binOp end*/))
    free (preg->translate);
  /*compound start*//*binOp start*/preg->translate = ((void *)0/*compound end*//*binOp end*/);
}
# 6700 "target/grep.c"
# 1 "target/dfa.h" 1
# 38 "target/dfa.h"
typedef int charclass[(/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/))];





typedef enum
{
  END = -1,







  EMPTY = (/*binOp start*/1 << /*binOp end*/8),


  BACKREF,






  BEGLINE,



  ENDLINE,



  BEGWORD,



  ENDWORD,



  LIMWORD,



  NOTLIMWORD,



  QMARK,



  STAR,



  PLUS,



  REPMN,



  CAT,




  OR,


  ORTOP,


  LPAREN,


  RPAREN,

  CSET


} token;
# 182 "target/dfa.h"
typedef struct
{
  unsigned strchr;
  unsigned constraint;
} position;


typedef struct
{
  position *elems;
  int nelem;
} position_set;




typedef struct
{
  int hash;
  position_set elems;
  char newline;
  char letter;
  char backref;
  unsigned char constraint;
  int first_end;
} dfa_state;



struct dfamust
{
  int exact;
  char *must;
  struct dfamust *next;
};


struct dfa
{

  charclass *charclasses;
  int cindex;
  int calloc;


  token *tokens;
  int tindex;
  int talloc;
  int depth;


  int nleaves;
  int nregexps;



  dfa_state *states;
  int sindex;
  int salloc;


  position_set *follows;






  int searchflag;
# 259 "target/dfa.h"
  int tralloc;

  int trcount;

  int **trans;




  int **realtrans;

  int **fails;

  int *success;

  int *newlines;






  struct dfamust *musts;


};
# 308 "target/dfa.h"
extern void dfasyntax(int, int);




extern void dfacomp(char *, size_t, struct dfa *, int);
# 327 "target/dfa.h"
extern char *dfaexec(struct dfa *, char *, char *, int, int *, int *);


extern void dfafree(struct dfa *);




extern void dfainit(struct dfa *);


extern void dfaparse(char *, size_t, struct dfa *);



extern void dfaanalyze(struct dfa *, int);



extern void dfastate(int, struct dfa *, int []);







extern void dfaerror(char *);
# 6701 "target/grep.c" 2



typedef void *ptr_t;




static void dfamust();

static ptr_t
xcalloc(n, s)
     int n;
     size_t s;
{
  ptr_t r = calloc(n, s);

  if (!r)
    dfaerror("Memory exhausted");
  return r;
}

static ptr_t
xmalloc_1(n)
     size_t n;
{
  ptr_t r = malloc(n);

  ;
  if (!r)
    dfaerror("Memory exhausted");
  return r;
}

static ptr_t
xrealloc_1(p, n)
     ptr_t p;
     size_t n;
{
  ptr_t r = realloc(p, n);

  ;
  if (!r)
    dfaerror("Memory exhausted");
  return r;
}
# 6802 "target/grep.c"
static int
tstbit(b, c)
     int b;
     charclass c;
{
  return /*binOp start*/c[/*binOp start*/b / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)] & /*binOp start*/1 << /*binOp start*/b % (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*//*binOp end*//*binOp end*/);
}

static void
setbit(b, c)
     int b;
     charclass c;
{
  /*assign start*//*binOp start*/c[/*binOp start*/b / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)] |= /*binOp start*/1 << /*binOp start*/b % (/*binOp start*/8 * sizeof (int/*binOp end*/)/*assign end*//*binOp end*//*binOp end*//*binOp end*/);
}

static void
clrbit(b, c)
     int b;
     charclass c;
{
  /*assign start*//*binOp start*/c[/*binOp start*/b / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)] &= ~(/*binOp start*/1 << /*binOp start*/b % (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*//*binOp end*/)/*assign end*//*binOp end*/);
}

static void
copyset(src, dst)
     charclass src;
     charclass dst;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++i)
    /*binOp start*/dst[i] = src[i/*binOp end*/];
}

static void
zeroset(s)
     charclass s;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++i)
    /*binOp start*/s[i] = /*binOp end*/0;
}

static void
notset(s)
     charclass s;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++i)
    /*binOp start*/s[i] = ~s[i/*binOp end*/];
}

static int
equal(s1, s2)
     charclass s1;
     charclass s2;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++i)
    if (/*binOp start*/s1[i] != s2[i/*binOp end*/])
      return 0;
  return 1;
}


static struct dfa *dfa;


static int
charclass_index(s)
     charclass s;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < dfa->/*binOp end*/cindex; ++i)
    if (equal(s, dfa->charclasses[i]))
      return i;
  if (/*binOp start*/(dfa->cindex) >= (dfa->calloc/*binOp end*/)) { while (/*binOp start*/(dfa->cindex) >= (dfa->calloc/*binOp end*/)) /*binOp start*/(dfa->calloc) *= /*binOp end*/2; (/*binOp start*/(dfa->charclasses) = (charclass *) xrealloc_1((ptr_t) (dfa->charclasses), /*binOp start*/(dfa->calloc) * sizeof (charclass/*binOp end*/)/*binOp end*/)); };
  ++dfa->cindex;
  copyset(s, dfa->charclasses[i]);
  return i;
}


static int syntax_bits, syntax_bits_set;


static int case_fold;


void
dfasyntax(bits, fold)
     int bits;
     int fold;
{
  /*compound start*//*binOp start*/syntax_bits_set = /*compound end*//*binOp end*/1;
  /*compound start*//*binOp start*/syntax_bits = /*compound end*//*binOp end*/bits;
  /*compound start*//*binOp start*/case_fold = /*compound end*//*binOp end*/fold;
}






static char *lexstart;
static char *lexptr;
static lexleft;
static token lasttok;
static int laststart;

static int parens;
static int minrep, maxrep;
# 6934 "target/grep.c"
static int is_alpha(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISalpha/*binOp end*/)); }
static int is_upper(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISupper/*binOp end*/)); }
static int is_lower(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISlower/*binOp end*/)); }
static int is_digit(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISdigit/*binOp end*/)); }
static int is_xdigit(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISxdigit/*binOp end*/)); }
static int is_space(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISspace/*binOp end*/)); }
static int is_punct(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISpunct/*binOp end*/)); }
static int is_alnum(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)); }
static int is_print(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISprint/*binOp end*/)); }
static int is_graph(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISgraph/*binOp end*/)); }
static int is_cntrl(c) int c; { return (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_IScntrl/*binOp end*/)); }




static struct {
  char *name;
  int (*pred)();
} prednames[] = {
  ":alpha:]", is_alpha,
  ":upper:]", is_upper,
  ":lower:]", is_lower,
  ":digit:]", is_digit,
  ":xdigit:]", is_xdigit,
  ":space:]", is_space,
  ":punct:]", is_punct,
  ":alnum:]", is_alnum,
  ":print:]", is_print,
  ":graph:]", is_graph,
  ":cntrl:]", is_cntrl,
  0
};

static int
looking_at(s)
     char *s;
{
  int len;

  /*compound start*//*binOp start*/len = strlen(s/*compound end*//*binOp end*/);
  if (/*binOp start*/lexleft < /*binOp end*/len)
    return 0;
  return /*binOp start*/strncmp(s, lexptr, len) == /*binOp end*/0;
}

static token
lex()
{
  token c, c1, c2;
  int backslash = 0, invert;
  charclass ccl;
  int i;







  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp end*/2; ++i)
    {
      { if (! lexleft) if (/*binOp start*/0 != /*binOp end*/0) dfaerror(0); else return END; /*compound start*//*binOp start*/(c) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
      switch (c)
 {
 case '\\':
   if (backslash)
     goto normal_char;
   if (/*binOp start*/lexleft == /*binOp end*/0)
     dfaerror("Unfinished \\ escape");
   /*compound start*//*binOp start*/backslash = /*compound end*//*binOp end*/1;
   break;

 case '^':
   if (backslash)
     goto normal_char;
   if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)
       || /*binOp start*/lasttok == /*binOp end*//*binOp end*/END
       || /*binOp start*/lasttok == /*binOp end*//*binOp end*/LPAREN
       || /*binOp start*/lasttok == /*binOp end*//*binOp end*/OR)
     return /*binOp start*/lasttok = /*binOp end*/BEGLINE;
   goto normal_char;

 case '$':
   if (backslash)
     goto normal_char;
   if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)
       || /*binOp start*/lexleft == /*binOp end*//*binOp end*/0
       || (/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)
    ? /*binOp start*//*binOp start*/lexleft > /*binOp end*/0 && /*binOp start*/*lexptr == /*binOp end*//*binOp end*/')'
    : /*binOp start*//*binOp start*//*binOp start*/lexleft > /*binOp end*/1 && /*binOp start*/lexptr[0] == /*binOp end*//*binOp end*/'\\' && /*binOp start*/lexptr[1] == /*binOp end*//*binOp end*/')'/*binOp end*/)
       || (/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)
    ? /*binOp start*//*binOp start*/lexleft > /*binOp end*/0 && /*binOp start*/*lexptr == /*binOp end*//*binOp end*/'|'
    : /*binOp start*//*binOp start*//*binOp start*/lexleft > /*binOp end*/1 && /*binOp start*/lexptr[0] == /*binOp end*//*binOp end*/'\\' && /*binOp start*/lexptr[1] == /*binOp end*//*binOp end*/'|'/*binOp end*/)
       || (/*binOp start*//*binOp start*/(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
           && /*binOp start*/lexleft > /*binOp end*//*binOp end*/0 && /*binOp start*/*lexptr == /*binOp end*//*binOp end*/'\n'/*binOp end*/))
     return /*binOp start*/lasttok = /*binOp end*/ENDLINE;
   goto normal_char;

 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   if (/*binOp start*/backslash && !(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)/*binOp end*/))
     {
       /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/0;
       return /*binOp start*/lasttok = /*binOp end*/BACKREF;
     }
   goto normal_char;

 case '<':
   if (backslash)
     return /*binOp start*/lasttok = /*binOp end*/BEGWORD;
   goto normal_char;

 case '>':
   if (backslash)
     return /*binOp start*/lasttok = /*binOp end*/ENDWORD;
   goto normal_char;

 case 'b':
   if (backslash)
     return /*binOp start*/lasttok = /*binOp end*/LIMWORD;
   goto normal_char;

 case 'B':
   if (backslash)
     return /*binOp start*/lasttok = /*binOp end*/NOTLIMWORD;
   goto normal_char;

 case '?':
   if (/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
     goto normal_char;
   if (/*binOp start*/backslash != (/*binOp start*/(/*binOp start*/syntax_bits & (/*binOp start*/(1) << /*binOp end*/1/*binOp end*/)) != /*binOp end*/0/*binOp end*/))
     goto normal_char;
   if (/*binOp start*/!(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) && /*binOp end*/laststart)
     goto normal_char;
   return /*binOp start*/lasttok = /*binOp end*/QMARK;

 case '*':
   if (backslash)
     goto normal_char;
   if (/*binOp start*/!(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) && /*binOp end*/laststart)
     goto normal_char;
   return /*binOp start*/lasttok = /*binOp end*/STAR;

 case '+':
   if (/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
     goto normal_char;
   if (/*binOp start*/backslash != (/*binOp start*/(/*binOp start*/syntax_bits & (/*binOp start*/(1) << /*binOp end*/1/*binOp end*/)) != /*binOp end*/0/*binOp end*/))
     goto normal_char;
   if (/*binOp start*/!(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) && /*binOp end*/laststart)
     goto normal_char;
   return /*binOp start*/lasttok = /*binOp end*/PLUS;

 case '{':
   if (!(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)))
     goto normal_char;
   if (/*binOp start*/backslash != (/*binOp start*/(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) == /*binOp end*/0/*binOp end*/))
     goto normal_char;
   /*compound start*//*binOp start*/minrep = /*binOp start*/maxrep = /*compound end*//*binOp end*//*binOp end*/0;





   { if (! lexleft) if (/*binOp start*/"unfinished repeat count" != /*binOp end*/0) dfaerror("unfinished repeat count"); else return END; /*compound start*//*binOp start*/(c) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
   if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISdigit/*binOp end*/)))
     {
       /*compound start*//*binOp start*/minrep = /*binOp start*/c - /*compound end*//*binOp end*//*binOp end*/'0';
       for (;;)
  {
    { if (! lexleft) if (/*binOp start*/"unfinished repeat count" != /*binOp end*/0) dfaerror("unfinished repeat count"); else return END; /*compound start*//*binOp start*/(c) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
    if (!(/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISdigit/*binOp end*/)))
      break;
    /*compound start*//*binOp start*/minrep = /*binOp start*//*binOp start*//*binOp start*/10 * /*binOp end*/minrep + /*binOp end*/c - /*compound end*//*binOp end*//*binOp end*/'0';
  }
     }
   else if (/*binOp start*/c != /*binOp end*/',')
     dfaerror("malformed repeat count");
   if (/*binOp start*/c == /*binOp end*/',')
     for (;;)
       {
  { if (! lexleft) if (/*binOp start*/"unfinished repeat count" != /*binOp end*/0) dfaerror("unfinished repeat count"); else return END; /*compound start*//*binOp start*/(c) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
  if (!(/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISdigit/*binOp end*/)))
    break;
  /*compound start*//*binOp start*/maxrep = /*binOp start*//*binOp start*//*binOp start*/10 * /*binOp end*/maxrep + /*binOp end*/c - /*compound end*//*binOp end*//*binOp end*/'0';
       }
   else
     /*binOp start*/maxrep = /*binOp end*/minrep;
   if (!(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)))
     {
       if (/*binOp start*/c != /*binOp end*/'\\')
  dfaerror("malformed repeat count");
       { if (! lexleft) if (/*binOp start*/"unfinished repeat count" != /*binOp end*/0) dfaerror("unfinished repeat count"); else return END; /*compound start*//*binOp start*/(c) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
     }
   if (/*binOp start*/c != /*binOp end*/'}')
     dfaerror("malformed repeat count");
   /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/0;
   return /*binOp start*/lasttok = /*binOp end*/REPMN;

 case '|':
   if (/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
     goto normal_char;
   if (/*binOp start*/backslash != (/*binOp start*/(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) == /*binOp end*/0/*binOp end*/))
     goto normal_char;
   /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/1;
   return /*binOp start*/lasttok = /*binOp end*/OR;

 case '\n':
   if (/*binOp start*//*binOp start*//*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)
       || /*binOp end*/backslash
       || !(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)/*binOp end*/))
     goto normal_char;
   /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/1;
   return /*binOp start*/lasttok = /*binOp end*/OR;

 case '(':
   if (/*binOp start*/backslash != (/*binOp start*/(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) == /*binOp end*/0/*binOp end*/))
     goto normal_char;
   ++parens;
   /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/1;
   return /*binOp start*/lasttok = /*binOp end*/LPAREN;

 case ')':
   if (/*binOp start*/backslash != (/*binOp start*/(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) == /*binOp end*/0/*binOp end*/))
     goto normal_char;
   if (/*binOp start*//*binOp start*/parens == /*binOp end*/0 && /*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*//*binOp end*/))
     goto normal_char;
   --parens;
   /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/0;
   return /*binOp start*/lasttok = /*binOp end*/RPAREN;

 case '.':
   if (backslash)
     goto normal_char;
   zeroset(ccl);
   notset(ccl);
   if (!(/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)))
     clrbit('\n', ccl);
   if (/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
     clrbit('\0', ccl);
   /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/0;
   return /*binOp start*/lasttok = /*binOp start*/CSET + charclass_index(ccl/*binOp end*//*binOp end*/);

 case 'w':
 case 'W':
   if (!backslash)
     goto normal_char;
   zeroset(ccl);
   for (/*binOp start*/c2 = /*binOp end*/0; /*binOp start*/c2 < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); ++c2)
     if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c2))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)))
       setbit(c2, ccl);
   if (/*binOp start*/c == /*binOp end*/'W')
     notset(ccl);
   /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/0;
   return /*binOp start*/lasttok = /*binOp start*/CSET + charclass_index(ccl/*binOp end*//*binOp end*/);

 case '[':
   if (backslash)
     goto normal_char;
   zeroset(ccl);
   { if (! lexleft) if (/*binOp start*/"Unbalanced [" != /*binOp end*/0) dfaerror("Unbalanced ["); else return END; /*compound start*//*binOp start*/(c) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
   if (/*binOp start*/c == /*binOp end*/'^')
     {
       { if (! lexleft) if (/*binOp start*/"Unbalanced [" != /*binOp end*/0) dfaerror("Unbalanced ["); else return END; /*compound start*//*binOp start*/(c) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
       /*compound start*//*binOp start*/invert = /*compound end*//*binOp end*/1;
     }
   else
     /*binOp start*/invert = /*binOp end*/0;
   do
     {






       if (/*binOp start*//*binOp start*/c == /*binOp end*/'[' && (/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)/*binOp end*/))
  for (/*binOp start*/c1 = /*binOp end*/0; prednames[c1].name; ++c1)
    if (looking_at(prednames[c1].name))
      {
        for (/*binOp start*/c2 = /*binOp end*/0; /*binOp start*/c2 < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); ++c2)
   if ((*prednames[c1].pred)(c2))
     setbit(c2, ccl);
        /*assign start*//*binOp start*/lexptr += strlen(prednames[c1].name/*assign end*//*binOp end*/);
        /*assign start*//*binOp start*/lexleft -= strlen(prednames[c1].name/*assign end*//*binOp end*/);
        { if (! lexleft) if (/*binOp start*/"Unbalanced [" != /*binOp end*/0) dfaerror("Unbalanced ["); else return END; /*compound start*//*binOp start*/(c1) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
        goto skip;
      }
       if (/*binOp start*//*binOp start*/c == /*binOp end*/'\\' && (/*binOp start*/syntax_bits & (1/*binOp end*/)/*binOp end*/))
  { if (! lexleft) if (/*binOp start*/"Unbalanced [" != /*binOp end*/0) dfaerror("Unbalanced ["); else return END; /*compound start*//*binOp start*/(c) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
       { if (! lexleft) if (/*binOp start*/"Unbalanced [" != /*binOp end*/0) dfaerror("Unbalanced ["); else return END; /*compound start*//*binOp start*/(c1) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
       if (/*binOp start*/c1 == /*binOp end*/'-')
  {
    { if (! lexleft) if (/*binOp start*/"Unbalanced [" != /*binOp end*/0) dfaerror("Unbalanced ["); else return END; /*compound start*//*binOp start*/(c2) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
    if (/*binOp start*/c2 == /*binOp end*/']')
      {


        --lexptr;
        ++lexleft;
        /*compound start*//*binOp start*/c2 = /*compound end*//*binOp end*/c;
      }
    else
      {
        if (/*binOp start*//*binOp start*/c2 == /*binOp end*/'\\'
     && (/*binOp start*/syntax_bits & (1/*binOp end*/)/*binOp end*/))
   { if (! lexleft) if (/*binOp start*/"Unbalanced [" != /*binOp end*/0) dfaerror("Unbalanced ["); else return END; /*compound start*//*binOp start*/(c2) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
        { if (! lexleft) if (/*binOp start*/"Unbalanced [" != /*binOp end*/0) dfaerror("Unbalanced ["); else return END; /*compound start*//*binOp start*/(c1) = (unsigned char) *lexptr/*compound end*//*binOp end*/++; --lexleft; };
      }
  }
       else
  /*binOp start*/c2 = /*binOp end*/c;
       while (/*binOp start*/c <= /*binOp end*/c2)
  {
    setbit(c, ccl);
    if (case_fold)
      if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISupper/*binOp end*/)))
        setbit(tolower(c), ccl);
      else if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISlower/*binOp end*/)))
        setbit(toupper(c), ccl);
    ++c;
  }
     skip:
       ;
     }
   while (/*binOp start*/(/*binOp start*/c = /*binOp end*/c1) != /*binOp end*/']');
   if (invert)
     {
       notset(ccl);
       if (/*binOp start*/syntax_bits & (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/))
  clrbit('\n', ccl);
     }
   /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/0;
   return /*binOp start*/lasttok = /*binOp start*/CSET + charclass_index(ccl/*binOp end*//*binOp end*/);

 default:
 normal_char:
   /*binOp start*/laststart = /*binOp end*/0;
   if (/*binOp start*/case_fold && (/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISalpha/*binOp end*/)/*binOp end*/))
     {
       zeroset(ccl);
       setbit(c, ccl);
       if ((/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISupper))
  setbit(tolower(c), ccl);
       else
  setbit(toupper(c), ccl);
       return /*binOp start*/lasttok = /*binOp start*/CSET + charclass_index(ccl/*binOp end*//*binOp end*/);
     }
   return c;
 }
    }



  abort();
}



static token tok;
static depth;







static void
addtok(t)
     token t;
{
  if (/*binOp start*/(dfa->tindex) >= (dfa->talloc/*binOp end*/)) { while (/*binOp start*/(dfa->tindex) >= (dfa->talloc/*binOp end*/)) /*binOp start*/(dfa->talloc) *= /*binOp end*/2; (/*binOp start*/(dfa->tokens) = (token *) xrealloc_1((ptr_t) (dfa->tokens), /*binOp start*/(dfa->talloc) * sizeof (token/*binOp end*/)/*binOp end*/)); };
  /*compound start*//*binOp start*/dfa->tokens[dfa->tindex++] = /*compound end*//*binOp end*/t;

  switch (t)
    {
    case QMARK:
    case STAR:
    case PLUS:
      break;

    case CAT:
    case OR:
    case ORTOP:
      --depth;
      break;

    default:
      ++dfa->nleaves;
    case EMPTY:
      ++depth;
      break;
    }
  if (/*binOp start*/depth > dfa->/*binOp end*/depth)
    /*binOp start*/dfa->depth = /*binOp end*/depth;
}
# 7369 "target/grep.c"
static void regexp(int);




static void
atom()
{
  if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*//*binOp start*/tok >= /*binOp end*/0 && /*binOp start*/tok < (/*binOp start*/1 << /*binOp end*/8/*binOp end*//*binOp end*/)) || /*binOp start*/tok >= /*binOp end*//*binOp end*/CSET || /*binOp start*/tok == /*binOp end*//*binOp end*/BACKREF
      || /*binOp start*/tok == /*binOp end*//*binOp end*/BEGLINE || /*binOp start*/tok == /*binOp end*//*binOp end*/ENDLINE || /*binOp start*/tok == /*binOp end*//*binOp end*/BEGWORD
      || /*binOp start*/tok == /*binOp end*//*binOp end*/ENDWORD || /*binOp start*/tok == /*binOp end*//*binOp end*/LIMWORD || /*binOp start*/tok == /*binOp end*//*binOp end*/NOTLIMWORD)
    {
      addtok(tok);
      /*compound start*//*binOp start*/tok = lex(/*compound end*//*binOp end*/);
    }
  else if (/*binOp start*/tok == /*binOp end*/LPAREN)
    {
      /*compound start*//*binOp start*/tok = lex(/*compound end*//*binOp end*/);
      regexp(0);
      if (/*binOp start*/tok != /*binOp end*/RPAREN)
 dfaerror("Unbalanced (");
      /*compound start*//*binOp start*/tok = lex(/*compound end*//*binOp end*/);
    }
  else
    addtok(EMPTY);
}


static int
nsubtoks(tindex)
{
  int ntoks1;

  switch (dfa->tokens[/*binOp start*/tindex - /*binOp end*/1])
    {
    default:
      return 1;
    case QMARK:
    case STAR:
    case PLUS:
      return /*binOp start*/1 + nsubtoks(/*binOp start*/tindex - /*binOp end*/1/*binOp end*/);
    case CAT:
    case OR:
    case ORTOP:
      /*case comp start*//*binOp start*/ntoks1 = nsubtoks(/*binOp start*/tindex - /*binOp end*/1/*case comp end*//*binOp end*/);
      return /*binOp start*//*binOp start*/1 + /*binOp end*/ntoks1 + nsubtoks(/*binOp start*//*binOp start*/tindex - /*binOp end*/1 - /*binOp end*/ntoks1/*binOp end*/);
    }
}


static void
copytoks(tindex, ntokens)
     int tindex, ntokens;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp end*/ntokens; ++i)
    addtok(dfa->tokens[/*binOp start*/tindex + /*binOp end*/i]);
}

static void
closure()
{
  int tindex, ntokens, i;

  atom();
  while (/*binOp start*//*binOp start*//*binOp start*//*binOp start*/tok == /*binOp end*/QMARK || /*binOp start*/tok == /*binOp end*//*binOp end*/STAR || /*binOp start*/tok == /*binOp end*//*binOp end*/PLUS || /*binOp start*/tok == /*binOp end*//*binOp end*/REPMN)
    if (/*binOp start*/tok == /*binOp end*/REPMN)
      {
 /*compound start*//*binOp start*/ntokens = nsubtoks(dfa->tindex/*compound end*//*binOp end*/);
 /*compound start*//*binOp start*/tindex = /*binOp start*/dfa->tindex - /*compound end*//*binOp end*//*binOp end*/ntokens;
 if (/*binOp start*/maxrep == /*binOp end*/0)
   addtok(PLUS);
 if (/*binOp start*/minrep == /*binOp end*/0)
   addtok(QMARK);
 for (/*binOp start*/i = /*binOp end*/1; /*binOp start*/i < /*binOp end*/minrep; ++i)
   {
     copytoks(tindex, ntokens);
     addtok(CAT);
   }
 for (; /*binOp start*/i < /*binOp end*/maxrep; ++i)
   {
     copytoks(tindex, ntokens);
     addtok(QMARK);
     addtok(CAT);
   }
 /*compound start*//*binOp start*/tok = lex(/*compound end*//*binOp end*/);
      }
    else
      {
 addtok(tok);
 /*compound start*//*binOp start*/tok = lex(/*compound end*//*binOp end*/);
      }
}

static void
branch()
{
  closure();
  while (/*binOp start*//*binOp start*//*binOp start*/tok != /*binOp end*/RPAREN && /*binOp start*/tok != /*binOp end*//*binOp end*/OR && /*binOp start*/tok >= /*binOp end*//*binOp end*/0)
    {
      closure();
      addtok(CAT);
    }
}

static void
regexp(toplevel)
     int toplevel;
{
  branch();
  while (/*binOp start*/tok == /*binOp end*/OR)
    {
      /*compound start*//*binOp start*/tok = lex(/*compound end*//*binOp end*/);
      branch();
      if (toplevel)
 addtok(ORTOP);
      else
 addtok(OR);
    }
}




void
dfaparse(s, len, d)
     char *s;
     size_t len;
     struct dfa *d;

{
  /*compound start*//*binOp start*/dfa = /*compound end*//*binOp end*/d;
  /*compound start*//*binOp start*/lexstart = /*binOp start*/lexptr = /*compound end*//*binOp end*//*binOp end*/s;
  /*compound start*//*binOp start*/lexleft = /*compound end*//*binOp end*/len;
  /*compound start*//*binOp start*/lasttok = /*compound end*//*binOp end*/END;
  /*compound start*//*binOp start*/laststart = /*compound end*//*binOp end*/1;
  /*compound start*//*binOp start*/parens = /*compound end*//*binOp end*/0;

  if (! syntax_bits_set)
    dfaerror("No syntax specified");

  /*compound start*//*binOp start*/tok = lex(/*compound end*//*binOp end*/);
  /*compound start*//*binOp start*/depth = d->/*compound end*//*binOp end*/depth;

  regexp(1);

  if (/*binOp start*/tok != /*binOp end*/END)
    dfaerror("Unbalanced )");

  addtok(/*binOp start*/END - d->/*binOp end*/nregexps);
  addtok(CAT);

  if (d->nregexps)
    addtok(ORTOP);

  ++d->nregexps;
}




static void
copy(src, dst)
     position_set *src;
     position_set *dst;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < src->/*binOp end*/nelem; ++i)
    /*binOp start*/dst->elems[i] = src->elems[i/*binOp end*/];
  /*compound start*//*binOp start*/dst->nelem = src->/*compound end*//*binOp end*/nelem;
}





static void
insert(p, s)
     position p;
     position_set *s;
{
  int i;
  position t1, t2;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*//*binOp start*/i < s->/*binOp end*/nelem && /*binOp start*/p.strchr < s->elems[i]./*binOp end*//*binOp end*/strchr; ++i)
    ;
  if (/*binOp start*//*binOp start*/i < s->/*binOp end*/nelem && /*binOp start*/p.strchr == s->elems[i]./*binOp end*//*binOp end*/strchr)
    /*binOp start*/s->elems[i].constraint |= p./*binOp end*/constraint;
  else
    {
      /*compound start*//*binOp start*/t1 = /*compound end*//*binOp end*/p;
      ++s->nelem;
      while (/*binOp start*/i < s->/*binOp end*/nelem)
 {
   /*compound start*//*binOp start*/t2 = s->elems[i/*compound end*//*binOp end*/];
   /*compound start*//*binOp start*/s->elems[i++] = /*compound end*//*binOp end*/t1;
   /*compound start*//*binOp start*/t1 = /*compound end*//*binOp end*/t2;
 }
    }
}



static void
merge(s1, s2, m)
     position_set *s1;
     position_set *s2;
     position_set *m;
{
  int i = 0, j = 0;

  /*compound start*//*binOp start*/m->nelem = /*compound end*//*binOp end*/0;
  while (/*binOp start*//*binOp start*/i < s1->/*binOp end*/nelem && /*binOp start*/j < s2->/*binOp end*//*binOp end*/nelem)
    if (/*binOp start*/s1->elems[i].strchr > s2->elems[j]./*binOp end*/strchr)
      /*binOp start*/m->elems[m->nelem++] = s1->elems[i++/*binOp end*/];
    else if (/*binOp start*/s1->elems[i].strchr < s2->elems[j]./*binOp end*/strchr)
      /*binOp start*/m->elems[m->nelem++] = s2->elems[j++/*binOp end*/];
    else
      {
 /*compound start*//*binOp start*/m->elems[m->nelem] = s1->elems[i++/*compound end*//*binOp end*/];
 /*assign start*//*binOp start*/m->elems[m->nelem++].constraint |= s2->elems[j++]./*assign end*//*binOp end*/constraint;
      }
  while (/*binOp start*/i < s1->/*binOp end*/nelem)
    /*binOp start*/m->elems[m->nelem++] = s1->elems[i++/*binOp end*/];
  while (/*binOp start*/j < s2->/*binOp end*/nelem)
    /*binOp start*/m->elems[m->nelem++] = s2->elems[j++/*binOp end*/];
}


static void
delete(p, s)
     position p;
     position_set *s;
{
  int i;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < s->/*binOp end*/nelem; ++i)
    if (/*binOp start*/p.strchr == s->elems[i]./*binOp end*/strchr)
      break;
  if (/*binOp start*/i < s->/*binOp end*/nelem)
    for (--s->nelem; /*binOp start*/i < s->/*binOp end*/nelem; ++i)
      /*binOp start*/s->elems[i] = s->elems[/*binOp start*/i + /*binOp end*/1/*binOp end*/];
}





static int
state_index(d, s, newline, letter)
     struct dfa *d;
     position_set *s;
     int newline;
     int letter;
{
  int hash = 0;
  int constraint;
  int i, j;

  /*compound start*//*binOp start*/newline = newline ? 1 : /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/letter = letter ? 1 : /*compound end*//*binOp end*/0;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < s->/*binOp end*/nelem; ++i)
    /*binOp start*/hash ^= /*binOp start*/s->elems[i].strchr + s->elems[i]./*binOp end*//*binOp end*/constraint;


  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/sindex; ++i)
    {
      if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*/hash != d->states[i]./*binOp end*/hash || /*binOp start*/s->nelem != d->states[i].elems./*binOp end*//*binOp end*/nelem
   || /*binOp start*/newline != d->states[i]./*binOp end*//*binOp end*/newline || /*binOp start*/letter != d->states[i]./*binOp end*//*binOp end*/letter)
 continue;
      for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < s->/*binOp end*/nelem; ++j)
 if (/*binOp start*//*binOp start*/s->elems[j].constraint
     != d->states[i].elems.elems[j]./*binOp end*/constraint
     || /*binOp start*/s->elems[j].strchr != d->states[i].elems.elems[j]./*binOp end*//*binOp end*/strchr)
   break;
      if (/*binOp start*/j == s->/*binOp end*/nelem)
 return i;
    }


  if (/*binOp start*/(d->sindex) >= (d->salloc/*binOp end*/)) { while (/*binOp start*/(d->sindex) >= (d->salloc/*binOp end*/)) /*binOp start*/(d->salloc) *= /*binOp end*/2; (/*binOp start*/(d->states) = (dfa_state *) xrealloc_1((ptr_t) (d->states), /*binOp start*/(d->salloc) * sizeof (dfa_state/*binOp end*/)/*binOp end*/)); };
  /*compound start*//*binOp start*/d->states[i].hash = /*compound end*//*binOp end*/hash;
  (/*binOp start*/(d->states[i].elems.elems) = (position *) xmalloc_1(/*binOp start*/(s->nelem) * sizeof (position/*binOp end*/)/*binOp end*/));
  copy(s, &d->states[i].elems);
  /*compound start*//*binOp start*/d->states[i].newline = /*compound end*//*binOp end*/newline;
  /*compound start*//*binOp start*/d->states[i].letter = /*compound end*//*binOp end*/letter;
  /*compound start*//*binOp start*/d->states[i].backref = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/d->states[i].constraint = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/d->states[i].first_end = /*compound end*//*binOp end*/0;
  for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < s->/*binOp end*/nelem; ++j)
    if (/*binOp start*/d->tokens[s->elems[j].strchr] < /*binOp end*/0)
      {
 /*compound start*//*binOp start*/constraint = s->elems[j]./*compound end*//*binOp end*/constraint;
 if (/*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(/*binOp start*/(constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((newline) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)) && (/*binOp start*/(constraint) & /*binOp start*/1 << (/*binOp start*/((letter) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)/*binOp end*/))
     || (/*binOp start*/(/*binOp start*/(constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((newline) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)) && (/*binOp start*/(constraint) & /*binOp start*/1 << (/*binOp start*/((letter) ? 2 : 0) + ((1) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)/*binOp end*/)/*binOp end*/)
     || (/*binOp start*/(/*binOp start*/(constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((newline) ? 2 : 0) + ((1) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)) && (/*binOp start*/(constraint) & /*binOp start*/1 << (/*binOp start*/((letter) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)/*binOp end*/)/*binOp end*/)
     || (/*binOp start*/(/*binOp start*/(constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((newline) ? 2 : 0) + ((1) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)) && (/*binOp start*/(constraint) & /*binOp start*/1 << (/*binOp start*/((letter) ? 2 : 0) + ((1) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)/*binOp end*/)/*binOp end*/))
   /*binOp start*/d->states[i].constraint |= /*binOp end*/constraint;
 if (! d->states[i].first_end)
   /*binOp start*/d->states[i].first_end = d->tokens[s->elems[j].strchr/*binOp end*/];
      }
    else if (/*binOp start*/d->tokens[s->elems[j].strchr] == /*binOp end*/BACKREF)
      {
 /*compound start*//*binOp start*/d->states[i].constraint = /*compound end*//*binOp end*/0xff;
 /*compound start*//*binOp start*/d->states[i].backref = /*compound end*//*binOp end*/1;
      }

  ++d->sindex;

  return i;
}






void
epsclosure(s, d)
     position_set *s;
     struct dfa *d;
{
  int i, j;
  int *visited;
  position p, old;

  (/*binOp start*/(visited) = (int *) xmalloc_1(/*binOp start*/(d->tindex) * sizeof (int/*binOp end*/)/*binOp end*/));
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/tindex; ++i)
    /*binOp start*/visited[i] = /*binOp end*/0;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < s->/*binOp end*/nelem; ++i)
    if (/*binOp start*//*binOp start*//*binOp start*/d->tokens[s->elems[i].strchr] >= (/*binOp start*/1 << /*binOp end*/8/*binOp end*/)
 && /*binOp start*/d->tokens[s->elems[i].strchr] != /*binOp end*//*binOp end*/BACKREF
 && /*binOp start*/d->tokens[s->elems[i].strchr] < /*binOp end*//*binOp end*/CSET)
      {
 /*compound start*//*binOp start*/old = s->elems[i/*compound end*//*binOp end*/];
 /*compound start*//*binOp start*/p.constraint = old./*compound end*//*binOp end*/constraint;
 delete(s->elems[i], s);
 if (visited[old.strchr])
   {
     --i;
     continue;
   }
 /*compound start*//*binOp start*/visited[old.strchr] = /*compound end*//*binOp end*/1;
 switch (d->tokens[old.strchr])
   {
   case BEGLINE:
     /*case assign start*//*binOp start*/p.constraint &= /*binOp end*/0xcf;
     break;
   case ENDLINE:
     /*case assign start*//*binOp start*/p.constraint &= /*binOp end*/0xaf;
     break;
   case BEGWORD:
     /*case assign start*//*binOp start*/p.constraint &= /*binOp end*/0xf2;
     break;
   case ENDWORD:
     /*case assign start*//*binOp start*/p.constraint &= /*binOp end*/0xf4;
     break;
   case LIMWORD:
     /*case assign start*//*binOp start*/p.constraint &= /*binOp end*/0xf6;
     break;
   case NOTLIMWORD:
     /*case assign start*//*binOp start*/p.constraint &= /*binOp end*/0xf9;
     break;
   default:
     break;
   }
 for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < d->follows[old.strchr]./*binOp end*/nelem; ++j)
   {
     /*compound start*//*binOp start*/p.strchr = d->follows[old.strchr].elems[j]./*compound end*//*binOp end*/strchr;
     insert(p, s);
   }

 /*compound start*//*binOp start*/i = -/*compound end*//*binOp end*/1;
      }

  free(visited);
}
# 7803 "target/grep.c"
void
dfaanalyze(d, searchflag)
     struct dfa *d;
     int searchflag;
{
  int *nullable;
  int *nfirstpos;
  position *firstpos;
  int *nlastpos;
  position *lastpos;
  int *nalloc;
  position_set tmp;
  position_set merged;
  int wants_newline;
  int *o_nullable;
  int *o_nfirst, *o_nlast;
  position *o_firstpos, *o_lastpos;
  int i, j;
  position *pos;
# 7833 "target/grep.c"
  /*compound start*//*binOp start*/d->searchflag = /*compound end*//*binOp end*/searchflag;

  (/*binOp start*/(nullable) = (int *) xmalloc_1(/*binOp start*/(d->depth) * sizeof (int/*binOp end*/)/*binOp end*/));
  /*compound start*//*binOp start*/o_nullable = /*compound end*//*binOp end*/nullable;
  (/*binOp start*/(nfirstpos) = (int *) xmalloc_1(/*binOp start*/(d->depth) * sizeof (int/*binOp end*/)/*binOp end*/));
  /*compound start*//*binOp start*/o_nfirst = /*compound end*//*binOp end*/nfirstpos;
  (/*binOp start*/(firstpos) = (position *) xmalloc_1(/*binOp start*/(d->nleaves) * sizeof (position/*binOp end*/)/*binOp end*/));
  /*compound start*//*binOp start*//*binOp start*/o_firstpos = /*binOp end*/firstpos, /*binOp start*/firstpos += d->/*compound end*//*binOp end*//*binOp end*/nleaves;
  (/*binOp start*/(nlastpos) = (int *) xmalloc_1(/*binOp start*/(d->depth) * sizeof (int/*binOp end*/)/*binOp end*/));
  /*compound start*//*binOp start*/o_nlast = /*compound end*//*binOp end*/nlastpos;
  (/*binOp start*/(lastpos) = (position *) xmalloc_1(/*binOp start*/(d->nleaves) * sizeof (position/*binOp end*/)/*binOp end*/));
  /*compound start*//*binOp start*//*binOp start*/o_lastpos = /*binOp end*/lastpos, /*binOp start*/lastpos += d->/*compound end*//*binOp end*//*binOp end*/nleaves;
  (/*binOp start*/(nalloc) = (int *) xmalloc_1(/*binOp start*/(d->tindex) * sizeof (int/*binOp end*/)/*binOp end*/));
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/tindex; ++i)
    /*binOp start*/nalloc[i] = /*binOp end*/0;
  (/*binOp start*/(merged.elems) = (position *) xmalloc_1(/*binOp start*/(d->nleaves) * sizeof (position/*binOp end*/)/*binOp end*/));

  (/*binOp start*/(d->follows) = (position_set *) xcalloc((d->tindex), sizeof (position_set)/*binOp end*/));

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/tindex; ++i)



    switch (d->tokens[i])
      {
      case EMPTY:

 /*case comp start*//*binOp start*/*nullable++ = /*case comp end*//*binOp end*/1;


 /*compound start*//*binOp start*/*nfirstpos++ = /*binOp start*/*nlastpos++ = /*compound end*//*binOp end*//*binOp end*/0;
 break;

      case STAR:
      case PLUS:


 /*case comp start*//*binOp start*/tmp.nelem = nfirstpos[-1/*case comp end*//*binOp end*/];
 /*compound start*//*binOp start*/tmp.elems = /*compound end*//*binOp end*/firstpos;
 /*compound start*//*binOp start*/pos = /*compound end*//*binOp end*/lastpos;
 for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < nlastpos[-1/*binOp end*/]; ++j)
   {
     merge(&tmp, &d->follows[pos[j].strchr], &merged);
     if (/*binOp start*/(/*binOp start*/merged.nelem - /*binOp end*/1) >= (nalloc[pos[j].strchr]/*binOp end*/)) { while (/*binOp start*/(/*binOp start*/merged.nelem - /*binOp end*/1) >= (nalloc[pos[j].strchr]/*binOp end*/)) /*binOp start*/(nalloc[pos[j].strchr]) *= /*binOp end*/2; (/*binOp start*/(d->follows[pos[j].strchr].elems) = (position *) xrealloc_1((ptr_t) (d->follows[pos[j].strchr].elems), /*binOp start*/(nalloc[pos[j].strchr]) * sizeof (position/*binOp end*/)/*binOp end*/)); };

     copy(&merged, &d->follows[pos[j].strchr]);
   }

      case QMARK:

 if (/*binOp start*/d->tokens[i] != /*binOp end*/PLUS)
   /*binOp start*/nullable[-1] = /*binOp end*/1;
 break;

      case CAT:


 /*case comp start*//*binOp start*/tmp.nelem = nfirstpos[-1/*case comp end*//*binOp end*/];
 /*compound start*//*binOp start*/tmp.elems = /*compound end*//*binOp end*/firstpos;
 /*compound start*//*binOp start*/pos = /*binOp start*/lastpos + nlastpos[-1/*compound end*//*binOp end*//*binOp end*/];
 for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < nlastpos[-2/*binOp end*/]; ++j)
   {
     merge(&tmp, &d->follows[pos[j].strchr], &merged);
     if (/*binOp start*/(/*binOp start*/merged.nelem - /*binOp end*/1) >= (nalloc[pos[j].strchr]/*binOp end*/)) { while (/*binOp start*/(/*binOp start*/merged.nelem - /*binOp end*/1) >= (nalloc[pos[j].strchr]/*binOp end*/)) /*binOp start*/(nalloc[pos[j].strchr]) *= /*binOp end*/2; (/*binOp start*/(d->follows[pos[j].strchr].elems) = (position *) xrealloc_1((ptr_t) (d->follows[pos[j].strchr].elems), /*binOp start*/(nalloc[pos[j].strchr]) * sizeof (position/*binOp end*/)/*binOp end*/)); };

     copy(&merged, &d->follows[pos[j].strchr]);
   }



 if (nullable[-2])
   /*binOp start*/nfirstpos[-2] += nfirstpos[-1/*binOp end*/];
 else
   /*binOp start*/firstpos += nfirstpos[-1/*binOp end*/];
 --nfirstpos;



 if (nullable[-1])
   /*binOp start*/nlastpos[-2] += nlastpos[-1/*binOp end*/];
 else
   {
     /*compound start*//*binOp start*/pos = /*binOp start*/lastpos + nlastpos[-2/*compound end*//*binOp end*//*binOp end*/];
     for (/*binOp start*/j = /*binOp start*/nlastpos[-1] - /*binOp end*//*binOp end*/1; /*binOp start*/j >= /*binOp end*/0; --j)
       /*binOp start*/pos[j] = lastpos[j/*binOp end*/];
     /*assign start*//*binOp start*/lastpos += nlastpos[-2/*assign end*//*binOp end*/];
     /*compound start*//*binOp start*/nlastpos[-2] = nlastpos[-1/*compound end*//*binOp end*/];
   }
 --nlastpos;


 /*compound start*//*binOp start*/nullable[-2] = /*binOp start*/nullable[-1] && nullable[-2/*compound end*//*binOp end*//*binOp end*/];
 --nullable;
 break;

      case OR:
      case ORTOP:

 /*case assign start*//*binOp start*/nfirstpos[-2] += nfirstpos[-1/*binOp end*/];
 --nfirstpos;


 /*assign start*//*binOp start*/nlastpos[-2] += nlastpos[-1/*assign end*//*binOp end*/];
 --nlastpos;


 /*compound start*//*binOp start*/nullable[-2] = /*binOp start*/nullable[-1] || nullable[-2/*compound end*//*binOp end*//*binOp end*/];
 --nullable;
 break;

      default:





 /*case comp start*//*binOp start*/*nullable++ = /*binOp start*/d->tokens[i] == /*case comp end*//*binOp end*//*binOp end*/BACKREF;


 /*compound start*//*binOp start*/*nfirstpos++ = /*binOp start*/*nlastpos++ = /*compound end*//*binOp end*//*binOp end*/1;
 /*compound start*//*binOp start*/--firstpos, --/*compound end*//*binOp end*/lastpos;
 /*compound start*//*binOp start*/firstpos->strchr = /*binOp start*/lastpos->strchr = /*compound end*//*binOp end*//*binOp end*/i;
 /*compound start*//*binOp start*/firstpos->constraint = /*binOp start*/lastpos->constraint = /*compound end*//*binOp end*//*binOp end*/0xff;


 /*compound start*//*binOp start*/nalloc[i] = /*compound end*//*binOp end*/1;
 (/*binOp start*/(d->follows[i].elems) = (position *) xmalloc_1(/*binOp start*/(nalloc[i]) * sizeof (position/*binOp end*/)/*binOp end*/));
 break;
      }
# 7986 "target/grep.c"
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/tindex; ++i)
    if (/*binOp start*//*binOp start*//*binOp start*/d->tokens[i] < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/) || /*binOp start*/d->tokens[i] == /*binOp end*//*binOp end*/BACKREF
 || /*binOp start*/d->tokens[i] >= /*binOp end*//*binOp end*/CSET)
      {
# 8001 "target/grep.c"
 copy(&d->follows[i], &merged);
 epsclosure(&merged, d);
 if (/*binOp start*/d->follows[i].nelem < merged./*binOp end*/nelem)
   (/*binOp start*/(d->follows[i].elems) = (position *) xrealloc_1((ptr_t) (d->follows[i].elems), /*binOp start*/(merged.nelem) * sizeof (position/*binOp end*/)/*binOp end*/));
 copy(&merged, &d->follows[i]);
      }



  /*compound start*//*binOp start*/merged.nelem = /*compound end*//*binOp end*/0;
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < nfirstpos[-1/*binOp end*/]; ++i)
    insert(firstpos[i], &merged);
  epsclosure(&merged, d);


  /*compound start*//*binOp start*/wants_newline = /*compound end*//*binOp end*/0;
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < merged./*binOp end*/nelem; ++i)
    if ((/*binOp start*//*binOp start*/(/*binOp start*/(merged.elems[i].constraint) & /*binOp end*/0xc0) >> /*binOp end*/2 != (/*binOp start*/(merged.elems[i].constraint) & /*binOp end*/0x30/*binOp end*/)))
      /*binOp start*/wants_newline = /*binOp end*/1;


  /*compound start*//*binOp start*/d->salloc = /*compound end*//*binOp end*/1;
  /*compound start*//*binOp start*/d->sindex = /*compound end*//*binOp end*/0;
  (/*binOp start*/(d->states) = (dfa_state *) xmalloc_1(/*binOp start*/(d->salloc) * sizeof (dfa_state/*binOp end*/)/*binOp end*/));
  state_index(d, &merged, wants_newline, 0);

  free(o_nullable);
  free(o_nfirst);
  free(o_firstpos);
  free(o_nlast);
  free(o_lastpos);
  free(nalloc);
  free(merged.elems);
}
# 8066 "target/grep.c"
void
dfastate(s, d, trans)
     int s;
     struct dfa *d;
     int trans[];
{
  position_set grps[(/*binOp start*/1 << /*binOp end*/8)];
  charclass labels[(/*binOp start*/1 << /*binOp end*/8)];
  int ngrps = 0;
  position pos;
  charclass matches;
  int matchesf;
  charclass intersect;
  int intersectf;
  charclass leftovers;
  int leftoversf;
  static charclass letters;
  static charclass newline;
  position_set follows;
  position_set tmp;
  int state;
  int wants_newline;
  int state_newline;
  int wants_letter;
  int state_letter;
  static initialized;
  int i, j, k;


  if (! initialized)
    {
      /*compound start*//*binOp start*/initialized = /*compound end*//*binOp end*/1;
      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); ++i)
 if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)))
   setbit(i, letters);
      setbit('\n', newline);
    }

  zeroset(matches);

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->states[s].elems./*binOp end*/nelem; ++i)
    {
      /*compound start*//*binOp start*/pos = d->states[s].elems.elems[i/*compound end*//*binOp end*/];
      if (/*binOp start*//*binOp start*/d->tokens[pos.strchr] >= /*binOp end*/0 && /*binOp start*/d->tokens[pos.strchr] < (/*binOp start*/1 << /*binOp end*/8/*binOp end*//*binOp end*/))
 setbit(d->tokens[pos.strchr], matches);
      else if (/*binOp start*/d->tokens[pos.strchr] >= /*binOp end*/CSET)
 copyset(d->charclasses[/*binOp start*/d->tokens[pos.strchr] - /*binOp end*/CSET], matches);
      else
 continue;



      if (/*binOp start*/pos.constraint != /*binOp end*/0xFF)
 {
   if (! (/*binOp start*/(pos.constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((d->states[s].newline) ? 2 : 0) + ((1) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)))

     clrbit('\n', matches);
   if (! (/*binOp start*/(pos.constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((d->states[s].newline) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)))

     for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++j)
       /*binOp start*/matches[j] &= newline[j/*binOp end*/];
   if (! (/*binOp start*/(pos.constraint) & /*binOp start*/1 << (/*binOp start*/((d->states[s].letter) ? 2 : 0) + ((1) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)))

     for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++j)
       /*binOp start*/matches[j] &= ~letters[j/*binOp end*/];
   if (! (/*binOp start*/(pos.constraint) & /*binOp start*/1 << (/*binOp start*/((d->states[s].letter) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)))

     for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++j)
       /*binOp start*/matches[j] &= letters[j/*binOp end*/];


   for (/*binOp start*/j = /*binOp end*/0; /*binOp start*//*binOp start*/j < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/) && !matches[j/*binOp end*/]; ++j)
     ;
   if (/*binOp start*/j == (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/))
     continue;
 }

      for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < /*binOp end*/ngrps; ++j)
 {



   if (/*binOp start*//*binOp start*//*binOp start*/d->tokens[pos.strchr] >= /*binOp end*/0 && /*binOp start*/d->tokens[pos.strchr] < (/*binOp start*/1 << /*binOp end*/8/*binOp end*//*binOp end*/)
       && !tstbit(d->tokens[pos.strchr], labels[j]/*binOp end*/))
     continue;



   /*compound start*//*binOp start*/intersectf = /*compound end*//*binOp end*/0;
   for (/*binOp start*/k = /*binOp end*/0; /*binOp start*/k < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++k)
     (/*binOp start*/intersect[k] = /*binOp start*/matches[k] & labels[j][k/*binOp end*//*binOp end*/]) ? /*binOp start*/intersectf = /*binOp end*/1 : 0;
   if (! intersectf)
     continue;


   /*compound start*//*binOp start*/leftoversf = /*binOp start*/matchesf = /*compound end*//*binOp end*//*binOp end*/0;
   for (/*binOp start*/k = /*binOp end*/0; /*binOp start*/k < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++k)
     {

       int match = matches[k], label = labels[j][k];

       (/*binOp start*/leftovers[k] = /*binOp start*/~match & /*binOp end*//*binOp end*/label) ? /*binOp start*/leftoversf = /*binOp end*/1 : 0;
       (/*binOp start*/matches[k] = /*binOp start*/match & ~/*binOp end*//*binOp end*/label) ? /*binOp start*/matchesf = /*binOp end*/1 : 0;
     }


   if (leftoversf)
     {
       copyset(leftovers, labels[ngrps]);
       copyset(intersect, labels[j]);
       (/*binOp start*/(grps[ngrps].elems) = (position *) xmalloc_1(/*binOp start*/(d->nleaves) * sizeof (position/*binOp end*/)/*binOp end*/));
       copy(&grps[j], &grps[ngrps]);
       ++ngrps;
     }



   /*compound start*//*binOp start*/grps[j].elems[grps[j].nelem++] = /*compound end*//*binOp end*/pos;



   if (! matchesf)
     break;
 }



      if (/*binOp start*/j == /*binOp end*/ngrps)
 {
   copyset(matches, labels[ngrps]);
   zeroset(matches);
   (/*binOp start*/(grps[ngrps].elems) = (position *) xmalloc_1(/*binOp start*/(d->nleaves) * sizeof (position/*binOp end*/)/*binOp end*/));
   /*compound start*//*binOp start*/grps[ngrps].nelem = /*compound end*//*binOp end*/1;
   /*compound start*//*binOp start*/grps[ngrps].elems[0] = /*compound end*//*binOp end*/pos;
   ++ngrps;
 }
    }

  (/*binOp start*/(follows.elems) = (position *) xmalloc_1(/*binOp start*/(d->nleaves) * sizeof (position/*binOp end*/)/*binOp end*/));
  (/*binOp start*/(tmp.elems) = (position *) xmalloc_1(/*binOp start*/(d->nleaves) * sizeof (position/*binOp end*/)/*binOp end*/));




  if (d->searchflag)
    {
      /*compound start*//*binOp start*/wants_newline = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/wants_letter = /*compound end*//*binOp end*/0;
      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->states[0].elems./*binOp end*/nelem; ++i)
 {
   if ((/*binOp start*//*binOp start*/(/*binOp start*/(d->states[0].elems.elems[i].constraint) & /*binOp end*/0xc0) >> /*binOp end*/2 != (/*binOp start*/(d->states[0].elems.elems[i].constraint) & /*binOp end*/0x30/*binOp end*/)))
     /*binOp start*/wants_newline = /*binOp end*/1;
   if ((/*binOp start*//*binOp start*/(/*binOp start*/(d->states[0].elems.elems[i].constraint) & /*binOp end*/0x0c) >> /*binOp end*/2 != (/*binOp start*/(d->states[0].elems.elems[i].constraint) & /*binOp end*/0x03/*binOp end*/)))
     /*binOp start*/wants_letter = /*binOp end*/1;
 }
      copy(&d->states[0].elems, &follows);
      /*compound start*//*binOp start*/state = state_index(d, &follows, 0, 0/*compound end*//*binOp end*/);
      if (wants_newline)
 /*binOp start*/state_newline = state_index(d, &follows, 1, 0/*binOp end*/);
      else
 /*binOp start*/state_newline = /*binOp end*/state;
      if (wants_letter)
 /*binOp start*/state_letter = state_index(d, &follows, 0, 1/*binOp end*/);
      else
 /*binOp start*/state_letter = /*binOp end*/state;
      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); ++i)
 if (/*binOp start*/i == /*binOp end*/'\n')
   /*binOp start*/trans[i] = /*binOp end*/state_newline;
 else if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)))
   /*binOp start*/trans[i] = /*binOp end*/state_letter;
 else
   /*binOp start*/trans[i] = /*binOp end*/state;
    }
  else
    for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); ++i)
      /*binOp start*/trans[i] = -/*binOp end*/1;

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp end*/ngrps; ++i)
    {
      /*compound start*//*binOp start*/follows.nelem = /*compound end*//*binOp end*/0;



      for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < grps[i]./*binOp end*/nelem; ++j)
 for (/*binOp start*/k = /*binOp end*/0; /*binOp start*/k < d->follows[grps[i].elems[j].strchr]./*binOp end*/nelem; ++k)
   insert(d->follows[grps[i].elems[j].strchr].elems[k], &follows);



      if (d->searchflag)
 for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < d->states[0].elems./*binOp end*/nelem; ++j)
   insert(d->states[0].elems.elems[j], &follows);


      /*compound start*//*binOp start*/wants_newline = /*compound end*//*binOp end*/0;
      if (tstbit('\n', labels[i]))
 for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < follows./*binOp end*/nelem; ++j)
   if ((/*binOp start*//*binOp start*/(/*binOp start*/(follows.elems[j].constraint) & /*binOp end*/0xc0) >> /*binOp end*/2 != (/*binOp start*/(follows.elems[j].constraint) & /*binOp end*/0x30/*binOp end*/)))
     /*binOp start*/wants_newline = /*binOp end*/1;

      /*compound start*//*binOp start*/wants_letter = /*compound end*//*binOp end*/0;
      for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++j)
 if (/*binOp start*/labels[i][j] & letters[j/*binOp end*/])
   break;
      if (/*binOp start*/j < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/))
 for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < follows./*binOp end*/nelem; ++j)
   if ((/*binOp start*//*binOp start*/(/*binOp start*/(follows.elems[j].constraint) & /*binOp end*/0x0c) >> /*binOp end*/2 != (/*binOp start*/(follows.elems[j].constraint) & /*binOp end*/0x03/*binOp end*/)))
     /*binOp start*/wants_letter = /*binOp end*/1;


      /*compound start*//*binOp start*/state = state_index(d, &follows, 0, 0/*compound end*//*binOp end*/);
      if (wants_newline)
 /*binOp start*/state_newline = state_index(d, &follows, 1, 0/*binOp end*/);
      else
 /*binOp start*/state_newline = /*binOp end*/state;
      if (wants_letter)
 /*binOp start*/state_letter = state_index(d, &follows, 0, 1/*binOp end*/);
      else
 /*binOp start*/state_letter = /*binOp end*/state;


      for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < (/*binOp start*/(/*binOp start*//*binOp start*/(/*binOp start*/1 << /*binOp end*/8) + (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) - /*binOp end*/1) / (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/)/*binOp end*/); ++j)
 for (/*binOp start*/k = /*binOp end*/0; /*binOp start*/k < (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/); ++k)
   if (/*binOp start*/labels[i][j] & /*binOp start*/1 << /*binOp end*//*binOp end*/k)
     {
       int c = /*binOp start*//*binOp start*/j * (/*binOp start*/8 * sizeof (int/*binOp end*/)/*binOp end*/) + /*binOp end*/k;

       if (/*binOp start*/c == /*binOp end*/'\n')
  /*binOp start*/trans[c] = /*binOp end*/state_newline;
       else if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)))
  /*binOp start*/trans[c] = /*binOp end*/state_letter;
       else if (/*binOp start*/c < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/))
  /*binOp start*/trans[c] = /*binOp end*/state;
     }
    }

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp end*/ngrps; ++i)
    free(grps[i].elems);
  free(follows.elems);
  free(tmp.elems);
}
# 8315 "target/grep.c"
static void
build_state(s, d)
     int s;
     struct dfa *d;
{
  int *trans;
  int i;





  if (/*binOp start*/d->trcount >= /*binOp end*/1024)
    {
      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/tralloc; ++i)
 if (d->trans[i])
   {
     free((ptr_t) d->trans[i]);
     /*compound start*//*binOp start*/d->trans[i] = ((void *)0/*compound end*//*binOp end*/);
   }
 else if (d->fails[i])
   {
     free((ptr_t) d->fails[i]);
     /*compound start*//*binOp start*/d->fails[i] = ((void *)0/*compound end*//*binOp end*/);
   }
      /*compound start*//*binOp start*/d->trcount = /*compound end*//*binOp end*/0;
    }

  ++d->trcount;


  /*compound start*//*binOp start*/d->success[s] = /*compound end*//*binOp end*/0;
  if ((/*binOp start*/(/*binOp start*/((*d).states[s].constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((d->states[s].newline) ? 2 : 0) + ((1) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)) && (/*binOp start*/((*d).states[s].constraint) & /*binOp start*/1 << (/*binOp start*/((d->states[s].letter) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)/*binOp end*/)))

    /*binOp start*/d->success[s] |= /*binOp end*/4;
  if ((/*binOp start*/(/*binOp start*/((*d).states[s].constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((d->states[s].newline) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)) && (/*binOp start*/((*d).states[s].constraint) & /*binOp start*/1 << (/*binOp start*/((d->states[s].letter) ? 2 : 0) + ((1) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)/*binOp end*/)))

    /*binOp start*/d->success[s] |= /*binOp end*/2;
  if ((/*binOp start*/(/*binOp start*/((*d).states[s].constraint) & /*binOp start*/1 << (/*binOp start*//*binOp start*/((d->states[s].newline) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/) + /*binOp end*/4/*binOp end*//*binOp end*/)) && (/*binOp start*/((*d).states[s].constraint) & /*binOp start*/1 << (/*binOp start*/((d->states[s].letter) ? 2 : 0) + ((0) ? 1 : 0/*binOp end*/)/*binOp end*//*binOp end*/)/*binOp end*/)))

    /*binOp start*/d->success[s] |= /*binOp end*/1;

  (/*binOp start*/(trans) = (int *) xmalloc_1(/*binOp start*/((/*binOp start*/1 << /*binOp end*/8)) * sizeof (int/*binOp end*/)/*binOp end*/));
  dfastate(s, d, trans);




  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); ++i)
    if (/*binOp start*/trans[i] >= d->/*binOp end*/tralloc)
      {
 int oldalloc = d->tralloc;

 while (/*binOp start*/trans[i] >= d->/*binOp end*/tralloc)
   /*binOp start*/d->tralloc *= /*binOp end*/2;
 (/*binOp start*/(d->realtrans) = (int * *) xrealloc_1((ptr_t) (d->realtrans), /*binOp start*/(/*binOp start*/d->tralloc + /*binOp end*/1) * sizeof (int */*binOp end*/)/*binOp end*/));
 /*compound start*//*binOp start*/d->trans = /*binOp start*/d->realtrans + /*compound end*//*binOp end*//*binOp end*/1;
 (/*binOp start*/(d->fails) = (int * *) xrealloc_1((ptr_t) (d->fails), /*binOp start*/(d->tralloc) * sizeof (int */*binOp end*/)/*binOp end*/));
 (/*binOp start*/(d->success) = (int *) xrealloc_1((ptr_t) (d->success), /*binOp start*/(d->tralloc) * sizeof (int/*binOp end*/)/*binOp end*/));
 (/*binOp start*/(d->newlines) = (int *) xrealloc_1((ptr_t) (d->newlines), /*binOp start*/(d->tralloc) * sizeof (int/*binOp end*/)/*binOp end*/));
 while (/*binOp start*/oldalloc < d->/*binOp end*/tralloc)
   {
     /*compound start*//*binOp start*/d->trans[oldalloc] = ((void *)0/*compound end*//*binOp end*/);
     /*compound start*//*binOp start*/d->fails[oldalloc++] = ((void *)0/*compound end*//*binOp end*/);
   }
      }



  /*compound start*//*binOp start*/d->newlines[s] = trans['\n'/*compound end*//*binOp end*/];
  /*compound start*//*binOp start*/trans['\n'] = -/*compound end*//*binOp end*/1;

  if (((*d).states[s].constraint))
    /*binOp start*/d->fails[s] = /*binOp end*/trans;
  else
    /*binOp start*/d->trans[s] = /*binOp end*/trans;
}

static void
build_state_zero(d)
     struct dfa *d;
{
  /*compound start*//*binOp start*/d->tralloc = /*compound end*//*binOp end*/1;
  /*compound start*//*binOp start*/d->trcount = /*compound end*//*binOp end*/0;
  (/*binOp start*/(d->realtrans) = (int * *) xcalloc((/*binOp start*/d->tralloc + /*binOp end*/1), sizeof (int *)/*binOp end*/));
  /*compound start*//*binOp start*/d->trans = /*binOp start*/d->realtrans + /*compound end*//*binOp end*//*binOp end*/1;
  (/*binOp start*/(d->fails) = (int * *) xcalloc((d->tralloc), sizeof (int *)/*binOp end*/));
  (/*binOp start*/(d->success) = (int *) xmalloc_1(/*binOp start*/(d->tralloc) * sizeof (int/*binOp end*/)/*binOp end*/));
  (/*binOp start*/(d->newlines) = (int *) xmalloc_1(/*binOp start*/(d->tralloc) * sizeof (int/*binOp end*/)/*binOp end*/));
  build_state(0, d);
}
# 8420 "target/grep.c"
char *
dfaexec(d, begin, end, newline, count, backref)
     struct dfa *d;
     char *begin;
     char *end;
     int newline;
     int *count;
     int *backref;
{
  register s, s1, tmp;
  register unsigned char *p;
  register **trans, *t;

  static sbit[(/*binOp start*/1 << /*binOp end*/8)];
  static sbit_init;

  if (! sbit_init)
    {
      int i;

      /*compound start*//*binOp start*/sbit_init = /*compound end*//*binOp end*/1;
      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/1 << /*binOp end*/8/*binOp end*/); ++i)
 if (/*binOp start*/i == /*binOp end*/'\n')
   /*binOp start*/sbit[i] = /*binOp end*/4;
 else if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)))
   /*binOp start*/sbit[i] = /*binOp end*/2;
 else
   /*binOp start*/sbit[i] = /*binOp end*/1;
    }

  if (! d->tralloc)
    build_state_zero(d);

  /*compound start*//*binOp start*/s = /*binOp start*/s1 = /*compound end*//*binOp end*//*binOp end*/0;
  /*compound start*//*binOp start*/p = (unsigned char *) /*compound end*//*binOp end*/begin;
  /*compound start*//*binOp start*/trans = d->/*compound end*//*binOp end*/trans;
  /*compound start*//*binOp start*/*end = /*compound end*//*binOp end*/'\n';

  for (;;)
    {

      if (/*binOp start*/(/*binOp start*/t = trans[s/*binOp end*/]) != /*binOp end*/0)
 do
   {
     /*compound start*//*binOp start*/s1 = t[*p++/*compound end*//*binOp end*/];
     if (! (/*binOp start*/t = trans[s1/*binOp end*/]))
       goto last_was_s;
     /*compound start*//*binOp start*/s = t[*p++/*compound end*//*binOp end*/];
   }
        while (/*binOp start*/(/*binOp start*/t = trans[s/*binOp end*/]) != /*binOp end*/0);
      goto last_was_s1;
    last_was_s:
      /*binOp start*//*binOp start*//*binOp start*/tmp = /*binOp end*/s, /*binOp start*/s = /*binOp end*//*binOp end*/s1, /*binOp start*/s1 = /*binOp end*//*binOp end*/tmp;
    last_was_s1:

      if (/*binOp start*//*binOp start*//*binOp start*/s >= /*binOp end*/0 && /*binOp start*/p <= (unsigned char *) /*binOp end*//*binOp end*/end && d->fails[s/*binOp end*/])
 {
   if (/*binOp start*/d->success[s] & sbit[*p/*binOp end*/])
     {
       if (backref)
  if (d->states[s].backref)
    /*binOp start*/*backref = /*binOp end*/1;
  else
    /*binOp start*/*backref = /*binOp end*/0;
       return (char *) p;
     }

   /*compound start*//*binOp start*/s1 = /*compound end*//*binOp end*/s;
   /*compound start*//*binOp start*/s = d->fails[s][*p++/*compound end*//*binOp end*/];
   continue;
 }


      if (/*binOp start*//*binOp start*/count && /*binOp start*/(char *) p <= /*binOp end*//*binOp end*/end && /*binOp start*/p[-1] == /*binOp end*//*binOp end*/'\n')
 ++*count;


      if (/*binOp start*/(char *) p > /*binOp end*/end)
 return ((void *)0);

      if (/*binOp start*/s >= /*binOp end*/0)
 {
   build_state(s, d);
   /*compound start*//*binOp start*/trans = d->/*compound end*//*binOp end*/trans;
   continue;
 }

      if (/*binOp start*//*binOp start*/p[-1] == /*binOp end*/'\n' && /*binOp end*/newline)
 {
   /*compound start*//*binOp start*/s = d->newlines[s1/*compound end*//*binOp end*/];
   continue;
 }

      /*compound start*//*binOp start*/s = /*compound end*//*binOp end*/0;
    }
}



void
dfainit(d)
     struct dfa *d;
{
  /*compound start*//*binOp start*/d->calloc = /*compound end*//*binOp end*/1;
  (/*binOp start*/(d->charclasses) = (charclass *) xmalloc_1(/*binOp start*/(d->calloc) * sizeof (charclass/*binOp end*/)/*binOp end*/));
  /*compound start*//*binOp start*/d->cindex = /*compound end*//*binOp end*/0;

  /*compound start*//*binOp start*/d->talloc = /*compound end*//*binOp end*/1;
  (/*binOp start*/(d->tokens) = (token *) xmalloc_1(/*binOp start*/(d->talloc) * sizeof (token/*binOp end*/)/*binOp end*/));
  /*compound start*//*binOp start*/d->tindex = /*binOp start*/d->depth = /*binOp start*/d->nleaves = /*binOp start*/d->nregexps = /*compound end*//*binOp end*//*binOp end*//*binOp end*//*binOp end*/0;

  /*compound start*//*binOp start*/d->searchflag = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/d->tralloc = /*compound end*//*binOp end*/0;

  /*compound start*//*binOp start*/d->musts = /*compound end*//*binOp end*/0;
}


void
dfacomp(s, len, d, searchflag)
     char *s;
     size_t len;
     struct dfa *d;
     int searchflag;
{
  if (case_fold)
    {
      char *copy;
      int i;

      /*compound start*//*binOp start*/copy = malloc(len/*compound end*//*binOp end*/);
      if (!copy)
 dfaerror("out of memory");


      /*compound start*//*binOp start*/case_fold = /*compound end*//*binOp end*/0;
      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp end*/len; ++i)
 if ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((s[i]))] & (unsigned short int) /*binOp end*/_ISupper/*binOp end*/)))
   /*binOp start*/copy[i] = tolower(s[i]/*binOp end*/);
 else
   /*binOp start*/copy[i] = s[i/*binOp end*/];

      dfainit(d);
      dfaparse(copy, len, d);
      free(copy);
      dfamust(d);
      /*compound start*//*binOp start*/d->cindex = /*binOp start*/d->tindex = /*binOp start*/d->depth = /*binOp start*/d->nleaves = /*binOp start*/d->nregexps = /*compound end*//*binOp end*//*binOp end*//*binOp end*//*binOp end*//*binOp end*/0;
      /*compound start*//*binOp start*/case_fold = /*compound end*//*binOp end*/1;
      dfaparse(s, len, d);
      dfaanalyze(d, searchflag);
    }
  else
    {
        dfainit(d);
        dfaparse(s, len, d);
 dfamust(d);
        dfaanalyze(d, searchflag);
    }
}


void
dfafree(d)
     struct dfa *d;
{
  int i;
  struct dfamust *dm, *ndm;

  free((ptr_t) d->charclasses);
  free((ptr_t) d->tokens);
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/sindex; ++i)
    free((ptr_t) d->states[i].elems.elems);
  free((ptr_t) d->states);
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/tindex; ++i)
    if (d->follows[i].elems)
      free((ptr_t) d->follows[i].elems);
  free((ptr_t) d->follows);
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < d->/*binOp end*/tralloc; ++i)
    if (d->trans[i])
      free((ptr_t) d->trans[i]);
    else if (d->fails[i])
      free((ptr_t) d->fails[i]);
  free((ptr_t) d->realtrans);
  free((ptr_t) d->fails);
  free((ptr_t) d->newlines);
  for (/*binOp start*/dm = d->/*binOp end*/musts; dm; /*binOp start*/dm = /*binOp end*/ndm)
    {
      /*compound start*//*binOp start*/ndm = dm->/*compound end*//*binOp end*/next;
      free(dm->must);
      free((ptr_t) dm);
    }
}
# 8693 "target/grep.c"
static char *
icatalloc(old, new)
     char *old;
     char *new;
{
  char *result;
  int oldsize, newsize;

  /*compound start*//*binOp start*/newsize = (/*binOp start*/new == ((void *)0/*binOp end*/)) ? 0 : strlen(new/*compound end*//*binOp end*/);
  if (/*binOp start*/old == ((void *)0/*binOp end*/))
    /*binOp start*/oldsize = /*binOp end*/0;
  else if (/*binOp start*/newsize == /*binOp end*/0)
    return old;
  else /*binOp start*/oldsize = strlen(old/*binOp end*/);
  if (/*binOp start*/old == ((void *)0/*binOp end*/))
    /*binOp start*/result = (char *) malloc(/*binOp start*/newsize + /*binOp end*/1/*binOp end*/);
  else
    /*binOp start*/result = (char *) realloc((void *) old, /*binOp start*//*binOp start*/oldsize + /*binOp end*/newsize + /*binOp end*/1/*binOp end*/);
  if (/*binOp start*//*binOp start*/result != ((void *)0/*binOp end*/) && /*binOp start*/new != ((void *)0/*binOp end*//*binOp end*/))
    (void) strcpy(/*binOp start*/result + /*binOp end*/oldsize, new);
  return result;
}

static char *
icpyalloc(string)
     char *string;
{
  return icatalloc((char *) ((void *)0), string);
}

static char *
istrstr(lookin, lookfor)
     char *lookin;
     char *lookfor;
{
  char *cp;
  int len;

  /*compound start*//*binOp start*/len = strlen(lookfor/*compound end*//*binOp end*/);
  for (/*binOp start*/cp = /*binOp end*/lookin; /*binOp start*/*cp != /*binOp end*/'\0'; ++cp)
    if (/*binOp start*/strncmp(cp, lookfor, len) == /*binOp end*/0)
      return cp;
  return ((void *)0);
}

static void
ifree(cp)
     char *cp;
{
  if (/*binOp start*/cp != ((void *)0/*binOp end*/))
    free(cp);
}

static void
freelist(cpp)
     char **cpp;
{
  int i;

  if (/*binOp start*/cpp == ((void *)0/*binOp end*/))
    return;
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/cpp[i] != ((void *)0/*binOp end*/); ++i)
    {
      free(cpp[i]);
      /*compound start*//*binOp start*/cpp[i] = ((void *)0/*compound end*//*binOp end*/);
    }
}

static char **
enlist(cpp, new, len)
     char **cpp;
     char *new;
     int len;
{
  int i, j;

  if (/*binOp start*/cpp == ((void *)0/*binOp end*/))
    return ((void *)0);
  if (/*binOp start*/(/*binOp start*/new = icpyalloc(new/*binOp end*/)) == ((void *)0/*binOp end*/))
    {
      freelist(cpp);
      return ((void *)0);
    }
  /*compound start*//*binOp start*/new[len] = /*compound end*//*binOp end*/'\0';

  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/cpp[i] != ((void *)0/*binOp end*/); ++i)
    if (/*binOp start*/istrstr(cpp[i], new) != ((void *)0/*binOp end*/))
      {
 free(new);
 return cpp;
      }

  /*compound start*//*binOp start*/j = /*compound end*//*binOp end*/0;
  while (/*binOp start*/cpp[j] != ((void *)0/*binOp end*/))
    if (/*binOp start*/istrstr(new, cpp[j]) == ((void *)0/*binOp end*/))
      ++j;
    else
      {
 free(cpp[j]);
 if (/*binOp start*/--i == /*binOp end*/j)
   break;
 /*compound start*//*binOp start*/cpp[j] = cpp[i/*compound end*//*binOp end*/];
 /*compound start*//*binOp start*/cpp[i] = ((void *)0/*compound end*//*binOp end*/);
      }

  /*compound start*//*binOp start*/cpp = (char **) realloc((char *) cpp, /*binOp start*/(/*binOp start*/i + /*binOp end*/2) * sizeof */*binOp end*/cpp/*compound end*//*binOp end*/);
  if (/*binOp start*/cpp == ((void *)0/*binOp end*/))
    return ((void *)0);
  /*compound start*//*binOp start*/cpp[i] = /*compound end*//*binOp end*/new;
  /*compound start*//*binOp start*/cpp[/*binOp start*/i + /*binOp end*/1] = ((void *)0/*compound end*//*binOp end*/);
  return cpp;
}




static char **
comsubs(left, right)
     char *left;
     char *right;
{
  char **cpp;
  char *lcp;
  char *rcp;
  int i, len;

  if (/*binOp start*//*binOp start*/left == ((void *)0/*binOp end*/) || /*binOp start*/right == ((void *)0/*binOp end*//*binOp end*/))
    return ((void *)0);
  /*compound start*//*binOp start*/cpp = (char **) malloc(sizeof *cpp/*compound end*//*binOp end*/);
  if (/*binOp start*/cpp == ((void *)0/*binOp end*/))
    return ((void *)0);
  /*compound start*//*binOp start*/cpp[0] = ((void *)0/*compound end*//*binOp end*/);
  for (/*binOp start*/lcp = /*binOp end*/left; /*binOp start*/*lcp != /*binOp end*/'\0'; ++lcp)
    {
      /*compound start*//*binOp start*/len = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/rcp = strchr(right, *lcp/*compound end*//*binOp end*/);
      while (/*binOp start*/rcp != ((void *)0/*binOp end*/))
 {
   for (/*binOp start*/i = /*binOp end*/1; /*binOp start*//*binOp start*/lcp[i] != /*binOp end*/'\0' && /*binOp start*/lcp[i] == rcp[i/*binOp end*//*binOp end*/]; ++i)
     ;
   if (/*binOp start*/i > /*binOp end*/len)
     /*binOp start*/len = /*binOp end*/i;
   /*compound start*//*binOp start*/rcp = strchr(/*binOp start*/rcp + /*binOp end*/1, *lcp/*compound end*//*binOp end*/);
 }
      if (/*binOp start*/len == /*binOp end*/0)
 continue;
      if (/*binOp start*/(/*binOp start*/cpp = enlist(cpp, lcp, len/*binOp end*/)) == ((void *)0/*binOp end*/))
 break;
    }
  return cpp;
}

static char **
addlists(old, new)
char **old;
char **new;
{
  int i;

  if (/*binOp start*//*binOp start*/old == ((void *)0/*binOp end*/) || /*binOp start*/new == ((void *)0/*binOp end*//*binOp end*/))
    return ((void *)0);
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/new[i] != ((void *)0/*binOp end*/); ++i)
    {
      /*compound start*//*binOp start*/old = enlist(old, new[i], strlen(new[i])/*compound end*//*binOp end*/);
      if (/*binOp start*/old == ((void *)0/*binOp end*/))
 break;
    }
  return old;
}



static char **
inboth(left, right)
     char **left;
     char **right;
{
  char **both;
  char **temp;
  int lnum, rnum;

  if (/*binOp start*//*binOp start*/left == ((void *)0/*binOp end*/) || /*binOp start*/right == ((void *)0/*binOp end*//*binOp end*/))
    return ((void *)0);
  /*compound start*//*binOp start*/both = (char **) malloc(sizeof *both/*compound end*//*binOp end*/);
  if (/*binOp start*/both == ((void *)0/*binOp end*/))
    return ((void *)0);
  /*compound start*//*binOp start*/both[0] = ((void *)0/*compound end*//*binOp end*/);
  for (/*binOp start*/lnum = /*binOp end*/0; /*binOp start*/left[lnum] != ((void *)0/*binOp end*/); ++lnum)
    {
      for (/*binOp start*/rnum = /*binOp end*/0; /*binOp start*/right[rnum] != ((void *)0/*binOp end*/); ++rnum)
 {
   /*compound start*//*binOp start*/temp = comsubs(left[lnum], right[rnum]/*compound end*//*binOp end*/);
   if (/*binOp start*/temp == ((void *)0/*binOp end*/))
     {
       freelist(both);
       return ((void *)0);
     }
   /*compound start*//*binOp start*/both = addlists(both, temp/*compound end*//*binOp end*/);
   freelist(temp);
   if (/*binOp start*/both == ((void *)0/*binOp end*/))
     return ((void *)0);
 }
    }
  return both;
}

typedef struct
{
  char **in;
  char *left;
  char *right;
  char *is;
} must;

static void
resetmust(mp)
must *mp;
{
  /*compound start*//*binOp start*/mp->left[0] = /*binOp start*/mp->right[0] = /*binOp start*/mp->is[0] = /*compound end*//*binOp end*//*binOp end*//*binOp end*/'\0';
  freelist(mp->in);
}

static void
dfamust(dfa)
struct dfa *dfa;
{
  must *musts;
  must *mp;
  char *result;
  int ri;
  int i;
  int exact;
  token t;
  static must must0;
  struct dfamust *dm;

  /*compound start*//*binOp start*/result = /*compound end*//*binOp end*/"";
  /*compound start*//*binOp start*/exact = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/musts = (must *) malloc(/*binOp start*/(/*binOp start*/dfa->tindex + /*binOp end*/1) * sizeof */*binOp end*/musts/*compound end*//*binOp end*/);
  if (/*binOp start*/musts == ((void *)0/*binOp end*/))
    return;
  /*compound start*//*binOp start*/mp = /*compound end*//*binOp end*/musts;
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i <= dfa->/*binOp end*/tindex; ++i)
    /*binOp start*/mp[i] = /*binOp end*/must0;
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i <= dfa->/*binOp end*/tindex; ++i)
    {
      /*compound start*//*binOp start*/mp[i].in = (char **) malloc(sizeof *mp[i].in/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/mp[i].left = malloc(2/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/mp[i].right = malloc(2/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/mp[i].is = malloc(2/*compound end*//*binOp end*/);
      if (/*binOp start*//*binOp start*//*binOp start*//*binOp start*/mp[i].in == ((void *)0/*binOp end*/) || /*binOp start*/mp[i].left == ((void *)0/*binOp end*//*binOp end*/) ||
   /*binOp start*/mp[i].right == ((void *)0/*binOp end*//*binOp end*/) || /*binOp start*/mp[i].is == ((void *)0/*binOp end*//*binOp end*/))
 goto done;
      /*compound start*//*binOp start*/mp[i].left[0] = /*binOp start*/mp[i].right[0] = /*binOp start*/mp[i].is[0] = /*compound end*//*binOp end*//*binOp end*//*binOp end*/'\0';
      /*compound start*//*binOp start*/mp[i].in[0] = ((void *)0/*compound end*//*binOp end*/);
    }
# 8958 "target/grep.c"
  for (/*binOp start*/ri = /*binOp end*/0; /*binOp start*/ri < dfa->/*binOp end*/tindex; ++ri)
    {
      switch (/*binOp start*/t = dfa->tokens[ri/*binOp end*/])
 {
 case LPAREN:
 case RPAREN:
   goto done;
 case EMPTY:
 case BEGLINE:
 case ENDLINE:
 case BEGWORD:
 case ENDWORD:
 case LIMWORD:
 case NOTLIMWORD:
 case BACKREF:
   resetmust(mp);
   break;
 case STAR:
 case QMARK:
   if (/*binOp start*/mp <= /*binOp end*/musts)
     goto done;
   --mp;
   resetmust(mp);
   break;
 case OR:
 case ORTOP:
   if (/*binOp start*/mp < &musts[2/*binOp end*/])
     goto done;
   {
     char **new;
     must *lmp;
     must *rmp;
     int j, ln, rn, n;

     /*compound start*//*binOp start*/rmp = --/*compound end*//*binOp end*/mp;
     /*compound start*//*binOp start*/lmp = --/*compound end*//*binOp end*/mp;

     if (/*binOp start*/strcmp(lmp->is, rmp->is) != /*binOp end*/0)
       /*binOp start*/lmp->is[0] = /*binOp end*/'\0';

     /*compound start*//*binOp start*/i = /*compound end*//*binOp end*/0;
     while (/*binOp start*//*binOp start*/lmp->left[i] != /*binOp end*/'\0' && /*binOp start*/lmp->left[i] == rmp->left[i/*binOp end*//*binOp end*/])
       ++i;
     /*compound start*//*binOp start*/lmp->left[i] = /*compound end*//*binOp end*/'\0';

     /*compound start*//*binOp start*/ln = strlen(lmp->right/*compound end*//*binOp end*/);
     /*compound start*//*binOp start*/rn = strlen(rmp->right/*compound end*//*binOp end*/);
     /*compound start*//*binOp start*/n = /*compound end*//*binOp end*/ln;
     if (/*binOp start*/n > /*binOp end*/rn)
       /*binOp start*/n = /*binOp end*/rn;
     for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp end*/n; ++i)
       if (/*binOp start*/lmp->right[/*binOp start*//*binOp start*/ln - /*binOp end*/i - /*binOp end*/1] != rmp->right[/*binOp start*//*binOp start*/rn - /*binOp end*/i - /*binOp end*/1/*binOp end*/])
  break;
     for (/*binOp start*/j = /*binOp end*/0; /*binOp start*/j < /*binOp end*/i; ++j)
       /*binOp start*/lmp->right[j] = lmp->right[/*binOp start*/(/*binOp start*/ln - /*binOp end*/i) + /*binOp end*/j/*binOp end*/];
     /*compound start*//*binOp start*/lmp->right[j] = /*compound end*//*binOp end*/'\0';
     /*compound start*//*binOp start*/new = inboth(lmp->in, rmp->in/*compound end*//*binOp end*/);
     if (/*binOp start*/new == ((void *)0/*binOp end*/))
       goto done;
     freelist(lmp->in);
     free((char *) lmp->in);
     /*compound start*//*binOp start*/lmp->in = /*compound end*//*binOp end*/new;
   }
   break;
 case PLUS:
   if (/*binOp start*/mp <= /*binOp end*/musts)
     goto done;
   --mp;
   /*compound start*//*binOp start*/mp->is[0] = /*compound end*//*binOp end*/'\0';
   break;
 case END:
   if (/*binOp start*/mp != &musts[1/*binOp end*/])
     goto done;
   for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/musts[0].in[i] != ((void *)0/*binOp end*/); ++i)
     if (/*binOp start*/strlen(musts[0].in[i]) > strlen(result/*binOp end*/))
       /*binOp start*/result = musts[0].in[i/*binOp end*/];
   if (/*binOp start*/strcmp(result, musts[0].is) == /*binOp end*/0)
     /*binOp start*/exact = /*binOp end*/1;
   goto done;
 case CAT:
   if (/*binOp start*/mp < &musts[2/*binOp end*/])
     goto done;
   {
     must *lmp;
     must *rmp;

     /*compound start*//*binOp start*/rmp = --/*compound end*//*binOp end*/mp;
     /*compound start*//*binOp start*/lmp = --/*compound end*//*binOp end*/mp;



     /*compound start*//*binOp start*/lmp->in = addlists(lmp->in, rmp->in/*compound end*//*binOp end*/);
     if (/*binOp start*/lmp->in == ((void *)0/*binOp end*/))
       goto done;
     if (/*binOp start*//*binOp start*/lmp->right[0] != /*binOp end*/'\0' &&
  /*binOp start*/rmp->left[0] != /*binOp end*//*binOp end*/'\0')
       {
  char *tp;

  /*compound start*//*binOp start*/tp = icpyalloc(lmp->right/*compound end*//*binOp end*/);
  if (/*binOp start*/tp == ((void *)0/*binOp end*/))
    goto done;
  /*compound start*//*binOp start*/tp = icatalloc(tp, rmp->left/*compound end*//*binOp end*/);
  if (/*binOp start*/tp == ((void *)0/*binOp end*/))
    goto done;
  /*compound start*//*binOp start*/lmp->in = enlist(lmp->in, tp,
     strlen(tp)/*compound end*//*binOp end*/);
  free(tp);
  if (/*binOp start*/lmp->in == ((void *)0/*binOp end*/))
    goto done;
       }

     if (/*binOp start*/lmp->is[0] != /*binOp end*/'\0')
       {
  /*compound start*//*binOp start*/lmp->left = icatalloc(lmp->left,
          rmp->left/*compound end*//*binOp end*/);
  if (/*binOp start*/lmp->left == ((void *)0/*binOp end*/))
    goto done;
       }

     if (/*binOp start*/rmp->is[0] == /*binOp end*/'\0')
       /*binOp start*/lmp->right[0] = /*binOp end*/'\0';
     /*compound start*//*binOp start*/lmp->right = icatalloc(lmp->right, rmp->right/*compound end*//*binOp end*/);
     if (/*binOp start*/lmp->right == ((void *)0/*binOp end*/))
       goto done;

     if (/*binOp start*//*binOp start*/lmp->is[0] != /*binOp end*/'\0' && /*binOp start*/rmp->is[0] != /*binOp end*//*binOp end*/'\0')
       {
  /*compound start*//*binOp start*/lmp->is = icatalloc(lmp->is, rmp->is/*compound end*//*binOp end*/);
  if (/*binOp start*/lmp->is == ((void *)0/*binOp end*/))
    goto done;
       }
     else
       /*binOp start*/lmp->is[0] = /*binOp end*/'\0';
   }
   break;
 default:
   if (/*binOp start*/t < /*binOp end*/END)
     {

       goto done;
     }
   else if (/*binOp start*/t == /*binOp end*/'\0')
     {

       goto done;
     }
   else if (/*binOp start*/t >= /*binOp end*/CSET)
     {

       resetmust(mp);
     }
   else
     {

       resetmust(mp);
       /*compound start*//*binOp start*/mp->is[0] = /*binOp start*/mp->left[0] = /*binOp start*/mp->right[0] = /*compound end*//*binOp end*//*binOp end*//*binOp end*/t;
       /*compound start*//*binOp start*/mp->is[1] = /*binOp start*/mp->left[1] = /*binOp start*/mp->right[1] = /*compound end*//*binOp end*//*binOp end*//*binOp end*/'\0';
       /*compound start*//*binOp start*/mp->in = enlist(mp->in, mp->is, 1/*compound end*//*binOp end*/);
       if (/*binOp start*/mp->in == ((void *)0/*binOp end*/))
  goto done;
     }
   break;
 }
# 9132 "target/grep.c"
      ++mp;
    }
 done:
  if (strlen(result))
    {
      /*compound start*//*binOp start*/dm = (struct dfamust *) malloc(sizeof (struct dfamust)/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/dm->exact = /*compound end*//*binOp end*/exact;
      /*compound start*//*binOp start*/dm->must = malloc(/*binOp start*/strlen(result) + /*binOp end*/1/*compound end*//*binOp end*/);
      strcpy(dm->must, result);
      /*compound start*//*binOp start*/dm->next = dfa->/*compound end*//*binOp end*/musts;
      /*compound start*//*binOp start*/dfa->musts = /*compound end*//*binOp end*/dm;
    }
  /*compound start*//*binOp start*/mp = /*compound end*//*binOp end*/musts;
  for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i <= dfa->/*binOp end*/tindex; ++i)
    {
      freelist(mp[i].in);
      ifree((char *) mp[i].in);
      ifree(mp[i].left);
      ifree(mp[i].right);
      ifree(mp[i].is);
    }
  free((char *) mp);
}
# 9187 "target/grep.c"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include-fixed/limits.h" 1 3 4
# 11 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include-fixed/limits.h" 1 3 4
# 122 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 158 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include-fixed/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include-fixed/limits.h" 2 3 4
# 9188 "target/grep.c" 2
# 9228 "target/grep.c"
extern char *xmalloc();



# 1 "target/kwset.h" 1
# 22 "target/kwset.h"
struct kwsmatch
{
  int strchr;
  char *beg[1];
  size_t size[1];
};



typedef void *kwset_t;





extern kwset_t kwsalloc(char *);




extern char *kwsincr(kwset_t, char *, size_t);



extern char *kwsprep(kwset_t);







extern char *kwsexec(kwset_t, char *, size_t, struct kwsmatch *);


extern void kwsfree(kwset_t);
# 9233 "target/grep.c" 2
# 1 "target/obstack.h" 1
# 134 "target/obstack.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 135 "target/obstack.h" 2
# 144 "target/obstack.h"
struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};

struct obstack
{
  long chunk_size;
  struct _obstack_chunk* chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  ptrdiff_t temp;
  int alignment_mask;
  struct _obstack_chunk *(*chunkfun) ();
  void (*freefun) ();
  char *extra_arg;
  unsigned use_extra_arg:1;
  unsigned maybe_empty_object:1;



};




extern void _obstack_newchunk (struct obstack *, int);
extern void _obstack_free (struct obstack *, void *);
extern void _obstack_begin (struct obstack *, int, int,
       void *(*) (), void (*) ());
extern void _obstack_begin_1 (struct obstack *, int, int,
         void *(*) (), void (*) (), void *);
# 191 "target/obstack.h"
void obstack_init (struct obstack *obstack);

void * obstack_alloc (struct obstack *obstack, int size);

void * obstack_copy (struct obstack *obstack, void *address, int size);
void * obstack_copy0 (struct obstack *obstack, void *address, int size);

void obstack_free (struct obstack *obstack, void *block);

void obstack_blank (struct obstack *obstack, int size);

void obstack_grow (struct obstack *obstack, void *data, int size);
void obstack_grow0 (struct obstack *obstack, void *data, int size);

void obstack_1grow (struct obstack *obstack, int data_char);
void obstack_ptr_grow (struct obstack *obstack, void *data);
void obstack_int_grow (struct obstack *obstack, int data);

void * obstack_finish (struct obstack *obstack);

int obstack_object_size (struct obstack *obstack);

int obstack_room (struct obstack *obstack);
void obstack_1grow_fast (struct obstack *obstack, int data_char);
void obstack_ptr_grow_fast (struct obstack *obstack, void *data);
void obstack_int_grow_fast (struct obstack *obstack, int data);
void obstack_blank_fast (struct obstack *obstack, int size);

void * obstack_base (struct obstack *obstack);
void * obstack_next_free (struct obstack *obstack);
int obstack_alignment_mask (struct obstack *obstack);
int obstack_chunk_size (struct obstack *obstack);
# 9234 "target/grep.c" 2






struct tree
{
  struct tree *llink;
  struct tree *rlink;
  struct trie *trie;
  unsigned char label;
  char balance;
};


struct trie
{
  unsigned int accepting;
  struct tree *links;
  struct trie *parent;
  struct trie *next;
  struct trie *fail;
  int depth;
  int shift;
  int maxshift;
};


struct kwset
{
  struct obstack obstack;
  int words;
  struct trie *trie;
  int mind;
  int maxd;
  unsigned char delta[(/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1)];
  struct trie *next[(/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1)];
  char *target;
  int mind2;
  char *trans;
};



kwset_t
kwsalloc(trans)
     char *trans;
{
  struct kwset *kwset;

  /*compound start*//*binOp start*/kwset = (struct kwset *) xmalloc(sizeof (struct kwset)/*compound end*//*binOp end*/);
  if (!kwset)
    return 0;

  _obstack_begin ((&kwset->obstack), 0, 0, (void *(*) ()) xmalloc, (void (*) ()) free);
  /*compound start*//*binOp start*/kwset->words = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->trie
    = (struct trie *) __extension__ ({ struct obstack *__h = (&kwset->obstack); __extension__ ({ struct obstack *__o = (__h); int __len = ((sizeof (struct trie))); ((/*binOp start*//*binOp start*/__o->chunk_limit - __o->/*binOp end*/next_free < /*binOp end*/__len) ? (/*binOp start*/_obstack_newchunk (__o, __len), /*binOp end*/0) : 0); /*assign start*//*binOp start*/__o->next_free += /*assign end*//*binOp end*/__len; (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *value = (void *) __o1->object_base; if (/*binOp start*/__o1->next_free == /*binOp end*/value) /*binOp start*/__o1->maybe_empty_object = /*binOp end*/1; /*compound start*//*binOp start*/__o1->next_free = (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(__o1->next_free) - (char *)/*binOp end*/0)+__o1->/*binOp end*/alignment_mask) & ~ (__o1->alignment_mask/*binOp end*/)) + (char *)/*binOp end*/0/*compound end*//*binOp end*/); ((/*binOp start*//*binOp start*/__o1->next_free - (char *)__o1->/*binOp end*/chunk > /*binOp start*/__o1->chunk_limit - (char *)__o1->/*binOp end*//*binOp end*/chunk) ? (/*binOp start*/__o1->next_free = __o1->/*binOp end*/chunk_limit) : 0); /*compound start*//*binOp start*/__o1->object_base = __o1->/*compound end*//*binOp end*/next_free; value; }); }/*compound end*//*binOp end*/);
  if (!kwset->trie)
    {
      kwsfree((kwset_t) kwset);
      return 0;
    }
  /*compound start*//*binOp start*/kwset->trie->accepting = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->trie->links = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->trie->parent = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->trie->next = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->trie->fail = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->trie->depth = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->trie->shift = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->mind = /*compound end*//*binOp end*/2147483647;
  /*compound start*//*binOp start*/kwset->maxd = -/*compound end*//*binOp end*/1;
  /*compound start*//*binOp start*/kwset->target = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/kwset->trans = /*compound end*//*binOp end*/trans;

  return (kwset_t) kwset;
}



char *
kwsincr(kws, text, len)
     kwset_t kws;
     char *text;
     size_t len;
{
  struct kwset *kwset;
  register struct trie *trie;
  register unsigned char label;
  register struct tree *link;
  register int depth;
  struct tree *links[12];
  enum { L, R } dirs[12];
  struct tree *t, *r, *l, *rl, *lr;

  /*compound start*//*binOp start*/kwset = (struct kwset *) /*compound end*//*binOp end*/kws;
  /*compound start*//*binOp start*/trie = kwset->/*compound end*//*binOp end*/trie;
  /*assign start*//*binOp start*/text += /*assign end*//*binOp end*/len;



  while (len--)
    {
      /*compound start*//*binOp start*/label = kwset->trans ? kwset->trans[(unsigned char) *--text] : *--/*compound end*//*binOp end*/text;




      /*compound start*//*binOp start*/link = trie->/*compound end*//*binOp end*/links;
      /*compound start*//*binOp start*/links[0] = (struct tree *) &trie->/*compound end*//*binOp end*/links;
      /*compound start*//*binOp start*/dirs[0] = /*compound end*//*binOp end*/L;
      /*compound start*//*binOp start*/depth = /*compound end*//*binOp end*/1;

      while (/*binOp start*/link && /*binOp start*/label != link->/*binOp end*//*binOp end*/label)
 {
   /*compound start*//*binOp start*/links[depth] = /*compound end*//*binOp end*/link;
   if (/*binOp start*/label < link->/*binOp end*/label)
     /*binOp start*//*binOp start*/dirs[depth++] = /*binOp end*/L, /*binOp start*/link = link->/*binOp end*//*binOp end*/llink;
   else
     /*binOp start*//*binOp start*/dirs[depth++] = /*binOp end*/R, /*binOp start*/link = link->/*binOp end*//*binOp end*/rlink;
 }




      if (!link)
 {
   /*compound start*//*binOp start*/link = (struct tree *) __extension__ ({ struct obstack *__h = (&kwset->obstack); __extension__ ({ struct obstack *__o = (__h); int __len = ((sizeof (struct tree))); ((/*binOp start*//*binOp start*/__o->chunk_limit - __o->/*binOp end*/next_free < /*binOp end*/__len) ? (/*binOp start*/_obstack_newchunk (__o, __len), /*binOp end*/0) : 0); /*assign start*//*binOp start*/__o->next_free += /*assign end*//*binOp end*/__len; (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *value = (void *) __o1->object_base; if (/*binOp start*/__o1->next_free == /*binOp end*/value) /*binOp start*/__o1->maybe_empty_object = /*binOp end*/1; /*compound start*//*binOp start*/__o1->next_free = (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(__o1->next_free) - (char *)/*binOp end*/0)+__o1->/*binOp end*/alignment_mask) & ~ (__o1->alignment_mask/*binOp end*/)) + (char *)/*binOp end*/0/*compound end*//*binOp end*/); ((/*binOp start*//*binOp start*/__o1->next_free - (char *)__o1->/*binOp end*/chunk > /*binOp start*/__o1->chunk_limit - (char *)__o1->/*binOp end*//*binOp end*/chunk) ? (/*binOp start*/__o1->next_free = __o1->/*binOp end*/chunk_limit) : 0); /*compound start*//*binOp start*/__o1->object_base = __o1->/*compound end*//*binOp end*/next_free; value; }); }/*compound end*//*binOp end*/);

   if (!link)
     return "memory exhausted";
   /*compound start*//*binOp start*/link->llink = /*compound end*//*binOp end*/0;
   /*compound start*//*binOp start*/link->rlink = /*compound end*//*binOp end*/0;
   /*compound start*//*binOp start*/link->trie = (struct trie *) __extension__ ({ struct obstack *__h = (&kwset->obstack); __extension__ ({ struct obstack *__o = (__h); int __len = ((sizeof (struct trie))); ((/*binOp start*//*binOp start*/__o->chunk_limit - __o->/*binOp end*/next_free < /*binOp end*/__len) ? (/*binOp start*/_obstack_newchunk (__o, __len), /*binOp end*/0) : 0); /*assign start*//*binOp start*/__o->next_free += /*assign end*//*binOp end*/__len; (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *value = (void *) __o1->object_base; if (/*binOp start*/__o1->next_free == /*binOp end*/value) /*binOp start*/__o1->maybe_empty_object = /*binOp end*/1; /*compound start*//*binOp start*/__o1->next_free = (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(__o1->next_free) - (char *)/*binOp end*/0)+__o1->/*binOp end*/alignment_mask) & ~ (__o1->alignment_mask/*binOp end*/)) + (char *)/*binOp end*/0/*compound end*//*binOp end*/); ((/*binOp start*//*binOp start*/__o1->next_free - (char *)__o1->/*binOp end*/chunk > /*binOp start*/__o1->chunk_limit - (char *)__o1->/*binOp end*//*binOp end*/chunk) ? (/*binOp start*/__o1->next_free = __o1->/*binOp end*/chunk_limit) : 0); /*compound start*//*binOp start*/__o1->object_base = __o1->/*compound end*//*binOp end*/next_free; value; }); }/*compound end*//*binOp end*/);

   if (!link->trie)
     return "memory exhausted";
   /*compound start*//*binOp start*/link->trie->accepting = /*compound end*//*binOp end*/0;
   /*compound start*//*binOp start*/link->trie->links = /*compound end*//*binOp end*/0;
   /*compound start*//*binOp start*/link->trie->parent = /*compound end*//*binOp end*/trie;
   /*compound start*//*binOp start*/link->trie->next = /*compound end*//*binOp end*/0;
   /*compound start*//*binOp start*/link->trie->fail = /*compound end*//*binOp end*/0;
   /*compound start*//*binOp start*/link->trie->depth = /*binOp start*/trie->depth + /*compound end*//*binOp end*//*binOp end*/1;
   /*compound start*//*binOp start*/link->trie->shift = /*compound end*//*binOp end*/0;
   /*compound start*//*binOp start*/link->label = /*compound end*//*binOp end*/label;
   /*compound start*//*binOp start*/link->balance = /*compound end*//*binOp end*/0;


   if (/*binOp start*/dirs[--depth] == /*binOp end*/L)
     /*binOp start*/links[depth]->llink = /*binOp end*/link;
   else
     /*binOp start*/links[depth]->rlink = /*binOp end*/link;


   while (/*binOp start*/depth && !links[depth]->/*binOp end*/balance)
     {
       if (/*binOp start*/dirs[depth] == /*binOp end*/L)
  --links[depth]->balance;
       else
  ++links[depth]->balance;
       --depth;
     }


   if (/*binOp start*/depth && (/*binOp start*/(/*binOp start*//*binOp start*/dirs[depth] == /*binOp end*/L && --links[depth]->/*binOp end*/balance)
   || (/*binOp start*//*binOp start*/dirs[depth] == /*binOp end*/R && ++links[depth]->/*binOp end*/balance/*binOp end*/)/*binOp end*/))
     {
       switch (links[depth]->balance)
  {
  case (char) -2:
    switch (dirs[/*binOp start*/depth + /*binOp end*/1])
      {
      case L:
        /*case comp start*//*binOp start*//*binOp start*//*binOp start*/r = links[depth/*binOp end*/], /*binOp start*/t = r->/*binOp end*//*binOp end*/llink, /*binOp start*/rl = t->/*case comp end*//*binOp end*//*binOp end*/rlink;
        /*compound start*//*binOp start*//*binOp start*/t->rlink = /*binOp end*/r, /*binOp start*/r->llink = /*compound end*//*binOp end*//*binOp end*/rl;
        /*compound start*//*binOp start*/t->balance = /*binOp start*/r->balance = /*compound end*//*binOp end*//*binOp end*/0;
        break;
      case R:
        /*case comp start*//*binOp start*//*binOp start*//*binOp start*/r = links[depth/*binOp end*/], /*binOp start*/l = r->/*binOp end*//*binOp end*/llink, /*binOp start*/t = l->/*case comp end*//*binOp end*//*binOp end*/rlink;
        /*compound start*//*binOp start*//*binOp start*/rl = t->/*binOp end*/rlink, /*binOp start*/lr = t->/*compound end*//*binOp end*//*binOp end*/llink;
        /*compound start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/t->llink = /*binOp end*/l, /*binOp start*/l->rlink = /*binOp end*//*binOp end*/lr, /*binOp start*/t->rlink = /*binOp end*//*binOp end*/r, /*binOp start*/r->llink = /*compound end*//*binOp end*//*binOp end*/rl;
        /*compound start*//*binOp start*/l->balance = /*binOp start*/t->balance != /*binOp end*/1 ? 0 : -/*compound end*//*binOp end*/1;
        /*compound start*//*binOp start*/r->balance = /*binOp start*/t->balance != (char) -/*binOp end*/1 ? 0 : /*compound end*//*binOp end*/1;
        /*compound start*//*binOp start*/t->balance = /*compound end*//*binOp end*/0;
        break;
      }
    break;
  case 2:
    switch (dirs[/*binOp start*/depth + /*binOp end*/1])
      {
      case R:
        /*case comp start*//*binOp start*//*binOp start*//*binOp start*/l = links[depth/*binOp end*/], /*binOp start*/t = l->/*binOp end*//*binOp end*/rlink, /*binOp start*/lr = t->/*case comp end*//*binOp end*//*binOp end*/llink;
        /*compound start*//*binOp start*//*binOp start*/t->llink = /*binOp end*/l, /*binOp start*/l->rlink = /*compound end*//*binOp end*//*binOp end*/lr;
        /*compound start*//*binOp start*/t->balance = /*binOp start*/l->balance = /*compound end*//*binOp end*//*binOp end*/0;
        break;
      case L:
        /*case comp start*//*binOp start*//*binOp start*//*binOp start*/l = links[depth/*binOp end*/], /*binOp start*/r = l->/*binOp end*//*binOp end*/rlink, /*binOp start*/t = r->/*case comp end*//*binOp end*//*binOp end*/llink;
        /*compound start*//*binOp start*//*binOp start*/lr = t->/*binOp end*/llink, /*binOp start*/rl = t->/*compound end*//*binOp end*//*binOp end*/rlink;
        /*compound start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/t->llink = /*binOp end*/l, /*binOp start*/l->rlink = /*binOp end*//*binOp end*/lr, /*binOp start*/t->rlink = /*binOp end*//*binOp end*/r, /*binOp start*/r->llink = /*compound end*//*binOp end*//*binOp end*/rl;
        /*compound start*//*binOp start*/l->balance = /*binOp start*/t->balance != /*binOp end*/1 ? 0 : -/*compound end*//*binOp end*/1;
        /*compound start*//*binOp start*/r->balance = /*binOp start*/t->balance != (char) -/*binOp end*/1 ? 0 : /*compound end*//*binOp end*/1;
        /*compound start*//*binOp start*/t->balance = /*compound end*//*binOp end*/0;
        break;
      }
    break;
  }

       if (/*binOp start*/dirs[/*binOp start*/depth - /*binOp end*/1] == /*binOp end*/L)
  /*binOp start*/links[/*binOp start*/depth - /*binOp end*/1]->llink = /*binOp end*/t;
       else
  /*binOp start*/links[/*binOp start*/depth - /*binOp end*/1]->rlink = /*binOp end*/t;
     }
 }

      /*compound start*//*binOp start*/trie = link->/*compound end*//*binOp end*/trie;
    }



  if (!trie->accepting)
    /*binOp start*/trie->accepting = /*binOp start*/1 + /*binOp start*/2 * kwset->/*binOp end*//*binOp end*//*binOp end*/words;
  ++kwset->words;


  if (/*binOp start*/trie->depth < kwset->/*binOp end*/mind)
    /*binOp start*/kwset->mind = trie->/*binOp end*/depth;
  if (/*binOp start*/trie->depth > kwset->/*binOp end*/maxd)
    /*binOp start*/kwset->maxd = trie->/*binOp end*/depth;

  return 0;
}



static void
enqueue(tree, last)
     struct tree *tree;
     struct trie **last;
{
  if (!tree)
    return;
  enqueue(tree->llink, last);
  enqueue(tree->rlink, last);
  /*compound start*//*binOp start*/(*last) = /*binOp start*/(*last)->next = tree->/*compound end*//*binOp end*//*binOp end*/trie;
}




static void
treefails(tree, fail, recourse)
     register struct tree *tree;
     struct trie *fail;
     struct trie *recourse;
{
  register struct tree *link;

  if (!tree)
    return;

  treefails(tree->llink, fail, recourse);
  treefails(tree->rlink, fail, recourse);



  while (fail)
    {
      /*compound start*//*binOp start*/link = fail->/*compound end*//*binOp end*/links;
      while (/*binOp start*/link && /*binOp start*/tree->label != link->/*binOp end*//*binOp end*/label)
 if (/*binOp start*/tree->label < link->/*binOp end*/label)
   /*binOp start*/link = link->/*binOp end*/llink;
 else
   /*binOp start*/link = link->/*binOp end*/rlink;
      if (link)
 {
   /*compound start*//*binOp start*/tree->trie->fail = link->/*compound end*//*binOp end*/trie;
   return;
 }
      /*compound start*//*binOp start*/fail = fail->/*compound end*//*binOp end*/fail;
    }

  /*compound start*//*binOp start*/tree->trie->fail = /*compound end*//*binOp end*/recourse;
}



static void
treedelta(tree, depth, delta)
     register struct tree *tree;
     register unsigned int depth;
     unsigned char delta[];
{
  if (!tree)
    return;
  treedelta(tree->llink, depth, delta);
  treedelta(tree->rlink, depth, delta);
  if (/*binOp start*/depth < delta[tree->label/*binOp end*/])
    /*binOp start*/delta[tree->label] = /*binOp end*/depth;
}


static int
hasevery(a, b)
     register struct tree *a;
     register struct tree *b;
{
  if (!b)
    return 1;
  if (!hasevery(a, b->llink))
    return 0;
  if (!hasevery(a, b->rlink))
    return 0;
  while (/*binOp start*/a && /*binOp start*/b->label != a->/*binOp end*//*binOp end*/label)
    if (/*binOp start*/b->label < a->/*binOp end*/label)
      /*binOp start*/a = a->/*binOp end*/llink;
    else
      /*binOp start*/a = a->/*binOp end*/rlink;
  return !!a;
}



static void
treenext(tree, next)
     struct tree *tree;
     struct trie *next[];
{
  if (!tree)
    return;
  treenext(tree->llink, next);
  treenext(tree->rlink, next);
  /*compound start*//*binOp start*/next[tree->label] = tree->/*compound end*//*binOp end*/trie;
}



char *
kwsprep(kws)
     kwset_t kws;
{
  register struct kwset *kwset;
  register int i;
  register struct trie *curr, *fail;
  register char *trans;
  unsigned char delta[(/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1)];
  struct trie *last, *next[(/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1)];

  /*compound start*//*binOp start*/kwset = (struct kwset *) /*compound end*//*binOp end*/kws;




  if (/*binOp start*/kwset->mind < /*binOp end*/256)
    for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1/*binOp end*/); ++i)
      /*binOp start*/delta[i] = kwset->/*binOp end*/mind;
  else
    for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1/*binOp end*/); ++i)
      /*binOp start*/delta[i] = /*binOp end*/255;



  if (/*binOp start*//*binOp start*/kwset->words == /*binOp end*/1 && /*binOp start*/kwset->trans == /*binOp end*//*binOp end*/0)
    {

      /*compound start*//*binOp start*/kwset->target = __extension__ ({ struct obstack *__h = (&kwset->obstack); __extension__ ({ struct obstack *__o = (__h); int __len = ((kwset->mind)); ((/*binOp start*//*binOp start*/__o->chunk_limit - __o->/*binOp end*/next_free < /*binOp end*/__len) ? (/*binOp start*/_obstack_newchunk (__o, __len), /*binOp end*/0) : 0); /*assign start*//*binOp start*/__o->next_free += /*assign end*//*binOp end*/__len; (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *value = (void *) __o1->object_base; if (/*binOp start*/__o1->next_free == /*binOp end*/value) /*binOp start*/__o1->maybe_empty_object = /*binOp end*/1; /*compound start*//*binOp start*/__o1->next_free = (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(__o1->next_free) - (char *)/*binOp end*/0)+__o1->/*binOp end*/alignment_mask) & ~ (__o1->alignment_mask/*binOp end*/)) + (char *)/*binOp end*/0/*compound end*//*binOp end*/); ((/*binOp start*//*binOp start*/__o1->next_free - (char *)__o1->/*binOp end*/chunk > /*binOp start*/__o1->chunk_limit - (char *)__o1->/*binOp end*//*binOp end*/chunk) ? (/*binOp start*/__o1->next_free = __o1->/*binOp end*/chunk_limit) : 0); /*compound start*//*binOp start*/__o1->object_base = __o1->/*compound end*//*binOp end*/next_free; value; }); }/*compound end*//*binOp end*/);
      for (/*binOp start*//*binOp start*/i = /*binOp start*/kwset->mind - /*binOp end*//*binOp end*/1, /*binOp start*/curr = kwset->/*binOp end*//*binOp end*/trie; /*binOp start*/i >= /*binOp end*/0; --i)
 {
   /*compound start*//*binOp start*/kwset->target[i] = curr->links->/*compound end*//*binOp end*/label;
   /*compound start*//*binOp start*/curr = curr->links->/*compound end*//*binOp end*/trie;
 }

      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < kwset->/*binOp end*/mind; ++i)
 /*binOp start*/delta[(unsigned char) kwset->target[i]] = /*binOp start*/kwset->mind - (/*binOp start*/i + /*binOp end*/1/*binOp end*//*binOp end*/);
      /*compound start*//*binOp start*/kwset->mind2 = kwset->/*compound end*//*binOp end*/mind;


      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < /*binOp start*/kwset->mind - /*binOp end*//*binOp end*/1; ++i)
 if (/*binOp start*/kwset->target[i] == kwset->target[/*binOp start*/kwset->mind - /*binOp end*/1/*binOp end*/])
   /*binOp start*/kwset->mind2 = /*binOp start*/kwset->mind - (/*binOp start*/i + /*binOp end*/1/*binOp end*//*binOp end*/);
    }
  else
    {


      for (/*binOp start*/curr = /*binOp start*/last = kwset->/*binOp end*//*binOp end*/trie; curr; /*binOp start*/curr = curr->/*binOp end*/next)
 {

   enqueue(curr->links, &last);

   /*compound start*//*binOp start*/curr->shift = kwset->/*compound end*//*binOp end*/mind;
   /*compound start*//*binOp start*/curr->maxshift = kwset->/*compound end*//*binOp end*/mind;


   treedelta(curr->links, curr->depth, delta);


   treefails(curr->links, curr->fail, kwset->trie);



   for (/*binOp start*/fail = curr->/*binOp end*/fail; fail; /*binOp start*/fail = fail->/*binOp end*/fail)
     {



       if (!hasevery(fail->links, curr->links))
  if (/*binOp start*//*binOp start*/curr->depth - fail->/*binOp end*/depth < fail->/*binOp end*/shift)
    /*binOp start*/fail->shift = /*binOp start*/curr->depth - fail->/*binOp end*//*binOp end*/depth;




       if (/*binOp start*/curr->accepting && /*binOp start*/fail->maxshift > /*binOp start*/curr->depth - fail->/*binOp end*//*binOp end*//*binOp end*/depth)
  /*binOp start*/fail->maxshift = /*binOp start*/curr->depth - fail->/*binOp end*//*binOp end*/depth;
     }
 }



      for (/*binOp start*/curr = kwset->trie->/*binOp end*/next; curr; /*binOp start*/curr = curr->/*binOp end*/next)
 {
   if (/*binOp start*/curr->maxshift > curr->parent->/*binOp end*/maxshift)
     /*binOp start*/curr->maxshift = curr->parent->/*binOp end*/maxshift;
   if (/*binOp start*/curr->shift > curr->/*binOp end*/maxshift)
     /*binOp start*/curr->shift = curr->/*binOp end*/maxshift;
 }



      for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1/*binOp end*/); ++i)
 /*binOp start*/next[i] = /*binOp end*/0;
      treenext(kwset->trie->links, next);

      if (/*binOp start*/(/*binOp start*/trans = kwset->/*binOp end*/trans) != /*binOp end*/0)
 for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1/*binOp end*/); ++i)
   /*binOp start*/kwset->next[i] = next[(unsigned char) trans[i]/*binOp end*/];
      else
 for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1/*binOp end*/); ++i)
   /*binOp start*/kwset->next[i] = next[i/*binOp end*/];
    }


  if (/*binOp start*/(/*binOp start*/trans = kwset->/*binOp end*/trans) != /*binOp end*/0)
    for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1/*binOp end*/); ++i)
      /*binOp start*/kwset->delta[i] = delta[(unsigned char) trans[i]/*binOp end*/];
  else
    for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1/*binOp end*/); ++i)
      /*binOp start*/kwset->delta[i] = delta[i/*binOp end*/];

  return 0;
}




static char *
bmexec(kws, text, size)
     kwset_t kws;
     char *text;
     size_t size;
{
  struct kwset *kwset;
  register unsigned char *d1;
  register char *ep, *sp, *tp;
  register int d, gc, i, len, md2;

  /*compound start*//*binOp start*/kwset = (struct kwset *) /*compound end*//*binOp end*/kws;
  /*compound start*//*binOp start*/len = kwset->/*compound end*//*binOp end*/mind;

  if (/*binOp start*/len == /*binOp end*/0)
    return text;
  if (/*binOp start*/len > /*binOp end*/size)
    return 0;
  if (/*binOp start*/len == /*binOp end*/1)
    return memchr(text, kwset->target[0], size);

  /*compound start*//*binOp start*/d1 = kwset->/*compound end*//*binOp end*/delta;
  /*compound start*//*binOp start*/sp = /*binOp start*/kwset->target + /*compound end*//*binOp end*//*binOp end*/len;
  /*compound start*//*binOp start*/gc = ((unsigned char) (sp[-2])/*compound end*//*binOp end*/);
  /*compound start*//*binOp start*/md2 = kwset->/*compound end*//*binOp end*/mind2;
  /*compound start*//*binOp start*/tp = /*binOp start*/text + /*compound end*//*binOp end*//*binOp end*/len;


  if (/*binOp start*/size > /*binOp start*/12 * /*binOp end*//*binOp end*/len)

    for (/*binOp start*/ep = /*binOp start*//*binOp start*/text + /*binOp end*/size - /*binOp start*/11 * /*binOp end*//*binOp end*//*binOp end*/len;;)
      {
 while (/*binOp start*/tp <= /*binOp end*/ep)
   {
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     if (/*binOp start*/d == /*binOp end*/0)
       goto found;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     if (/*binOp start*/d == /*binOp end*/0)
       goto found;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     if (/*binOp start*/d == /*binOp end*/0)
       goto found;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
     /*compound start*//*binOp start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*binOp end*/], /*binOp start*/tp += /*compound end*//*binOp end*//*binOp end*/d;
   }
 break;
      found:
 if (/*binOp start*/((unsigned char) (tp[-2])) == /*binOp end*/gc)
   {
     for (/*binOp start*/i = /*binOp end*/3; /*binOp start*//*binOp start*/i <= /*binOp end*/len && /*binOp start*/((unsigned char) (tp[-i])) == ((unsigned char) (sp[-i])/*binOp end*//*binOp end*/); ++i)
       ;
     if (/*binOp start*/i > /*binOp end*/len)
       return /*binOp start*/tp - /*binOp end*/len;
   }
 /*assign start*//*binOp start*/tp += /*assign end*//*binOp end*/md2;
      }



  /*compound start*//*binOp start*/ep = /*binOp start*/text + /*compound end*//*binOp end*//*binOp end*/size;
  /*compound start*//*binOp start*/d = d1[((unsigned char) (tp[-1]))/*compound end*//*binOp end*/];
  while (/*binOp start*/d <= /*binOp start*/ep - /*binOp end*//*binOp end*/tp)
    {
      /*compound start*//*binOp start*/d = d1[((unsigned char) ((/*binOp start*/tp += /*binOp end*/d)[-1]))/*compound end*//*binOp end*/];
      if (/*binOp start*/d != /*binOp end*/0)
 continue;
      if (/*binOp start*/tp[-2] == /*binOp end*/gc)
 {
   for (/*binOp start*/i = /*binOp end*/3; /*binOp start*//*binOp start*/i <= /*binOp end*/len && /*binOp start*/((unsigned char) (tp[-i])) == ((unsigned char) (sp[-i])/*binOp end*//*binOp end*/); ++i)
     ;
   if (/*binOp start*/i > /*binOp end*/len)
     return /*binOp start*/tp - /*binOp end*/len;
 }
      /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/md2;
    }

  return 0;
}


static char *
cwexec(kws, text, len, kwsmatch)
     kwset_t kws;
     char *text;
     size_t len;
     struct kwsmatch *kwsmatch;
{
  struct kwset *kwset;
  struct trie **next, *trie, *accept;
  char *beg, *lim, *mch, *lmch;
  register unsigned char c, *delta;
  register int d;
  register char *end, *qlim;
  register struct tree *tree;
  register char *trans;


  /*compound start*//*binOp start*/kwset = (struct kwset *) /*compound end*//*binOp end*/kws;
  if (/*binOp start*/len < kwset->/*binOp end*/mind)
    return 0;
  /*compound start*//*binOp start*/next = kwset->/*compound end*//*binOp end*/next;
  /*compound start*//*binOp start*/delta = kwset->/*compound end*//*binOp end*/delta;
  /*compound start*//*binOp start*/trans = kwset->/*compound end*//*binOp end*/trans;
  /*compound start*//*binOp start*/lim = /*binOp start*/text + /*compound end*//*binOp end*//*binOp end*/len;
  /*compound start*//*binOp start*/end = /*compound end*//*binOp end*/text;
  if (/*binOp start*/(/*binOp start*/d = kwset->/*binOp end*/mind) != /*binOp end*/0)
    /*binOp start*/mch = /*binOp end*/0;
  else
    {
      /*compound start*//*binOp start*//*binOp start*/mch = /*binOp end*/text, /*binOp start*/accept = kwset->/*compound end*//*binOp end*//*binOp end*/trie;
      goto match;
    }

  if (/*binOp start*/len >= /*binOp start*/4 * kwset->/*binOp end*//*binOp end*/mind)
    /*binOp start*/qlim = /*binOp start*/lim - /*binOp start*/4 * kwset->/*binOp end*//*binOp end*//*binOp end*/mind;
  else
    /*binOp start*/qlim = /*binOp end*/0;

  while (/*binOp start*//*binOp start*/lim - /*binOp end*/end >= /*binOp end*/d)
    {
      if (/*binOp start*/qlim && /*binOp start*/end <= /*binOp end*//*binOp end*/qlim)
 {
   /*assign start*//*binOp start*/end += /*binOp start*/d - /*assign end*//*binOp end*//*binOp end*/1;
   while (/*binOp start*/(/*binOp start*/d = delta[/*binOp start*/c = */*binOp end*/end/*binOp end*/]) && /*binOp start*/end < /*binOp end*//*binOp end*/qlim)
     {
       /*assign start*//*binOp start*/end += /*assign end*//*binOp end*/d;
       /*assign start*//*binOp start*/end += delta[(unsigned char) *end/*assign end*//*binOp end*/];
       /*assign start*//*binOp start*/end += delta[(unsigned char) *end/*assign end*//*binOp end*/];
     }
   ++end;
 }
      else
 /*binOp start*/d = delta[/*binOp start*/c = (/*binOp start*/end += /*binOp end*/d)[-1/*binOp end*/]/*binOp end*/];
      if (d)
 continue;
      /*compound start*//*binOp start*/beg = /*binOp start*/end - /*compound end*//*binOp end*//*binOp end*/1;
      /*compound start*//*binOp start*/trie = next[c/*compound end*//*binOp end*/];
      if (trie->accepting)
 {
   /*compound start*//*binOp start*/mch = /*compound end*//*binOp end*/beg;
   /*compound start*//*binOp start*/accept = /*compound end*//*binOp end*/trie;
 }
      /*compound start*//*binOp start*/d = trie->/*compound end*//*binOp end*/shift;
      while (/*binOp start*/beg > /*binOp end*/text)
 {
   /*compound start*//*binOp start*/c = trans ? trans[(unsigned char) *--beg] : *--/*compound end*//*binOp end*/beg;
   /*compound start*//*binOp start*/tree = trie->/*compound end*//*binOp end*/links;
   while (/*binOp start*/tree && /*binOp start*/c != tree->/*binOp end*//*binOp end*/label)
     if (/*binOp start*/c < tree->/*binOp end*/label)
       /*binOp start*/tree = tree->/*binOp end*/llink;
     else
       /*binOp start*/tree = tree->/*binOp end*/rlink;
   if (tree)
     {
       /*compound start*//*binOp start*/trie = tree->/*compound end*//*binOp end*/trie;
       if (trie->accepting)
  {
    /*compound start*//*binOp start*/mch = /*compound end*//*binOp end*/beg;
    /*compound start*//*binOp start*/accept = /*compound end*//*binOp end*/trie;
  }
     }
   else
     break;
   /*compound start*//*binOp start*/d = trie->/*compound end*//*binOp end*/shift;
 }
      if (mch)
 goto match;
    }
  return 0;

 match:



  if (/*binOp start*//*binOp start*/lim - /*binOp end*/mch > kwset->/*binOp end*/maxd)
    /*binOp start*/lim = /*binOp start*/mch + kwset->/*binOp end*//*binOp end*/maxd;
  /*compound start*//*binOp start*/lmch = /*compound end*//*binOp end*/0;
  /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/1;
  while (/*binOp start*//*binOp start*/lim - /*binOp end*/end >= /*binOp end*/d)
    {
      if (/*binOp start*/(/*binOp start*/d = delta[/*binOp start*/c = (/*binOp start*/end += /*binOp end*/d)[-1/*binOp end*/]/*binOp end*/]) != /*binOp end*/0)
 continue;
      /*compound start*//*binOp start*/beg = /*binOp start*/end - /*compound end*//*binOp end*//*binOp end*/1;
      if (!(/*binOp start*/trie = next[c/*binOp end*/]))
 {
   /*compound start*//*binOp start*/d = /*compound end*//*binOp end*/1;
   continue;
 }
      if (/*binOp start*/trie->accepting && /*binOp start*/beg <= /*binOp end*//*binOp end*/mch)
 {
   /*compound start*//*binOp start*/lmch = /*compound end*//*binOp end*/beg;
   /*compound start*//*binOp start*/accept = /*compound end*//*binOp end*/trie;
 }
      /*compound start*//*binOp start*/d = trie->/*compound end*//*binOp end*/shift;
      while (/*binOp start*/beg > /*binOp end*/text)
 {
   /*compound start*//*binOp start*/c = trans ? trans[(unsigned char) *--beg] : *--/*compound end*//*binOp end*/beg;
   /*compound start*//*binOp start*/tree = trie->/*compound end*//*binOp end*/links;
   while (/*binOp start*/tree && /*binOp start*/c != tree->/*binOp end*//*binOp end*/label)
     if (/*binOp start*/c < tree->/*binOp end*/label)
       /*binOp start*/tree = tree->/*binOp end*/llink;
     else
       /*binOp start*/tree = tree->/*binOp end*/rlink;
   if (tree)
     {
       /*compound start*//*binOp start*/trie = tree->/*compound end*//*binOp end*/trie;
       if (/*binOp start*/trie->accepting && /*binOp start*/beg <= /*binOp end*//*binOp end*/mch)
  {
    /*compound start*//*binOp start*/lmch = /*compound end*//*binOp end*/beg;
    /*compound start*//*binOp start*/accept = /*compound end*//*binOp end*/trie;
  }
     }
   else
     break;
   /*compound start*//*binOp start*/d = trie->/*compound end*//*binOp end*/shift;
 }
      if (lmch)
 {
   /*compound start*//*binOp start*/mch = /*compound end*//*binOp end*/lmch;
   goto match;
 }
      if (!d)
 /*binOp start*/d = /*binOp end*/1;
    }

  if (kwsmatch)
    {
      /*compound start*//*binOp start*/kwsmatch->strchr = /*binOp start*/accept->accepting / /*compound end*//*binOp end*//*binOp end*/2;
      /*compound start*//*binOp start*/kwsmatch->beg[0] = /*compound end*//*binOp end*/mch;
      /*compound start*//*binOp start*/kwsmatch->size[0] = accept->/*compound end*//*binOp end*/depth;
    }
  return mch;
}
# 9937 "target/grep.c"
char *
kwsexec(kws, text, size, kwsmatch)
     kwset_t kws;
     char *text;
     size_t size;
     struct kwsmatch *kwsmatch;
{
  struct kwset *kwset;
  char *ret;

  /*compound start*//*binOp start*/kwset = (struct kwset *) /*compound end*//*binOp end*/kws;
  if (/*binOp start*//*binOp start*/kwset->words == /*binOp end*/1 && /*binOp start*/kwset->trans == /*binOp end*//*binOp end*/0)
    {
      /*compound start*//*binOp start*/ret = bmexec(kws, text, size/*compound end*//*binOp end*/);
      if (/*binOp start*//*binOp start*/kwsmatch != /*binOp end*/0 && /*binOp start*/ret != /*binOp end*//*binOp end*/0)
 {
   /*compound start*//*binOp start*/kwsmatch->strchr = /*compound end*//*binOp end*/0;
   /*compound start*//*binOp start*/kwsmatch->beg[0] = /*compound end*//*binOp end*/ret;
   /*compound start*//*binOp start*/kwsmatch->size[0] = kwset->/*compound end*//*binOp end*/mind;
 }
      return ret;
    }
  else
    return cwexec(kws, text, size, kwsmatch);
}


void
kwsfree(kws)
     kwset_t kws;
{
  struct kwset *kwset;

  /*compound start*//*binOp start*/kwset = (struct kwset *) /*compound end*//*binOp end*/kws;
  __extension__ ({ struct obstack *__o = (&kwset->obstack); void *__obj = (0); if (/*binOp start*//*binOp start*/__obj > (void *)__o->/*binOp end*/chunk && /*binOp start*/__obj < (void *)__o->/*binOp end*//*binOp end*/chunk_limit) /*binOp start*/__o->next_free = /*binOp start*/__o->object_base = /*binOp end*//*binOp end*/__obj; else (obstack_free) (__o, __obj); });
  free(kws);
}
# 10515 "target/grep.c"
static void Gcompile(char *, size_t);
static void Ecompile(char *, size_t);
static char *EGexecute(char *, size_t, char **);
static void Fcompile(char *, size_t);
static char *Fexecute(char *, size_t, char **);
# 10529 "target/grep.c"
struct matcher matchers[] = {
  { "default", Gcompile, EGexecute },
  { "grep", Gcompile, EGexecute },
  { "ggrep", Gcompile, EGexecute },
  { "egrep", Ecompile, EGexecute },
  { "posix-egrep", Ecompile, EGexecute },
  { "gegrep", Ecompile, EGexecute },
  { "fgrep", Fcompile, Fexecute },
  { "gfgrep", Fcompile, Fexecute },
  { 0, 0, 0 },
};





static struct dfa dfa_1;


static struct re_pattern_buffer regex;




static kwset_t kwset;




static int lastexact;

void
dfaerror(mesg)
     char *mesg;
{
  fatal(mesg, 0);
}

static void
kwsinit()
{
  static char trans[(/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1)];
  int i;

  if (match_icase)
    for (/*binOp start*/i = /*binOp end*/0; /*binOp start*/i < (/*binOp start*/(/*binOp start*//*binOp start*/127 * /*binOp end*/2 + /*binOp end*/1) + /*binOp end*/1/*binOp end*/); ++i)
      /*binOp start*/trans[i] = ((/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) /*binOp end*/_ISupper/*binOp end*/)) ? tolower(i) : (i)/*binOp end*/);

  if (!(/*binOp start*/kwset = kwsalloc(match_icase ? trans : (char *) 0/*binOp end*/)))
    fatal("memory exhausted", 0);
}





static void
kwsmusts()
{
  struct dfamust *dm;
  char *err;

  if (dfa_1.musts)
    {
      kwsinit();



      for (/*binOp start*/dm = dfa_1./*binOp end*/musts; dm; /*binOp start*/dm = dm->/*binOp end*/next)
 {
   if (!dm->exact)
     continue;
   ++lastexact;
   if (/*binOp start*/(/*binOp start*/err = kwsincr(kwset, dm->must, strlen(dm->must)/*binOp end*/)) != /*binOp end*/0)
     fatal(err, 0);
 }


      for (/*binOp start*/dm = dfa_1./*binOp end*/musts; dm; /*binOp start*/dm = dm->/*binOp end*/next)
 {
   if (dm->exact)
     continue;
   if (/*binOp start*/(/*binOp start*/err = kwsincr(kwset, dm->must, strlen(dm->must)/*binOp end*/)) != /*binOp end*/0)
     fatal(err, 0);
 }
      if (/*binOp start*/(/*binOp start*/err = kwsprep(kwset/*binOp end*/)) != /*binOp end*/0)
 fatal(err, 0);
    }
}

static void
Gcompile(pattern, size)
     char *pattern;
     size_t size;
{

  const

  char *err;

  re_set_syntax(/*binOp start*/(/*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) | (/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/));
  dfasyntax(/*binOp start*/(/*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) | (/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/), match_icase);

  if (/*binOp start*/(/*binOp start*/err = re_compile_pattern(pattern, size, &regex/*binOp end*/)) != /*binOp end*/0)
    fatal(err, 0);

  dfainit(&dfa_1);





  if (/*binOp start*/match_words || /*binOp end*/match_lines)
    {






      char *n = xmalloc(/*binOp start*/size + /*binOp end*/50);
      int i = 0;

      strcpy(n, "");

      if (match_lines)
 strcpy(n, "^\\(");
      if (match_words)
 strcpy(n, "\\(^\\|[^0-9A-Za-z_]\\)\\(");

      /*compound start*//*binOp start*/i = strlen(n/*compound end*//*binOp end*/);
      memcpy((/*binOp start*/n + /*binOp end*/i), (pattern), (size));
      /*assign start*//*binOp start*/i += /*assign end*//*binOp end*/size;

      if (match_words)
 strcpy(/*binOp start*/n + /*binOp end*/i, "\\)\\([^0-9A-Za-z_]\\|$\\)");
      if (match_lines)
 strcpy(/*binOp start*/n + /*binOp end*/i, "\\)$");

      /*assign start*//*binOp start*/i += strlen(/*binOp start*/n + /*binOp end*/i/*assign end*//*binOp end*/);
      dfacomp(n, i, &dfa_1, 1);
    }
  else
    dfacomp(pattern, size, &dfa_1, 1);

  kwsmusts();
}

static void
Ecompile(pattern, size)
     char *pattern;
     size_t size;
{

  const

  char *err;

  if (/*binOp start*/strcmp(matcher, "posix-egrep") == /*binOp end*/0)
    {
      re_set_syntax((/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)));
      dfasyntax((/*binOp start*//*binOp start*/(/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)), match_icase);
    }
  else
    {
      re_set_syntax((/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)));
      dfasyntax((/*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*//*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/) | (/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(/*binOp start*/(1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1) << /*binOp end*/1/*binOp end*/)), match_icase);
    }

  if (/*binOp start*/(/*binOp start*/err = re_compile_pattern(pattern, size, &regex/*binOp end*/)) != /*binOp end*/0)
    fatal(err, 0);

  dfainit(&dfa_1);





  if (/*binOp start*/match_words || /*binOp end*/match_lines)
    {






      char *n = xmalloc(/*binOp start*/size + /*binOp end*/50);
      int i = 0;

      strcpy(n, "");

      if (match_lines)
 strcpy(n, "^(");
      if (match_words)
 strcpy(n, "(^|[^0-9A-Za-z_])(");

      /*compound start*//*binOp start*/i = strlen(n/*compound end*//*binOp end*/);
      memcpy((/*binOp start*/n + /*binOp end*/i), (pattern), (size));
      /*assign start*//*binOp start*/i += /*assign end*//*binOp end*/size;

      if (match_words)
 strcpy(/*binOp start*/n + /*binOp end*/i, ")([^0-9A-Za-z_]|$)");
      if (match_lines)
 strcpy(/*binOp start*/n + /*binOp end*/i, ")$");

      /*assign start*//*binOp start*/i += strlen(/*binOp start*/n + /*binOp end*/i/*assign end*//*binOp end*/);
      dfacomp(n, i, &dfa_1, 1);
    }
  else
    dfacomp(pattern, size, &dfa_1, 1);

  kwsmusts();
}

static char *
EGexecute(buf, size, endp)
     char *buf;
     size_t size;
     char **endp;
{
  register char *buflim, *beg, *end, save;
  int backref, start, len;
  struct kwsmatch kwsm;
  static struct re_registers regs;


  /*compound start*//*binOp start*/buflim = /*binOp start*/buf + /*compound end*//*binOp end*//*binOp end*/size;

  for (/*binOp start*/beg = /*binOp start*/end = /*binOp end*//*binOp end*/buf; /*binOp start*/end < /*binOp end*/buflim; /*binOp start*/beg = /*binOp start*/end + /*binOp end*//*binOp end*/1)
    {
      if (kwset)
 {

   /*compound start*//*binOp start*/beg = kwsexec(kwset, beg, /*binOp start*/buflim - /*binOp end*/beg, &kwsm/*compound end*//*binOp end*/);
   if (!beg)
     goto failure;


   /*compound start*//*binOp start*/end = memchr(beg, '\n', /*binOp start*/buflim - /*binOp end*/beg/*compound end*//*binOp end*/);
   if (!end)
     /*binOp start*/end = /*binOp end*/buflim;
   while (/*binOp start*//*binOp start*/beg > /*binOp end*/buf && /*binOp start*/beg[-1] != /*binOp end*//*binOp end*/'\n')
     --beg;
   /*compound start*//*binOp start*/save = */*compound end*//*binOp end*/end;
   if (/*binOp start*/kwsm.strchr < /*binOp end*/lastexact)
     goto success;
   if (!dfaexec(&dfa_1, beg, end, 0, (int *) 0, &backref))
     {
       /*compound start*//*binOp start*/*end = /*compound end*//*binOp end*/save;
       continue;
     }
   /*compound start*//*binOp start*/*end = /*compound end*//*binOp end*/save;

   if (!backref)
     goto success;
 }
      else
 {

   /*compound start*//*binOp start*/save = */*compound end*//*binOp end*/buflim;
   /*compound start*//*binOp start*/beg = dfaexec(&dfa_1, beg, buflim, 0, (int *) 0, &backref/*compound end*//*binOp end*/);
   /*compound start*//*binOp start*/*buflim = /*compound end*//*binOp end*/save;
   if (!beg)
     goto failure;

   /*compound start*//*binOp start*/end = memchr(beg, '\n', /*binOp start*/buflim - /*binOp end*/beg/*compound end*//*binOp end*/);
   if (!end)
     /*binOp start*/end = /*binOp end*/buflim;
   while (/*binOp start*//*binOp start*/beg > /*binOp end*/buf && /*binOp start*/beg[-1] != /*binOp end*//*binOp end*/'\n')
     --beg;

   if (!backref)
     goto success;
 }


      /*compound start*//*binOp start*/regex.not_eol = /*compound end*//*binOp end*/0;
      if (/*binOp start*/(/*binOp start*/start = re_search(&regex, beg, /*binOp start*/end - /*binOp end*/beg, 0, /*binOp start*/end - /*binOp end*/beg, &regs/*binOp end*/)) >= /*binOp end*/0)
 {
   /*compound start*//*binOp start*/len = /*binOp start*/regs.end[0] - /*compound end*//*binOp end*//*binOp end*/start;
   if (/*binOp start*//*binOp start*/!match_lines && !/*binOp end*/match_words || /*binOp start*/match_lines && /*binOp start*/len == /*binOp start*/end - /*binOp end*//*binOp end*//*binOp end*//*binOp end*/beg)
     goto success;






   if (match_words)
     while (/*binOp start*/start >= /*binOp end*/0)
       {
  if (/*binOp start*/(/*binOp start*//*binOp start*/start == /*binOp end*/0 || !(/*binOp start*/(/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((beg[/*binOp start*/start - /*binOp end*/1]))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)) || /*binOp start*/(beg[/*binOp start*/start - /*binOp end*/1]) == /*binOp end*//*binOp end*/'_'/*binOp end*/))
      && (/*binOp start*//*binOp start*/len == /*binOp start*/end - /*binOp end*//*binOp end*/beg || !(/*binOp start*/(/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) ((beg[/*binOp start*/start + /*binOp end*/len]))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)) || /*binOp start*/(beg[/*binOp start*/start + /*binOp end*/len]) == /*binOp end*//*binOp end*/'_'/*binOp end*/)/*binOp end*/))
    goto success;
  if (/*binOp start*/len > /*binOp end*/0)
    {

      --len;
      /*compound start*//*binOp start*/regex.not_eol = /*compound end*//*binOp end*/1;
      /*compound start*//*binOp start*/len = re_match(&regex, beg, /*binOp start*/start + /*binOp end*/len, start, &regs/*compound end*//*binOp end*/);
    }
  if (/*binOp start*/len <= /*binOp end*/0)
    {

      if (/*binOp start*/start == /*binOp start*/end - /*binOp end*//*binOp end*/beg)
        break;
      ++start;
      /*compound start*//*binOp start*/regex.not_eol = /*compound end*//*binOp end*/0;
      /*compound start*//*binOp start*/start = re_search(&regex, beg, /*binOp start*/end - /*binOp end*/beg,
          start, /*binOp start*//*binOp start*/end - /*binOp end*/beg - /*binOp end*/start, &regs/*compound end*//*binOp end*/);
      /*compound start*//*binOp start*/len = /*binOp start*/regs.end[0] - /*compound end*//*binOp end*//*binOp end*/start;
    }
       }
 }
    }

 failure:
  return 0;

 success:
  /*binOp start*/*endp = /*binOp start*/end < /*binOp end*/buflim ? /*binOp start*/end + /*binOp end*/1 : /*binOp end*/end;
  return beg;
}

static void
Fcompile(pattern, size)
     char *pattern;
     size_t size;
{
  char *beg, *lim, *err;

  kwsinit();
  /*compound start*//*binOp start*/beg = /*compound end*//*binOp end*/pattern;
  do
    {
      for (/*binOp start*/lim = /*binOp end*/beg; /*binOp start*//*binOp start*/lim < /*binOp start*/pattern + /*binOp end*//*binOp end*/size && /*binOp start*/*lim != /*binOp end*//*binOp end*/'\n'; ++lim)
 ;
      if (/*binOp start*/(/*binOp start*/err = kwsincr(kwset, beg, /*binOp start*/lim - /*binOp end*/beg/*binOp end*/)) != /*binOp end*/0)
 fatal(err, 0);
      if (/*binOp start*/lim < /*binOp start*/pattern + /*binOp end*//*binOp end*/size)
 ++lim;
      /*compound start*//*binOp start*/beg = /*compound end*//*binOp end*/lim;
    }
  while (/*binOp start*/beg < /*binOp start*/pattern + /*binOp end*//*binOp end*/size);

  if (/*binOp start*/(/*binOp start*/err = kwsprep(kwset/*binOp end*/)) != /*binOp end*/0)
    fatal(err, 0);
}

static char *
Fexecute(buf, size, endp)
     char *buf;
     size_t size;
     char **endp;
{
  register char *beg, *try, *end;
  register size_t len;
  struct kwsmatch kwsmatch;

  for (/*binOp start*/beg = /*binOp end*/buf; /*binOp start*/beg <= /*binOp start*/buf + /*binOp end*//*binOp end*/size; ++beg)
    {
      if (!(/*binOp start*/beg = kwsexec(kwset, beg, /*binOp start*//*binOp start*/buf + /*binOp end*/size - /*binOp end*/beg, &kwsmatch/*binOp end*/)))
 return 0;
      /*compound start*//*binOp start*/len = kwsmatch.size[0/*compound end*//*binOp end*/];
      if (match_lines)
 {
   if (/*binOp start*//*binOp start*/beg > /*binOp end*/buf && /*binOp start*/beg[-1] != /*binOp end*//*binOp end*/'\n')
     continue;
   if (/*binOp start*//*binOp start*//*binOp start*/beg + /*binOp end*/len < /*binOp start*/buf + /*binOp end*//*binOp end*/size && /*binOp start*/beg[len] != /*binOp end*//*binOp end*/'\n')
     continue;
   goto success;
 }
      else if (match_words)
 for (/*binOp start*/try = /*binOp end*/beg; /*binOp start*/len && /*binOp end*/try;)
   {
     if (/*binOp start*//*binOp start*/try > /*binOp end*/buf && (/*binOp start*/(/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) (((unsigned char) try[-1]))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)) || /*binOp start*/((unsigned char) try[-1]) == /*binOp end*//*binOp end*/'_'/*binOp end*/))
       break;
     if (/*binOp start*//*binOp start*//*binOp start*/try + /*binOp end*/len < /*binOp start*/buf + /*binOp end*//*binOp end*/size && (/*binOp start*/(/*binOp start*/1 && (/*binOp start*/(*__ctype_b_loc ())[(int) (((unsigned char) try[len]))] & (unsigned short int) /*binOp end*/_ISalnum/*binOp end*/)) || /*binOp start*/((unsigned char) try[len]) == /*binOp end*//*binOp end*/'_'/*binOp end*/))
       {
  /*compound start*//*binOp start*/try = kwsexec(kwset, beg, --len, &kwsmatch/*compound end*//*binOp end*/);
  /*compound start*//*binOp start*/len = kwsmatch.size[0/*compound end*//*binOp end*/];
       }
     else
       goto success;
   }
      else
 goto success;
    }

  return 0;

 success:
  if (/*binOp start*/(/*binOp start*/end = memchr(/*binOp start*/beg + /*binOp end*/len, '\n', /*binOp start*/(/*binOp start*/buf + /*binOp end*/size) - (/*binOp start*/beg + /*binOp end*/len/*binOp end*/)/*binOp end*/)) != /*binOp end*/0)
    ++end;
  else
    /*binOp start*/end = /*binOp start*/buf + /*binOp end*//*binOp end*/size;
  /*compound start*//*binOp start*/*endp = /*compound end*//*binOp end*/end;
  while (/*binOp start*//*binOp start*/beg > /*binOp end*/buf && /*binOp start*/beg[-1] != /*binOp end*//*binOp end*/'\n')
    --beg;
  return beg;
}
