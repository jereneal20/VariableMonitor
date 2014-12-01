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

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

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
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
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






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


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



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

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
  {_varCheck_(3327,errseen,0,"errseen");errseen = 1;}
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

  {_varCheck_(3350,result,0,"result");result = malloc(size);}
  if (size && !result)
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
    {_varCheck_(3365,result,0,"result");result = realloc(ptr, size);}
  else
    result = malloc(size);
  if (size && !result)
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
      {_varCheck_(3650,initialized,0,"initialized");initialized = 1;}

      {_varCheck_(3652,bufsalloc,0,"bufsalloc");bufsalloc = ((8192) > (getpagesize()) ? (8192) : (getpagesize()));}



      {_varCheck_(3656,bufalloc,0,"bufalloc");bufalloc = 5 * bufsalloc;}



      {_varCheck_(3660,buffer,0,"buffer");buffer = valloc(bufalloc + 1);}
      if (!buffer)
 fatal("memory exhausted", 0);
      {_varCheck_(3663,bufbeg,0,"bufbeg");bufbeg = buffer;}
      {_varCheck_(3664,buflim,0,"buflim");buflim = buffer;}
    }
  {_varCheck_(3666,bufdesc,0,"bufdesc");bufdesc = fd;}

  if (fstat(fd, &bufstat) < 0 || !((((bufstat.st_mode)) & 0170000) == (0100000)))
    {_varCheck_(3669,bufmapped,0,"bufmapped");bufmapped = 0;}
  else
    {
      {_varCheck_(3672,bufmapped,0,"bufmapped");bufmapped = 1;}
      {_varCheck_(3673,bufoffset,0,"bufoffset");bufoffset = lseek(fd, 0, 1);}
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

  if (pagesize == 0 && (pagesize = getpagesize()) == 0)
    abort();

  if (save > bufsalloc)
    {
      while (save > bufsalloc)
 bufsalloc *= 2;
      {_varCheck_(3700,bufalloc,0,"bufalloc");bufalloc = 5 * bufsalloc;}
      {_varCheck_(3701,nbuffer,0,"nbuffer");nbuffer = valloc(bufalloc + 1);}
      if (!nbuffer)
 fatal("memory exhausted", 0);
    }
  else
    nbuffer = buffer;

  {_varCheck_(3708,sp,0,"sp");sp = buflim - save;}
  {_varCheck_(3709,dp,0,"dp");dp = nbuffer + bufsalloc - save;}
  {_varCheck_(3710,bufbeg,0,"bufbeg");bufbeg = dp;}
  while (save--)
    {_varCheck_(3712,dp++,1,"dp++");*dp++ = *sp++;}




  {_varCheck_(3717,buffer,0,"buffer");buffer = nbuffer;}


  if (bufmapped && bufoffset % pagesize == 0
      && bufstat.st_size - bufoffset >= bufalloc - bufsalloc)
    {
      {_varCheck_(3723,maddr,0,"maddr");maddr = buffer + bufsalloc;}
      {_varCheck_(3724,maddr,0,"maddr");maddr = mmap(maddr, bufalloc - bufsalloc, 0x1 | 0x2,
     0x02 | 0x10, bufdesc, bufoffset);}
      if (maddr == (caddr_t) -1)
 {
   fprintf(stdout, "%s: warning: %s: %s\n", filename,
    strerror((*__errno_location ())));
   goto tryread;
 }






      {_varCheck_(3738,cc,0,"cc");cc = bufalloc - bufsalloc;}
      {_varCheck_(3739,bufoffset,0,"bufoffset");bufoffset += cc;}
    }
  else
    {
    tryread:



      if (bufmapped)
 {
   {_varCheck_(3749,bufmapped,0,"bufmapped");bufmapped = 0;}
   lseek(bufdesc, bufoffset, 0);
 }
      {_varCheck_(3752,cc,0,"cc");cc = read(bufdesc, buffer + bufsalloc, bufalloc - bufsalloc);}
    }



  if (cc > 0)
    {_varCheck_(3758,buflim,0,"buflim");buflim = buffer + bufsalloc + cc;}
  else
    buflim = buffer + bufsalloc;
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

  for (beg = lastnl; beg < lim; ++beg)
    if (*beg == '\n')
      ++totalnl;
  {_varCheck_(3791,lastnl,0,"lastnl");lastnl = beg;}
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
      {_varCheck_(3806,lastnl,0,"lastnl");lastnl = lim;}
    }
  if (out_byte)
    printf("%lu%c", totalcc + (beg - bufbeg), sep);
  fwrite(beg, 1, lim - beg, stdout);
  if (ferror(stdout))
    error("writing output", (*__errno_location ()));
  {_varCheck_(3813,lastout,0,"lastout");lastout = lim;}
}


static void
prpending(lim)
     char *lim;
{
  char *nl;

  if (!lastout)
    {_varCheck_(3824,lastout,0,"lastout");lastout = bufbeg;}
  while (pending > 0 && lastout < lim)
    {
      --pending;
      if ((nl = memchr(lastout, '\n', lim - lastout)) != 0)
 ++nl;
      else
 nl = lim;
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

  if (!out_quiet && pending > 0)
    prpending(beg);

  {_varCheck_(3851,p,0,"p");p = beg;}

  if (!out_quiet)
    {


      {_varCheck_(3857,bp,0,"bp");bp = lastout ? lastout : bufbeg;}
      for (i = 0; i < out_before; ++i)
 if (p > bp)
   do
     --p;
   while (p > bp && p[-1] != '\n');



      if ((out_before || out_after) && used && p != lastout)
 puts("--");

      while (p < beg)
 {
   {_varCheck_(3871,nl,0,"nl");nl = memchr(p, '\n', beg - p);}
   prline(p, nl + 1, '-');
   {_varCheck_(3873,p,0,"p");p = nl + 1;}
 }
    }

  if (nlinesp)
    {

      for (n = 0; p < lim; ++n)
 {
   if ((nl = memchr(p, '\n', lim - p)) != 0)
     ++nl;
   else
     nl = lim;
   if (!out_quiet)
     prline(p, nl, ':');
   {_varCheck_(3888,p,0,"p");p = nl;}
 }
      {_varCheck_(3890,nlinesp,1,"nlinesp");*nlinesp = n;}
    }
  else
    if (!out_quiet)
      prline(beg, lim, ':');

  {_varCheck_(3896,pending,0,"pending");pending = out_after;}
  {_varCheck_(3897,used,0,"used");used = 1;}
}




static int
grepbuf(beg, lim)
     char *beg;
     char *lim;
{
  int nlines, n;
  register char *p, *b;
  char *endp;

  {_varCheck_(3912,nlines,0,"nlines");nlines = 0;}
  {_varCheck_(3913,p,0,"p");p = beg;}
  while ((b = (*execute)(p, lim - p, &endp)) != 0)
    {

      if (b == lim && ((b > beg && b[-1] == '\n') || b == beg))
 break;
      if (!out_invert)
 {
   prtext(b, endp, (int *) 0);
   {_varCheck_(3922,nlines,0,"nlines");nlines += 1;}
 }
      else if (p < b)
 {
   prtext(p, b, &n);
   {_varCheck_(3927,nlines,0,"nlines");nlines += n;}
 }
      {_varCheck_(3929,p,0,"p");p = endp;}
    }
  if (out_invert && p < lim)
    {
      prtext(p, lim, &n);
      {_varCheck_(3934,nlines,0,"nlines");nlines += n;}
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

  {_varCheck_(3950,totalcc,0,"totalcc");totalcc = 0;}
  {_varCheck_(3951,lastout,0,"lastout");lastout = 0;}
  {_varCheck_(3952,totalnl,0,"totalnl");totalnl = 0;}
  {_varCheck_(3953,pending,0,"pending");pending = 0;}

  {_varCheck_(3955,nlines,0,"nlines");nlines = 0;}
  {_varCheck_(3956,residue,0,"residue");residue = 0;}
  {_varCheck_(3957,save,0,"save");save = 0;}

  for (;;)
    {
      if (fillbuf(save) < 0)
 {
   error(filename, (*__errno_location ()));
   return nlines;
 }
      {_varCheck_(3966,lastnl,0,"lastnl");lastnl = bufbeg;}
      if (lastout)
 {_varCheck_(3968,lastout,0,"lastout");lastout = bufbeg;}
      if (buflim - bufbeg == save)
 break;
      {_varCheck_(3971,beg,0,"beg");beg = bufbeg + save - residue;}
      for (lim = buflim; lim > beg && lim[-1] != '\n'; --lim)
 ;
      {_varCheck_(3974,residue,0,"residue");residue = buflim - lim;}
      if (beg < lim)
 {
   {_varCheck_(3977,nlines,0,"nlines");nlines += grepbuf(beg, lim);}
   if (pending)
     prpending(lim);
 }
      {_varCheck_(3981,i,0,"i");i = 0;}
      {_varCheck_(3982,beg,0,"beg");beg = lim;}
      while (i < out_before && beg > bufbeg && beg != lastout)
 {
   ++i;
   do
     --beg;
   while (beg > bufbeg && beg[-1] != '\n');
 }
      if (beg != lastout)
 {_varCheck_(3991,lastout,0,"lastout");lastout = 0;}
      {_varCheck_(3992,save,0,"save");save = residue + lim - beg;}
      {_varCheck_(3993,totalcc,0,"totalcc");totalcc += buflim - bufbeg - save;}
      if (out_line)
 nlscan(beg);
    }
  if (residue)
    {
      {_varCheck_(3999,nlines,0,"nlines");nlines += grepbuf(bufbeg + save - residue, buflim);}
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

  for (i = 0; matchers[i].name; ++i)
    if (strcmp(name, matchers[i].name) == 0)
      {
 {_varCheck_(4029,compile,0,"compile");compile = matchers[i].compile;}
 {_varCheck_(4030,execute,0,"execute");execute = matchers[i].execute;}
 return 1;
      }
  return 0;
}

int
main(argc, argv)
     int argc;
     char *argv[];
{
  _monitor_init("target/grep_pre.c");
char *keys;
  size_t keycc, oldcc, keyalloc;
  int keyfound, count_matches, no_filenames, list_files, suppress_errors;
  int opt, cc, desc, count, status;
  FILE *fp;
  extern char *optarg;
  extern int optind;

  {_varCheck_(4049,&argv[0],argv,"&argv[0]");argv[0] = "target";}

  {_varCheck_(4051,prog,0,"prog");prog = argv[0];}
  if (prog && strrchr(prog, '/'))
    {_varCheck_(4053,prog,0,"prog");prog = strrchr(prog, '/') + 1;}

  {_varCheck_(4055,keys,0,"keys");keys = ((void *)0);}
  {_varCheck_(4056,keycc,0,"keycc");keycc = 0;}
  {_varCheck_(4057,keyfound,0,"keyfound");keyfound = 0;}
  {_varCheck_(4058,count_matches,0,"count_matches");count_matches = 0;}
  {_varCheck_(4059,no_filenames,0,"no_filenames");no_filenames = 0;}
  {_varCheck_(4060,list_files,0,"list_files");list_files = 0;}
  {_varCheck_(4061,suppress_errors,0,"suppress_errors");suppress_errors = 0;}
  {_varCheck_(4062,matcher,0,"matcher");matcher = ((void *)0);}

  while ((opt = getopt(argc, argv, "0123456789A:B:CEFGVX:bce:f:hiLlnqsvwxy"))
  != (-1))
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
 {_varCheck_(4078,out_before,0,"out_before");out_before = 10 * out_before + opt - '0';}
 {_varCheck_(4079,out_after,0,"out_after");out_after = 10 * out_after + opt - '0';}
 break;
      case 'A':
 {_varCheck_(4082,out_after,0,"out_after");out_after = atoi(optarg);}
 if (out_after < 0)
   usage();
 break;
      case 'B':
 {_varCheck_(4087,out_before,0,"out_before");out_before = atoi(optarg);}
 if (out_before < 0)
   usage();
 break;
      case 'C':
 {_varCheck_(4092,out_before,0,"out_before");out_before = out_after = 2;}
 break;
      case 'E':
 if (matcher && strcmp(matcher, "egrep") != 0)
   fatal("you may specify only one of -E, -F, or -G", 0);
 {_varCheck_(4097,matcher,0,"matcher");matcher = "posix-egrep";}
 break;
      case 'F':
 if (matcher && strcmp(matcher, "fgrep") != 0)
   fatal("you may specify only one of -E, -F, or -G", 0);;
 {_varCheck_(4102,matcher,0,"matcher");matcher = "fgrep";}
 break;
      case 'G':
 if (matcher && strcmp(matcher, "grep") != 0)
   fatal("you may specify only one of -E, -F, or -G", 0);
 {_varCheck_(4107,matcher,0,"matcher");matcher = "grep";}
 break;
      case 'V':
 fprintf(stdout, "%s\n", version);
 break;
      case 'X':
 if (matcher)
   fatal("matcher already specified", 0);
 {_varCheck_(4115,matcher,0,"matcher");matcher = optarg;}
 break;
      case 'b':
 {_varCheck_(4118,out_byte,0,"out_byte");out_byte = 1;}
 break;
      case 'c':
 {_varCheck_(4121,out_quiet,0,"out_quiet");out_quiet = 1;}
 {_varCheck_(4122,count_matches,0,"count_matches");count_matches = 1;}
 break;
      case 'e':
 {_varCheck_(4125,cc,0,"cc");cc = strlen(optarg);}
 {_varCheck_(4126,keys,0,"keys");keys = xrealloc(keys, keycc + cc + 1);}
 if (keyfound)
   {_varCheck_(4128,&keys[keycc++],keys,"&keys[keycc++]");keys[keycc++] = '\n';}
 strcpy(&keys[keycc], optarg);
 {_varCheck_(4130,keycc,0,"keycc");keycc += cc;}
 {_varCheck_(4131,keyfound,0,"keyfound");keyfound = 1;}
 break;
      case 'f':
 {_varCheck_(4134,fp,0,"fp");fp = strcmp(optarg, "-") != 0 ? fopen(optarg, "r") : stdin;}
 if (!fp)
   fatal(optarg, (*__errno_location ()));
 for (keyalloc = 1; keyalloc <= keycc; keyalloc *= 2)
   ;
 {_varCheck_(4139,keys,0,"keys");keys = xrealloc(keys, keyalloc);}
 {_varCheck_(4140,oldcc,0,"oldcc");oldcc = keycc;}
 if (keyfound)
   {_varCheck_(4142,&keys[keycc++],keys,"&keys[keycc++]");keys[keycc++] = '\n';}
 while (!feof(fp)
        && (cc = fread(keys + keycc, 1, keyalloc - keycc, fp)) > 0)
   {
     {_varCheck_(4146,keycc,0,"keycc");keycc += cc;}
     if (keycc == keyalloc)
       {_varCheck_(4148,keys,0,"keys");keys = xrealloc(keys, keyalloc *= 2);}
   }
 if (fp != stdin)
   fclose(fp);

 if (keycc - oldcc > 0 && keys[keycc - 1] == '\n')
   --keycc;
 {_varCheck_(4155,keyfound,0,"keyfound");keyfound = 1;}
 break;
      case 'h':
 {_varCheck_(4158,no_filenames,0,"no_filenames");no_filenames = 1;}
 break;
      case 'i':
      case 'y':
 {_varCheck_(4162,match_icase,0,"match_icase");match_icase = 1;}
 break;
      case 'L':


 {_varCheck_(4167,out_quiet,0,"out_quiet");out_quiet = 1;}
 {_varCheck_(4168,list_files,0,"list_files");list_files = -1;}
 break;
      case 'l':
 {_varCheck_(4171,out_quiet,0,"out_quiet");out_quiet = 1;}
 {_varCheck_(4172,list_files,0,"list_files");list_files = 1;}
 break;
      case 'n':
 {_varCheck_(4175,out_line,0,"out_line");out_line = 1;}
 break;
      case 'q':
 {_varCheck_(4178,out_quiet,0,"out_quiet");out_quiet = 1;}
 break;
      case 's':
 {_varCheck_(4181,suppress_errors,0,"suppress_errors");suppress_errors = 1;}
 break;
      case 'v':
 {_varCheck_(4184,out_invert,0,"out_invert");out_invert = 1;}
 break;
      case 'w':
 {_varCheck_(4187,match_words,0,"match_words");match_words = 1;}
 break;
      case 'x':
 {_varCheck_(4190,match_lines,0,"match_lines");match_lines = 1;}
 break;
      default:
 usage();
 break;
      }

  if (!keyfound)
    if (optind < argc)
      {
 {_varCheck_(4200,keys,0,"keys");keys = argv[optind++];}
 {_varCheck_(4201,keycc,0,"keycc");keycc = strlen(keys);}
      }
    else
      usage();

  if (!matcher)
    {_varCheck_(4207,matcher,0,"matcher");matcher = prog;}

  if (!setmatcher(matcher) && !setmatcher("default"))
    abort();

  (*compile)(keys, keycc);

  if (argc - optind > 1 && !no_filenames)
    {_varCheck_(4215,out_file,0,"out_file");out_file = 1;}

  {_varCheck_(4217,status,0,"status");status = 1;}

  if (optind < argc)
    while (optind < argc)
      {
 {_varCheck_(4222,desc,0,"desc");desc = strcmp(argv[optind], "-") ? open(argv[optind], 00) : 0;}
 if (desc < 0)
   {
     if (!suppress_errors)
       error(argv[optind], (*__errno_location ()));
   }
 else
   {
     {_varCheck_(4230,filename,0,"filename");filename = desc == 0 ? "(standard input)" : argv[optind];}
     {_varCheck_(4231,count,0,"count");count = grep(desc);}
     if (count_matches)
       {
  if (out_file)
    printf("%s:", filename);
  printf("%d\n", count);
       }
     if (count)
       {
  {_varCheck_(4240,status,0,"status");status = 0;}
  if (list_files == 1)
    printf("%s\n", filename);
       }
     else if (list_files == -1)
       printf("%s\n", filename);
   }
 if (desc != 0)
   close(desc);
 ++optind;
      }
  else
    {
      {_varCheck_(4253,filename,0,"filename");filename = "(standard input)";}
      {_varCheck_(4254,count,0,"count");count = grep(0);}
      if (count_matches)
 printf("%d\n", count);
      if (count)
 {
   {_varCheck_(4259,status,0,"status");status = 0;}
   if (list_files == 1)
     printf("(standard input)\n");
 }
      else if (list_files == -1)
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

   for (c = 'a'; c <= 'z'; c++)
     {_varCheck_(4284,&re_syntax_table[c],re_syntax_table,"&re_syntax_table[c]");re_syntax_table[c] = 1;}

   for (c = 'A'; c <= 'Z'; c++)
     {_varCheck_(4287,&re_syntax_table[c],re_syntax_table,"&re_syntax_table[c]");re_syntax_table[c] = 1;}

   for (c = '0'; c <= '9'; c++)
     {_varCheck_(4290,&re_syntax_table[c],re_syntax_table,"&re_syntax_table[c]");re_syntax_table[c] = 1;}

   {_varCheck_(4292,&re_syntax_table['_'],re_syntax_table,"&re_syntax_table['_']");re_syntax_table['_'] = 1;}

   {_varCheck_(4294,done,0,"done");done = 1;}
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
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
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

  {_varCheck_(4695,re_syntax_options,0,"re_syntax_options");re_syntax_options = syntax;}
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
  const char *pend = pattern + size;


  char *translate = bufp->translate;





  unsigned char *pending_exact = 0;




  unsigned char *laststart = 0;


  unsigned char *begalt;



  const char *beg_interval;




  unsigned char *fixup_alt_jump = 0;




  regnum_t regnum = 0;
# 2781 "target/grep.c"
  {_varCheck_(4812,compile_stack.stack,0,"compile_stack.stack");compile_stack.stack = ((compile_stack_elt_t *) malloc ((32) * sizeof (compile_stack_elt_t)));}
  if (compile_stack.stack == ((void *)0))
    return REG_ESPACE;

  {_varCheck_(4816,compile_stack.size,0,"compile_stack.size");compile_stack.size = 32;}
  {_varCheck_(4817,compile_stack.avail,0,"compile_stack.avail");compile_stack.avail = 0;}


  {_varCheck_(4820,bufp->syntax,0,"bufp->syntax");bufp->syntax = syntax;}
  {_varCheck_(4821,bufp->fastmap_accurate,0,"bufp->fastmap_accurate");bufp->fastmap_accurate = 0;}
  {_varCheck_(4822,bufp->not_bol,0,"bufp->not_bol");bufp->not_bol = bufp->not_eol = 0;}




  {_varCheck_(4827,bufp->used,0,"bufp->used");bufp->used = 0;}


  {_varCheck_(4830,bufp->re_nsub,0,"bufp->re_nsub");bufp->re_nsub = 0;}



   init_syntax_once ();


  if (bufp->allocated == 0)
    {
      if (bufp->buffer)
 {


          ((bufp->buffer) = (unsigned char *) realloc (bufp->buffer, (32) * sizeof (unsigned char)));
        }
      else
        {
          {_varCheck_(4847,bufp->buffer,0,"bufp->buffer");bufp->buffer = ((unsigned char *) malloc ((32) * sizeof (unsigned char)));}
        }
      if (!bufp->buffer) return REG_ESPACE;

      {_varCheck_(4851,bufp->allocated,0,"bufp->allocated");bufp->allocated = 32;}
    }

  {_varCheck_(4854,begalt,0,"begalt");begalt = b = bufp->buffer;}


  while (p != pend)
    {
      do {if (p == pend) return REG_EEND; {_varCheck_(4859,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(4859,c,0,"c");c = translate[c];} } while (0);

      switch (c)
        {
        case '^':
          {
            if (
                   p == pattern + 1

                || syntax & ((((1) << 1) << 1) << 1)

                || at_begline_loc_p (pattern, p, syntax))
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(4871,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(4871,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(4871,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(4871,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(4871,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(4871,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(4871,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(4871,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(4871,b++,1,"b++");*b++ = (unsigned char) (begline);} } while (0);
            else
              goto normal_char;
          }
          break;


        case '$':
          {
            if (
                   p == pend

                || syntax & ((((1) << 1) << 1) << 1)

                || at_endline_loc_p (p, pend, syntax))
               do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(4886,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(4886,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(4886,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(4886,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(4886,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(4886,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(4886,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(4886,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(4886,b++,1,"b++");*b++ = (unsigned char) (endline);} } while (0);
             else
               goto normal_char;
           }
           break;


 case '+':
        case '?':
          if ((syntax & ((1) << 1))
              || (syntax & (((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            goto normal_char;
        handle_plus:
        case '*':

          if (!laststart)
            {
              if (syntax & ((((((1) << 1) << 1) << 1) << 1) << 1))
                return REG_BADRPT;
              else if (!(syntax & (((((1) << 1) << 1) << 1) << 1)))
                goto normal_char;
            }

          {

            boolean keep_string_p = 0;


            char zero_times_ok = 0, many_times_ok = 0;






            for (;;)
              {
                {_varCheck_(4923,zero_times_ok,0,"zero_times_ok");zero_times_ok |= c != '+';}
                {_varCheck_(4924,many_times_ok,0,"many_times_ok");many_times_ok |= c != '?';}

                if (p == pend)
                  break;

                do {if (p == pend) return REG_EEND; {_varCheck_(4929,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(4929,c,0,"c");c = translate[c];} } while (0);

                if (c == '*'
                    || (!(syntax & ((1) << 1)) && (c == '+' || c == '?')))
                  ;

                else if (syntax & ((1) << 1) && c == '\\')
                  {
                    if (p == pend) return REG_EESCAPE;

                    do {if (p == pend) return REG_EEND; {_varCheck_(4939,c1,0,"c1");c1 = (unsigned char) *p++;} if (translate) {_varCheck_(4939,c1,0,"c1");c1 = translate[c1];} } while (0);
                    if (!(c1 == '+' || c1 == '?'))
                      {
                        p--;
                        p--;
                        break;
                      }

                    {_varCheck_(4947,c,0,"c");c = c1;}
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


                while (b - bufp->buffer + (3) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(4971,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(4971,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(4971,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(4971,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(4971,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(4971,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(4971,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(4971,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0);






                if ((translate ? translate[(unsigned char) (*(p - 2))] : (*(p - 2))) == (translate ? translate[(unsigned char) ('.')] : ('.'))
      && zero_times_ok
                    && p < pend && (translate ? translate[(unsigned char) (*p)] : (*p)) == (translate ? translate[(unsigned char) ('\n')] : ('\n'))
                    && !(syntax & (((((((1) << 1) << 1) << 1) << 1) << 1) << 1)))
                  {
                    store_op1 (jump, b, (laststart) - (b) - 3);
                    {_varCheck_(4984,keep_string_p,0,"keep_string_p");keep_string_p = 1;}
                  }
                else

                  store_op1 (maybe_pop_jump, b, (laststart - 3) - (b) - 3);


                {_varCheck_(4991,b,0,"b");b += 3;}
              }



            while (b - bufp->buffer + (3) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(4996,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(4996,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(4996,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(4996,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(4996,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(4996,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(4996,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(4996,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0);
            insert_op1 (keep_string_p ? on_failure_keep_string_jump : on_failure_jump, laststart, (b + 3) - (laststart) - 3, b);


            {_varCheck_(5000,pending_exact,0,"pending_exact");pending_exact = 0;}
            {_varCheck_(5001,b,0,"b");b += 3;}

            if (!zero_times_ok)
              {





                while (b - bufp->buffer + (3) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5010,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5010,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5010,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5010,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5010,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5010,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5010,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5010,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0);
                insert_op1 (dummy_failure_jump, laststart, (laststart + 6) - (laststart) - 3, b);
                {_varCheck_(5012,b,0,"b");b += 3;}
              }
            }
   break;


 case '.':
          {_varCheck_(5019,laststart,0,"laststart");laststart = b;}
          do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5020,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5020,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5020,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5020,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5020,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5020,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5020,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5020,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5020,b++,1,"b++");*b++ = (unsigned char) (anychar);} } while (0);
          break;


        case '[':
          {
            boolean had_char_class = 0;

            if (p == pend) return REG_EBRACK;



     while (b - bufp->buffer + (34) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5032,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5032,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5032,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5032,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5032,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5032,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5032,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5032,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0);

            {_varCheck_(5034,laststart,0,"laststart");laststart = b;}



            do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5038,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5038,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5038,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5038,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5038,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5038,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5038,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5038,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5038,b++,1,"b++");*b++ = (unsigned char) (*p == '^' ? charset_not : charset);} } while (0);
            if (*p == '^')
              p++;


            {_varCheck_(5043,p1,0,"p1");p1 = p;}


            do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5046,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5046,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5046,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5046,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5046,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5046,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5046,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5046,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5046,b++,1,"b++");*b++ = (unsigned char) ((1 << 8) / 8);} } while (0);


            memset ((b), 0, ((1 << 8) / 8));


            if ((re_opcode_t) b[-2] == charset_not
                && (syntax & (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
              (b[((unsigned char) ('\n')) / 8] |= 1 << (((unsigned char) '\n') % 8));


            for (;;)
              {
                if (p == pend) return REG_EBRACK;

                do {if (p == pend) return REG_EEND; {_varCheck_(5061,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5061,c,0,"c");c = translate[c];} } while (0);


                if ((syntax & (1)) && c == '\\')
                  {
                    if (p == pend) return REG_EESCAPE;

                    do {if (p == pend) return REG_EEND; {_varCheck_(5068,c1,0,"c1");c1 = (unsigned char) *p++;} if (translate) {_varCheck_(5068,c1,0,"c1");c1 = translate[c1];} } while (0);
                    (b[((unsigned char) (c1)) / 8] |= 1 << (((unsigned char) c1) % 8));
                    continue;
                  }




                if (c == ']' && p != p1 + 1)
                  break;



                if (had_char_class && c == '-' && *p != ']')
                  return REG_ERANGE;





                if (c == '-'
                    && !(p - 2 >= pattern && p[-2] == '[')
                    && !(p - 3 >= pattern && p[-3] == '[' && p[-2] == '^')
                    && *p != ']')
                  {
                    reg_errcode_t ret
                      = compile_range (&p, pend, translate, syntax, b);
                    if (ret != REG_NOERROR) return ret;
                  }

                else if (p[0] == '-' && p[1] != ']')
                  {
                    reg_errcode_t ret;


                    do {if (p == pend) return REG_EEND; {_varCheck_(5103,c1,0,"c1");c1 = (unsigned char) *p++;} if (translate) {_varCheck_(5103,c1,0,"c1");c1 = translate[c1];} } while (0);

                    {_varCheck_(5105,ret,0,"ret");ret = compile_range (&p, pend, translate, syntax, b);}
                    if (ret != REG_NOERROR) return ret;
                  }




                else if (syntax & (((1) << 1) << 1) && c == '[' && *p == ':')
                  {
                    char str[6 + 1];

                    do {if (p == pend) return REG_EEND; {_varCheck_(5116,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5116,c,0,"c");c = translate[c];} } while (0);
                    {_varCheck_(5117,c1,0,"c1");c1 = 0;}


                    if (p == pend) return REG_EBRACK;

                    for (;;)
                      {
                        do {if (p == pend) return REG_EEND; {_varCheck_(5124,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5124,c,0,"c");c = translate[c];} } while (0);
                        if (c == ':' || c == ']' || p == pend
                            || c1 == 6)
                          break;
                        {_varCheck_(5128,&str[c1++],str,"&str[c1++]");str[c1++] = c;}
                      }
                    {_varCheck_(5130,&str[c1],str,"&str[c1]");str[c1] = '\0';}




                    if (c == ':' && *p == ']')
                      {
                        int ch;
                        boolean is_alnum = ((strcmp (str, "alnum") == 0));
                        boolean is_alpha = ((strcmp (str, "alpha") == 0));
                        boolean is_blank = ((strcmp (str, "blank") == 0));
                        boolean is_cntrl = ((strcmp (str, "cntrl") == 0));
                        boolean is_digit = ((strcmp (str, "digit") == 0));
                        boolean is_graph = ((strcmp (str, "graph") == 0));
                        boolean is_lower = ((strcmp (str, "lower") == 0));
                        boolean is_print = ((strcmp (str, "print") == 0));
                        boolean is_punct = ((strcmp (str, "punct") == 0));
                        boolean is_space = ((strcmp (str, "space") == 0));
                        boolean is_upper = ((strcmp (str, "upper") == 0));
                        boolean is_xdigit = ((strcmp (str, "xdigit") == 0));

                        if (!(((strcmp (str, "alpha") == 0)) || ((strcmp (str, "upper") == 0)) || ((strcmp (str, "lower") == 0)) || ((strcmp (str, "digit") == 0)) || ((strcmp (str, "alnum") == 0)) || ((strcmp (str, "xdigit") == 0)) || ((strcmp (str, "space") == 0)) || ((strcmp (str, "print") == 0)) || ((strcmp (str, "punct") == 0)) || ((strcmp (str, "graph") == 0)) || ((strcmp (str, "cntrl") == 0)) || ((strcmp (str, "blank") == 0)))) return REG_ECTYPE;



                        do {if (p == pend) return REG_EEND; {_varCheck_(5155,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5155,c,0,"c");c = translate[c];} } while (0);

                        if (p == pend) return REG_EBRACK;

                        for (ch = 0; ch < 1 << 8; ch++)
                          {
                            if ( (is_alnum && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISalnum)))
                                || (is_alpha && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISalpha)))
                                || (is_blank && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISblank)))
                                || (is_cntrl && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _IScntrl)))
                                || (is_digit && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISdigit)))
                                || (is_graph && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISgraph)))
                                || (is_lower && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISlower)))
                                || (is_print && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISprint)))
                                || (is_punct && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISpunct)))
                                || (is_space && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISspace)))
                                || (is_upper && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISupper)))
                                || (is_xdigit && (1 && ((*__ctype_b_loc ())[(int) ((ch))] & (unsigned short int) _ISxdigit))))
                            (b[((unsigned char) (ch)) / 8] |= 1 << (((unsigned char) ch) % 8));
                          }
                        {_varCheck_(5175,had_char_class,0,"had_char_class");had_char_class = 1;}
                      }
                    else
                      {
                        c1++;
                        while (c1--)
                          p--;
                        (b[((unsigned char) ('[')) / 8] |= 1 << (((unsigned char) '[') % 8));
                        (b[((unsigned char) (':')) / 8] |= 1 << (((unsigned char) ':') % 8));
                        {_varCheck_(5184,had_char_class,0,"had_char_class");had_char_class = 0;}
                      }
                  }
                else
                  {
                    {_varCheck_(5189,had_char_class,0,"had_char_class");had_char_class = 0;}
                    (b[((unsigned char) (c)) / 8] |= 1 << (((unsigned char) c) % 8));
                  }
              }



            while ((int) b[-1] > 0 && b[b[-1] - 1] == 0)
              b[-1]--;
            {_varCheck_(5198,b,0,"b");b += b[-1];}
          }
          break;


 case '(':
          if (syntax & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto handle_open;
          else
            goto normal_char;


        case ')':
          if (syntax & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto handle_close;
          else
            goto normal_char;


        case '\n':
          if (syntax & ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto handle_alt;
          else
            goto normal_char;


 case '|':
          if (syntax & ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto handle_alt;
          else
            goto normal_char;


        case '{':
           if (syntax & ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) && syntax & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
             goto handle_interval;
           else
             goto normal_char;


        case '\\':
          if (p == pend) return REG_EESCAPE;




          do {if (p == pend) return REG_EEND; {_varCheck_(5244,c,0,"c");c = (unsigned char) *p++;} } while (0);

          switch (c)
            {
            case '(':
              if (syntax & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                goto normal_backslash;

            handle_open:
              bufp->re_nsub++;
              regnum++;

              if ((compile_stack.avail == compile_stack.size))
                {
                  ((compile_stack.stack) = (compile_stack_elt_t *) realloc (compile_stack.stack, (compile_stack.size << 1) * sizeof (compile_stack_elt_t)));

                  if (compile_stack.stack == ((void *)0)) return REG_ESPACE;

                  {_varCheck_(5262,compile_stack.size,0,"compile_stack.size");compile_stack.size <<= 1;}
                }





              {_varCheck_(5269,&(compile_stack.stack[compile_stack.avail]).begalt_offset,(compile_stack.stack).begalt_offset,"&(compile_stack.stack[compile_stack.avail]).begalt_offset");(compile_stack.stack[compile_stack.avail]).begalt_offset = begalt - bufp->buffer;}
              {_varCheck_(5270,&(compile_stack.stack[compile_stack.avail]).fixup_alt_jump,(compile_stack.stack).fixup_alt_jump,"&(compile_stack.stack[compile_stack.avail]).fixup_alt_jump");(compile_stack.stack[compile_stack.avail]).fixup_alt_jump
                = fixup_alt_jump ? fixup_alt_jump - bufp->buffer + 1 : 0;}
              {_varCheck_(5272,&(compile_stack.stack[compile_stack.avail]).laststart_offset,(compile_stack.stack).laststart_offset,"&(compile_stack.stack[compile_stack.avail]).laststart_offset");(compile_stack.stack[compile_stack.avail]).laststart_offset = b - bufp->buffer;}
              {_varCheck_(5273,&(compile_stack.stack[compile_stack.avail]).regnum,(compile_stack.stack).regnum,"&(compile_stack.stack[compile_stack.avail]).regnum");(compile_stack.stack[compile_stack.avail]).regnum = regnum;}





              if (regnum <= 255)
                {
                  {_varCheck_(5281,&(compile_stack.stack[compile_stack.avail]).inner_group_offset,(compile_stack.stack).inner_group_offset,"&(compile_stack.stack[compile_stack.avail]).inner_group_offset");(compile_stack.stack[compile_stack.avail]).inner_group_offset = b - bufp->buffer + 2;}
                  do { while (b - bufp->buffer + (3) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5282,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5282,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5282,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5282,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5282,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5282,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5282,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5282,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5282,b++,1,"b++");*b++ = (unsigned char) (start_memory);} {_varCheck_(5282,b++,1,"b++");*b++ = (unsigned char) (regnum);} {_varCheck_(5282,b++,1,"b++");*b++ = (unsigned char) (0);} } while (0);
                }

              compile_stack.avail++;

              {_varCheck_(5287,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = 0;}
              {_varCheck_(5288,laststart,0,"laststart");laststart = 0;}
              {_varCheck_(5289,begalt,0,"begalt");begalt = b;}



       {_varCheck_(5293,pending_exact,0,"pending_exact");pending_exact = 0;}
              break;


            case ')':
              if (syntax & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) goto normal_backslash;

              if ((compile_stack.avail == 0))
                if (syntax & ((((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                  goto normal_backslash;
                else
                  return REG_ERPAREN;

            handle_close:
              if (fixup_alt_jump)
                {



                  do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5312,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5312,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5312,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5312,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5312,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5312,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5312,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5312,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5312,b++,1,"b++");*b++ = (unsigned char) (push_dummy_failure);} } while (0);



                  store_op1 (jump_past_alt, fixup_alt_jump, (b - 1) - (fixup_alt_jump) - 3);
                }


              if ((compile_stack.avail == 0))
                if (syntax & ((((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                  goto normal_char;
                else
                  return REG_ERPAREN;



              ;
              {



                regnum_t this_group_regnum;

                compile_stack.avail--;
                {_varCheck_(5336,begalt,0,"begalt");begalt = bufp->buffer + (compile_stack.stack[compile_stack.avail]).begalt_offset;}
                {_varCheck_(5337,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump
                  = (compile_stack.stack[compile_stack.avail]).fixup_alt_jump
                    ? bufp->buffer + (compile_stack.stack[compile_stack.avail]).fixup_alt_jump - 1
                    : 0;}
                {_varCheck_(5341,laststart,0,"laststart");laststart = bufp->buffer + (compile_stack.stack[compile_stack.avail]).laststart_offset;}
                {_varCheck_(5342,this_group_regnum,0,"this_group_regnum");this_group_regnum = (compile_stack.stack[compile_stack.avail]).regnum;}



  {_varCheck_(5346,pending_exact,0,"pending_exact");pending_exact = 0;}



                if (this_group_regnum <= 255)
                  {
                    unsigned char *inner_group_loc
                      = bufp->buffer + (compile_stack.stack[compile_stack.avail]).inner_group_offset;

                    {_varCheck_(5355,inner_group_loc,1,"inner_group_loc");*inner_group_loc = regnum - this_group_regnum;}
                    do { while (b - bufp->buffer + (3) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5356,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5356,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5356,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5356,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5356,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5356,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5356,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5356,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5356,b++,1,"b++");*b++ = (unsigned char) (stop_memory);} {_varCheck_(5356,b++,1,"b++");*b++ = (unsigned char) (this_group_regnum);} {_varCheck_(5356,b++,1,"b++");*b++ = (unsigned char) (regnum - this_group_regnum);} } while (0);

                  }
              }
              break;


            case '|':
              if (syntax & (((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) || syntax & ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                goto normal_backslash;
            handle_alt:
              if (syntax & (((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                goto normal_char;



              while (b - bufp->buffer + (3) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5372,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5372,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5372,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5372,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5372,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5372,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5372,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5372,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0);
              insert_op1 (on_failure_jump, begalt, (b + 6) - (begalt) - 3, b);
              {_varCheck_(5374,pending_exact,0,"pending_exact");pending_exact = 0;}
              {_varCheck_(5375,b,0,"b");b += 3;}
# 3370 "target/grep.c"
              if (fixup_alt_jump)
                store_op1 (jump_past_alt, fixup_alt_jump, (b) - (fixup_alt_jump) - 3);




              {_varCheck_(5383,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = b;}
              while (b - bufp->buffer + (3) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5384,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5384,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5384,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5384,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5384,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5384,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5384,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5384,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0);
              {_varCheck_(5385,b,0,"b");b += 3;}

              {_varCheck_(5387,laststart,0,"laststart");laststart = 0;}
              {_varCheck_(5388,begalt,0,"begalt");begalt = b;}
              break;


            case '{':

              if (!(syntax & ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))


                  || ((syntax & ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) && (syntax & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                  || (p - 2 == pattern && p == pend))
                goto normal_backslash;

            handle_interval:
              {



                int lower_bound = -1, upper_bound = -1;

                {_varCheck_(5408,beg_interval,0,"beg_interval");beg_interval = p - 1;}

                if (p == pend)
                  {
                    if (syntax & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                      goto unfetch_interval;
                    else
                      return REG_EBRACE;
                  }

                { if (p != pend) { do {if (p == pend) return REG_EEND; {_varCheck_(5418,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5418,c,0,"c");c = translate[c];} } while (0); while ((1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit))) { if (lower_bound < 0) {_varCheck_(5418,lower_bound,0,"lower_bound");lower_bound = 0;} {_varCheck_(5418,lower_bound,0,"lower_bound");lower_bound = lower_bound * 10 + c - '0';} if (p == pend) break; do {if (p == pend) return REG_EEND; {_varCheck_(5418,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5418,c,0,"c");c = translate[c];} } while (0); } } };

                if (c == ',')
                  {
                    { if (p != pend) { do {if (p == pend) return REG_EEND; {_varCheck_(5422,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5422,c,0,"c");c = translate[c];} } while (0); while ((1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit))) { if (upper_bound < 0) {_varCheck_(5422,upper_bound,0,"upper_bound");upper_bound = 0;} {_varCheck_(5422,upper_bound,0,"upper_bound");upper_bound = upper_bound * 10 + c - '0';} if (p == pend) break; do {if (p == pend) return REG_EEND; {_varCheck_(5422,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5422,c,0,"c");c = translate[c];} } while (0); } } };
                    if (upper_bound < 0) {_varCheck_(5423,upper_bound,0,"upper_bound");upper_bound = ((1 << 15) - 1);}
                  }
                else

                  upper_bound = lower_bound;

                if (lower_bound < 0 || upper_bound > ((1 << 15) - 1)
                    || lower_bound > upper_bound)
                  {
                    if (syntax & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                      goto unfetch_interval;
                    else
                      return REG_BADBR;
                  }

                if (!(syntax & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                  {
                    if (c != '\\') return REG_EBRACE;

                    do {if (p == pend) return REG_EEND; {_varCheck_(5442,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5442,c,0,"c");c = translate[c];} } while (0);
                  }

                if (c != '}')
                  {
                    if (syntax & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                      goto unfetch_interval;
                    else
                      return REG_BADBR;
                  }




                if (!laststart)
                  {
                    if (syntax & ((((((1) << 1) << 1) << 1) << 1) << 1))
                      return REG_BADRPT;
                    else if (syntax & (((((1) << 1) << 1) << 1) << 1))
                      {_varCheck_(5461,laststart,0,"laststart");laststart = b;}
                    else
                      goto unfetch_interval;
                  }




                 if (upper_bound == 0)
                   {
                     while (b - bufp->buffer + (3) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5471,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5471,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5471,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5471,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5471,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5471,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5471,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5471,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0);
                     insert_op1 (jump, laststart, (b + 3) - (laststart) - 3, b);
                     {_varCheck_(5473,b,0,"b");b += 3;}
                   }
# 3478 "target/grep.c"
                 else
                   {

                     unsigned nbytes = 10 + (upper_bound > 1) * 10;

                     while (b - bufp->buffer + (nbytes) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5481,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5481,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5481,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5481,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5481,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5481,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5481,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5481,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0);






                     insert_op2 (succeed_n, laststart, (b + 5 + (upper_bound > 1) * 5) - (laststart) - 3, lower_bound, b);


                     {_varCheck_(5491,b,0,"b");b += 5;}





                     insert_op2 (set_number_at, laststart, 5, lower_bound, b);
                     {_varCheck_(5498,b,0,"b");b += 5;}

                     if (upper_bound > 1)
                       {






                         store_op2 (jump_n, b, (laststart + 5) - (b) - 3, upper_bound - 1);

                         {_varCheck_(5510,b,0,"b");b += 5;}
# 3528 "target/grep.c"
                         insert_op2 (set_number_at, laststart, b - laststart,
                                     upper_bound - 1, b);
                         {_varCheck_(5514,b,0,"b");b += 5;}
                       }
                   }
                {_varCheck_(5517,pending_exact,0,"pending_exact");pending_exact = 0;}
                {_varCheck_(5518,beg_interval,0,"beg_interval");beg_interval = ((void *)0);}
              }
              break;

            unfetch_interval:

               ;
               {_varCheck_(5525,p,0,"p");p = beg_interval;}
               {_varCheck_(5526,beg_interval,0,"beg_interval");beg_interval = ((void *)0);}


               do {if (p == pend) return REG_EEND; {_varCheck_(5529,c,0,"c");c = (unsigned char) *p++;} if (translate) {_varCheck_(5529,c,0,"c");c = translate[c];} } while (0);

               if (!(syntax & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                 {
                   if (p > pattern && p[-1] == '\\')
                     goto normal_backslash;
                 }
               goto normal_char;
# 3575 "target/grep.c"
            case 'w':
              {_varCheck_(5539,laststart,0,"laststart");laststart = b;}
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5540,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5540,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5540,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5540,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5540,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5540,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5540,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5540,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5540,b++,1,"b++");*b++ = (unsigned char) (wordchar);} } while (0);
              break;


            case 'W':
              {_varCheck_(5545,laststart,0,"laststart");laststart = b;}
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5546,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5546,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5546,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5546,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5546,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5546,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5546,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5546,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5546,b++,1,"b++");*b++ = (unsigned char) (notwordchar);} } while (0);
              break;


            case '<':
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5551,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5551,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5551,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5551,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5551,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5551,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5551,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5551,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5551,b++,1,"b++");*b++ = (unsigned char) (wordbeg);} } while (0);
              break;

            case '>':
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5555,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5555,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5555,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5555,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5555,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5555,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5555,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5555,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5555,b++,1,"b++");*b++ = (unsigned char) (wordend);} } while (0);
              break;

            case 'b':
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5559,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5559,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5559,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5559,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5559,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5559,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5559,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5559,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5559,b++,1,"b++");*b++ = (unsigned char) (wordbound);} } while (0);
              break;

            case 'B':
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5563,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5563,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5563,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5563,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5563,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5563,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5563,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5563,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5563,b++,1,"b++");*b++ = (unsigned char) (notwordbound);} } while (0);
              break;

            case '`':
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5567,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5567,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5567,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5567,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5567,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5567,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5567,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5567,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5567,b++,1,"b++");*b++ = (unsigned char) (begbuf);} } while (0);
              break;

            case '\'':
              do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5571,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5571,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5571,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5571,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5571,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5571,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5571,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5571,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5571,b++,1,"b++");*b++ = (unsigned char) (endbuf);} } while (0);
              break;

            case '1': case '2': case '3': case '4': case '5':
            case '6': case '7': case '8': case '9':
              if (syntax & (((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                goto normal_char;

              {_varCheck_(5579,c1,0,"c1");c1 = c - '0';}

              if (c1 > regnum)
                return REG_ESUBREG;


              if (group_in_compile_stack (compile_stack, c1))
                goto normal_char;

              {_varCheck_(5588,laststart,0,"laststart");laststart = b;}
              do { while (b - bufp->buffer + (2) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5589,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5589,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5589,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5589,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5589,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5589,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5589,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5589,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5589,b++,1,"b++");*b++ = (unsigned char) (duplicate);} {_varCheck_(5589,b++,1,"b++");*b++ = (unsigned char) (c1);} } while (0);
              break;


            case '+':
            case '?':
              if (syntax & ((1) << 1))
                goto handle_plus;
              else
                goto normal_backslash;

            default:
            normal_backslash:



              c = (translate ? translate[(unsigned char) (c)] : (c));
              goto normal_char;
            }
          break;


 default:

 normal_char:

          if (!pending_exact


              || pending_exact + *pending_exact + 1 != b


       || *pending_exact == (1 << 8) - 1


              || *p == '*' || *p == '^'
       || ((syntax & ((1) << 1))
    ? *p == '\\' && (p[1] == '+' || p[1] == '?')
    : (*p == '+' || *p == '?'))
       || ((syntax & ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                  && ((syntax & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        ? *p == '{'
                      : (p[0] == '\\' && p[1] == '{'))))
     {


              {_varCheck_(5635,laststart,0,"laststart");laststart = b;}

       do { while (b - bufp->buffer + (2) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5637,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5637,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5637,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5637,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5637,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5637,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5637,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5637,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5637,b++,1,"b++");*b++ = (unsigned char) (exactn);} {_varCheck_(5637,b++,1,"b++");*b++ = (unsigned char) (0);} } while (0);
       {_varCheck_(5638,pending_exact,0,"pending_exact");pending_exact = b - 1;}
            }

   do { while (b - bufp->buffer + (1) > bufp->allocated) do { unsigned char *old_buffer = bufp->buffer; if (bufp->allocated == (1L << 16)) return REG_ESIZE; {_varCheck_(5641,bufp->allocated,0,"bufp->allocated");bufp->allocated <<= 1;} if (bufp->allocated > (1L << 16)) {_varCheck_(5641,bufp->allocated,0,"bufp->allocated");bufp->allocated = (1L << 16);} {_varCheck_(5641,bufp->buffer,0,"bufp->buffer");bufp->buffer = (unsigned char *) realloc (bufp->buffer, bufp->allocated);} if (bufp->buffer == ((void *)0)) return REG_ESPACE; if (old_buffer != bufp->buffer) { {_varCheck_(5641,b,0,"b");b = (b - old_buffer) + bufp->buffer;} {_varCheck_(5641,begalt,0,"begalt");begalt = (begalt - old_buffer) + bufp->buffer;} if (fixup_alt_jump) {_varCheck_(5641,fixup_alt_jump,0,"fixup_alt_jump");fixup_alt_jump = (fixup_alt_jump - old_buffer) + bufp->buffer;} if (laststart) {_varCheck_(5641,laststart,0,"laststart");laststart = (laststart - old_buffer) + bufp->buffer;} if (pending_exact) {_varCheck_(5641,pending_exact,0,"pending_exact");pending_exact = (pending_exact - old_buffer) + bufp->buffer;} } } while (0); {_varCheck_(5641,b++,1,"b++");*b++ = (unsigned char) (c);} } while (0);
          (*pending_exact)++;
   break;
        }
    }




  if (fixup_alt_jump)
    store_op1 (jump_past_alt, fixup_alt_jump, (b) - (fixup_alt_jump) - 3);

  if (!(compile_stack.avail == 0))
    return REG_EPAREN;

  free (compile_stack.stack);


  {_varCheck_(5659,bufp->used,0,"bufp->used");bufp->used = b - bufp->buffer;}
# 3706 "target/grep.c"
  return REG_NOERROR;
}





static void
store_op1 (op, loc, arg)
    re_opcode_t op;
    unsigned char *loc;
    int arg;
{
  {_varCheck_(5674,loc,1,"loc");*loc = (unsigned char) op;}
  do { {_varCheck_(5675,&(loc + 1)[0],(loc + 1),"&(loc + 1)[0]");(loc + 1)[0] = (arg) & 0377;} {_varCheck_(5675,&(loc + 1)[1],(loc + 1),"&(loc + 1)[1]");(loc + 1)[1] = (arg) >> 8;} } while (0);
}




static void
store_op2 (op, loc, arg1, arg2)
    re_opcode_t op;
    unsigned char *loc;
    int arg1, arg2;
{
  {_varCheck_(5687,loc,1,"loc");*loc = (unsigned char) op;}
  do { {_varCheck_(5688,&(loc + 1)[0],(loc + 1),"&(loc + 1)[0]");(loc + 1)[0] = (arg1) & 0377;} {_varCheck_(5688,&(loc + 1)[1],(loc + 1),"&(loc + 1)[1]");(loc + 1)[1] = (arg1) >> 8;} } while (0);
  do { {_varCheck_(5689,&(loc + 3)[0],(loc + 3),"&(loc + 3)[0]");(loc + 3)[0] = (arg2) & 0377;} {_varCheck_(5689,&(loc + 3)[1],(loc + 3),"&(loc + 3)[1]");(loc + 3)[1] = (arg2) >> 8;} } while (0);
}





static void
insert_op1 (op, loc, arg, end)
    re_opcode_t op;
    unsigned char *loc;
    int arg;
    unsigned char *end;
{
  register unsigned char *pfrom = end;
  register unsigned char *pto = end + 3;

  while (pfrom != loc)
    {_varCheck_(5707,--pto,1,"--pto");*--pto = *--pfrom;}

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
  register unsigned char *pto = end + 5;

  while (pfrom != loc)
    {_varCheck_(5726,--pto,1,"--pto");*--pto = *--pfrom;}

  store_op2 (op, loc, arg1, arg2);
}






static boolean
at_begline_loc_p (pattern, p, syntax)
    const char *pattern, *p;
    reg_syntax_t syntax;
{
  const char *prev = p - 2;
  boolean prev_prev_backslash = prev > pattern && prev[-1] == '\\';

  return

       (*prev == '(' && (syntax & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) || prev_prev_backslash))

    || (*prev == '|' && (syntax & ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) || prev_prev_backslash));
}





static boolean
at_endline_loc_p (p, pend, syntax)
    const char *p, *pend;
    int syntax;
{
  const char *next = p;
  boolean next_backslash = *next == '\\';
  const char *next_next = p + 1 < pend ? p + 1 : ((void *)0);

  return

       (syntax & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) ? *next == ')'
        : next_backslash && next_next && *next_next == ')')

    || (syntax & ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) ? *next == '|'
        : next_backslash && next_next && *next_next == '|');
}





static boolean
group_in_compile_stack (compile_stack, regnum)
    compile_stack_type compile_stack;
    regnum_t regnum;
{
  int this_element;

  for (this_element = compile_stack.avail - 1;
       this_element >= 0;
       this_element--)
    if (compile_stack.stack[this_element].regnum == regnum)
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

  if (p == pend)
    return REG_ERANGE;
# 3872 "target/grep.c"
  {_varCheck_(5808,range_start,0,"range_start");range_start = ((unsigned char *) p)[-2];}
  {_varCheck_(5809,range_end,0,"range_end");range_end = ((unsigned char *) p)[0];}



  (*p_ptr)++;


  if (range_start > range_end)
    return syntax & (((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) ? REG_ERANGE : REG_NOERROR;





  for (this_char = range_start; this_char <= range_end; this_char++)
    {
      (b[((unsigned char) ((translate ? translate[(unsigned char) (this_char)] : (this_char)))) / 8] |= 1 << (((unsigned char) (translate ? translate[(unsigned char) (this_char)] : (this_char))) % 8));
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
  register unsigned char *pend = pattern + size;





  boolean path_can_be_null = 1;


  boolean succeed_n_p = 0;

  ;

  do { {_varCheck_(5871,fail_stack.stack,0,"fail_stack.stack");fail_stack.stack = (fail_stack_elt_t *) __builtin_alloca (5 * sizeof (fail_stack_elt_t));} if (fail_stack.stack == ((void *)0)) return -2; {_varCheck_(5871,fail_stack.size,0,"fail_stack.size");fail_stack.size = 5;} {_varCheck_(5871,fail_stack.avail,0,"fail_stack.avail");fail_stack.avail = 0;} } while (0);
  memset ((fastmap), 0, (1 << 8));
  {_varCheck_(5873,bufp->fastmap_accurate,0,"bufp->fastmap_accurate");bufp->fastmap_accurate = 1;}
  {_varCheck_(5874,bufp->can_be_null,0,"bufp->can_be_null");bufp->can_be_null = 0;}

  while (p != pend || !(fail_stack.avail == 0))
    {
      if (p == pend)
        {
          {_varCheck_(5880,bufp->can_be_null,0,"bufp->can_be_null");bufp->can_be_null |= path_can_be_null;}


          {_varCheck_(5883,path_can_be_null,0,"path_can_be_null");path_can_be_null = 1;}

          {_varCheck_(5885,p,0,"p");p = fail_stack.stack[--fail_stack.avail];}
 }


      ;




      switch ((re_opcode_t) *p++)

 {






 case duplicate:
   {_varCheck_(5904,bufp->can_be_null,0,"bufp->can_be_null");bufp->can_be_null = 1;}
          return 0;





 case exactn:
          {_varCheck_(5912,&fastmap[p[1]],fastmap],"&fastmap[p[1]]");fastmap[p[1]] = 1;}
   break;


        case charset:
          for (j = *p++ * 8 - 1; j >= 0; j--)
     if (p[j / 8] & (1 << (j % 8)))
              {_varCheck_(5919,&fastmap[j],fastmap,"&fastmap[j]");fastmap[j] = 1;}
   break;


 case charset_not:

   for (j = *p * 8; j < (1 << 8); j++)
            {_varCheck_(5926,&fastmap[j],fastmap,"&fastmap[j]");fastmap[j] = 1;}

   for (j = *p++ * 8 - 1; j >= 0; j--)
     if (!(p[j / 8] & (1 << (j % 8))))
              {_varCheck_(5930,&fastmap[j],fastmap,"&fastmap[j]");fastmap[j] = 1;}
          break;


 case wordchar:
   for (j = 0; j < (1 << 8); j++)
     if (re_syntax_table[j] == 1)
       {_varCheck_(5937,&fastmap[j],fastmap,"&fastmap[j]");fastmap[j] = 1;}
   break;


 case notwordchar:
   for (j = 0; j < (1 << 8); j++)
     if (re_syntax_table[j] != 1)
       {_varCheck_(5944,&fastmap[j],fastmap,"&fastmap[j]");fastmap[j] = 1;}
   break;


        case anychar:

   for (j = 0; j < (1 << 8); j++)
            {_varCheck_(5951,&fastmap[j],fastmap,"&fastmap[j]");fastmap[j] = 1;}


          if (!(bufp->syntax & (((((((1) << 1) << 1) << 1) << 1) << 1) << 1)))
            {_varCheck_(5955,&fastmap['\n'],fastmap,"&fastmap['\n']");fastmap['\n'] = 0;}



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
          do { do { {_varCheck_(5984,(j),0,"(j)");(j) = *(p) & 0377;} {_varCheck_(5984,(j),0,"(j)");(j) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(5984,(p),0,"(p)");(p) += 2;} } while (0);
   {_varCheck_(5985,p,0,"p");p += j;}
   if (j > 0)
     continue;






          if ((re_opcode_t) *p != on_failure_jump
       && (re_opcode_t) *p != succeed_n)
     continue;

          p++;
          do { do { {_varCheck_(5999,(j),0,"(j)");(j) = *(p) & 0377;} {_varCheck_(5999,(j),0,"(j)");(j) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(5999,(p),0,"(p)");(p) += 2;} } while (0);
          {_varCheck_(6000,p,0,"p");p += j;}


          if (!(fail_stack.avail == 0)
       && fail_stack.stack[fail_stack.avail - 1] == p)
            fail_stack.avail--;

          continue;


        case on_failure_jump:
        case on_failure_keep_string_jump:
 handle_on_failure_jump:
          do { do { {_varCheck_(6013,(j),0,"(j)");(j) = *(p) & 0377;} {_varCheck_(6013,(j),0,"(j)");(j) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(6013,(p),0,"(p)");(p) += 2;} } while (0);
# 4391 "target/grep.c"
          if (p + j < pend)
            {
              if (!(((fail_stack.avail == fail_stack.size) && !((fail_stack).size > re_max_failures * ((num_regs - 1) * 3 + 4) ? 0 : ((fail_stack).stack = (fail_stack_elt_t *) (destination = (char *) __builtin_alloca (((fail_stack).size << 1) * sizeof (fail_stack_elt_t)), memcpy ((destination), ((fail_stack).stack), ((fail_stack).size * sizeof (fail_stack_elt_t))), destination), (fail_stack).stack == ((void *)0) ? 0 : ((fail_stack).size <<= 1, 1)))) ? 0 : ((fail_stack).stack[(fail_stack).avail++] = p + j, 1)))
                return -2;
            }
          else
            bufp->can_be_null = 1;

          if (succeed_n_p)
            {
              do { do { {_varCheck_(6025,(k),0,"(k)");(k) = *(p) & 0377;} {_varCheck_(6025,(k),0,"(k)");(k) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(6025,(p),0,"(p)");(p) += 2;} } while (0);
              {_varCheck_(6026,succeed_n_p,0,"succeed_n_p");succeed_n_p = 0;}
     }

          continue;


 case succeed_n:

          {_varCheck_(6034,p,0,"p");p += 2;}


          do { do { {_varCheck_(6037,(k),0,"(k)");(k) = *(p) & 0377;} {_varCheck_(6037,(k),0,"(k)");(k) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(6037,(p),0,"(p)");(p) += 2;} } while (0);
          if (k == 0)
     {
              {_varCheck_(6040,p,0,"p");p -= 4;}
         {_varCheck_(6041,succeed_n_p,0,"succeed_n_p");succeed_n_p = 1;}
              goto handle_on_failure_jump;
            }
          continue;


 case set_number_at:
          {_varCheck_(6048,p,0,"p");p += 4;}
          continue;


 case start_memory:
        case stop_memory:
   {_varCheck_(6054,p,0,"p");p += 2;}
   continue;


 default:
          abort ();
        }







      {_varCheck_(6068,path_can_be_null,0,"path_can_be_null");path_can_be_null = 0;}
      {_varCheck_(6069,p,0,"p");p = pend;}
    }



  {_varCheck_(6074,bufp->can_be_null,0,"bufp->can_be_null");bufp->can_be_null |= path_can_be_null;}
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
      {_varCheck_(6087,bufp->regs_allocated,0,"bufp->regs_allocated");bufp->regs_allocated = 1;}
      {_varCheck_(6088,regs->num_regs,0,"regs->num_regs");regs->num_regs = num_regs;}
      {_varCheck_(6089,regs->start,0,"regs->start");regs->start = starts;}
      {_varCheck_(6090,regs->end,0,"regs->end");regs->end = ends;}
    }
  else
    {
      {_varCheck_(6094,bufp->regs_allocated,0,"bufp->regs_allocated");bufp->regs_allocated = 0;}
      {_varCheck_(6095,regs->num_regs,0,"regs->num_regs");regs->num_regs = 0;}
      {_varCheck_(6096,regs->start,0,"regs->start");regs->start = regs->end = (regoff_t) 0;}
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
  int total_size = size1 + size2;
  int endpos = startpos + range;


  if (startpos < 0 || startpos > total_size)
    return -1;



  if (endpos < -1)
    {_varCheck_(6139,range,0,"range");range = -1 - startpos;}
  else if (endpos > total_size)
    {_varCheck_(6141,range,0,"range");range = total_size - startpos;}



  if (bufp->used > 0 && (re_opcode_t) bufp->buffer[0] == begbuf && range > 0)
    {
      if (startpos > 0)
 return -1;
      else
 range = 1;
    }


  if (fastmap && !bufp->fastmap_accurate)
    if (re_compile_fastmap (bufp) == -2)
      return -2;


  for (;;)
    {




      if (fastmap && startpos < total_size && !bufp->can_be_null)
 {
   if (range > 0)
     {
       register const char *d;
       register int lim = 0;
       int irange = range;

              if (startpos < size1 && startpos + range >= size1)
                {_varCheck_(6174,lim,0,"lim");lim = range - (size1 - startpos);}

       {_varCheck_(6176,d,0,"d");d = (startpos >= size1 ? string2 - size1 : string1) + startpos;}



       if (translate)
                while (range > lim
                       && !fastmap[(unsigned char)
       translate[(unsigned char) *d++]])
                  range--;
       else
                while (range > lim && !fastmap[(unsigned char) *d++])
                  range--;

       {_varCheck_(6189,startpos,0,"startpos");startpos += irange - range;}
     }
   else
     {
       register char c = (size1 == 0 || startpos >= size1
                                 ? string2[startpos - size1]
                                 : string1[startpos]);

       if (!fastmap[(unsigned char) (translate ? translate[(unsigned char) (c)] : (c))])
  goto advance;
     }
 }


      if (range >= 0 && startpos == total_size && fastmap
          && !bufp->can_be_null)
 return -1;

      {_varCheck_(6207,val,0,"val");val = re_match_2 (bufp, string1, size1, string2, size2,
                 startpos, regs, stop);}
      if (val >= 0)
 return startpos;

      if (val == -2)
 return -2;

    advance:
      if (!range)
        break;
      else if (range > 0)
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
  register unsigned char *pend = p + bufp->used;


  char *translate = bufp->translate;
# 4850 "target/grep.c"
  fail_stack_type fail_stack;
# 4859 "target/grep.c"
  unsigned num_regs = bufp->re_nsub + 1;


  unsigned lowest_active_reg = ((1 << 8) + 1);
  unsigned highest_active_reg = (1 << 8);
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

  do { {_varCheck_(6339,fail_stack.stack,0,"fail_stack.stack");fail_stack.stack = (fail_stack_elt_t *) __builtin_alloca (5 * sizeof (fail_stack_elt_t));} if (fail_stack.stack == ((void *)0)) return -2; {_varCheck_(6339,fail_stack.size,0,"fail_stack.size");fail_stack.size = 5;} {_varCheck_(6339,fail_stack.avail,0,"fail_stack.avail");fail_stack.avail = 0;} } while (0);






  if (bufp->re_nsub)
    {
      {_varCheck_(6348,regstart,0,"regstart");regstart = ((const char * *) __builtin_alloca ((num_regs) * sizeof (const char *)));}
      {_varCheck_(6349,regend,0,"regend");regend = ((const char * *) __builtin_alloca ((num_regs) * sizeof (const char *)));}
      {_varCheck_(6350,old_regstart,0,"old_regstart");old_regstart = ((const char * *) __builtin_alloca ((num_regs) * sizeof (const char *)));}
      {_varCheck_(6351,old_regend,0,"old_regend");old_regend = ((const char * *) __builtin_alloca ((num_regs) * sizeof (const char *)));}
      {_varCheck_(6352,best_regstart,0,"best_regstart");best_regstart = ((const char * *) __builtin_alloca ((num_regs) * sizeof (const char *)));}
      {_varCheck_(6353,best_regend,0,"best_regend");best_regend = ((const char * *) __builtin_alloca ((num_regs) * sizeof (const char *)));}
      {_varCheck_(6354,reg_info,0,"reg_info");reg_info = ((register_info_type *) __builtin_alloca ((num_regs) * sizeof (register_info_type)));}
      {_varCheck_(6355,reg_dummy,0,"reg_dummy");reg_dummy = ((const char * *) __builtin_alloca ((num_regs) * sizeof (const char *)));}
      {_varCheck_(6356,reg_info_dummy,0,"reg_info_dummy");reg_info_dummy = ((register_info_type *) __builtin_alloca ((num_regs) * sizeof (register_info_type)));}

      if (!(regstart && regend && old_regstart && old_regend && reg_info
            && best_regstart && best_regend && reg_dummy && reg_info_dummy))
        {
          __builtin_alloca (0);
          return -2;
        }
    }
# 4955 "target/grep.c"
  if (pos < 0 || pos > size1 + size2)
    {
      __builtin_alloca (0);
      return -1;
    }




  for (mcnt = 1; mcnt < num_regs; mcnt++)
    {
      {_varCheck_(6377,&regstart[mcnt],regstart,"&regstart[mcnt]");regstart[mcnt] = regend[mcnt]
        = old_regstart[mcnt] = old_regend[mcnt] = ((char *) -1);}

      {_varCheck_(6380,&((reg_info[mcnt]).bits.match_null_string_p),((reg_info).bits.match_null_string_p),"&((reg_info[mcnt]).bits.match_null_string_p)");((reg_info[mcnt]).bits.match_null_string_p) = 3;}
      {_varCheck_(6381,&((reg_info[mcnt]).bits.is_active),((reg_info).bits.is_active),"&((reg_info[mcnt]).bits.is_active)");((reg_info[mcnt]).bits.is_active) = 0;}
      {_varCheck_(6382,&((reg_info[mcnt]).bits.matched_something),((reg_info).bits.matched_something),"&((reg_info[mcnt]).bits.matched_something)");((reg_info[mcnt]).bits.matched_something) = 0;}
      {_varCheck_(6383,&((reg_info[mcnt]).bits.ever_matched_something),((reg_info).bits.ever_matched_something),"&((reg_info[mcnt]).bits.ever_matched_something)");((reg_info[mcnt]).bits.ever_matched_something) = 0;}
    }



  if (size2 == 0 && string1 != ((void *)0))
    {
      {_varCheck_(6390,string2,0,"string2");string2 = string1;}
      {_varCheck_(6391,size2,0,"size2");size2 = size1;}
      {_varCheck_(6392,string1,0,"string1");string1 = 0;}
      {_varCheck_(6393,size1,0,"size1");size1 = 0;}
    }
  {_varCheck_(6395,end1,0,"end1");end1 = string1 + size1;}
  {_varCheck_(6396,end2,0,"end2");end2 = string2 + size2;}


  if (stop <= size1)
    {
      {_varCheck_(6401,end_match_1,0,"end_match_1");end_match_1 = string1 + stop;}
      {_varCheck_(6402,end_match_2,0,"end_match_2");end_match_2 = string2;}
    }
  else
    {
      {_varCheck_(6406,end_match_1,0,"end_match_1");end_match_1 = end1;}
      {_varCheck_(6407,end_match_2,0,"end_match_2");end_match_2 = string2 + stop - size1;}
    }







  if (size1 > 0 && pos <= size1)
    {
      {_varCheck_(6418,d,0,"d");d = string1 + pos;}
      {_varCheck_(6419,dend,0,"dend");dend = end_match_1;}
    }
  else
    {
      {_varCheck_(6423,d,0,"d");d = string2 + pos - size1;}
      {_varCheck_(6424,dend,0,"dend");dend = end_match_2;}
    }

  ;
  ;
  ;
  ;
  ;




  for (;;)
    {
      ;

      if (p == pend)
 {
          ;



          if (d != end_match_2)
     {
              ;

              if (!(fail_stack.avail == 0))
                {
                  boolean same_str_p = ((size1 && string1 <= (match_end) && (match_end) <= string1 + size1)
                          == (dend == end_match_1));


                  if (!best_regs_set
                      || (same_str_p && d > match_end)
                      || (!same_str_p && !(dend == end_match_1)))
                    {
                      {_varCheck_(6460,best_regs_set,0,"best_regs_set");best_regs_set = 1;}
                      {_varCheck_(6461,match_end,0,"match_end");match_end = d;}

                      ;

                      for (mcnt = 1; mcnt < num_regs; mcnt++)
                        {
                          {_varCheck_(6467,&best_regstart[mcnt],best_regstart,"&best_regstart[mcnt]");best_regstart[mcnt] = regstart[mcnt];}
                          {_varCheck_(6468,&best_regend[mcnt],best_regend,"&best_regend[mcnt]");best_regend[mcnt] = regend[mcnt];}
                        }
                    }
                  goto fail;
                }


              else if (best_regs_set)
                {
           restore_best_regs:





                  ;

                  {_varCheck_(6485,d,0,"d");d = match_end;}
                  {_varCheck_(6486,dend,0,"dend");dend = ((d >= string1 && d <= end1)
             ? end_match_1 : end_match_2);}

    for (mcnt = 1; mcnt < num_regs; mcnt++)
      {
        {_varCheck_(6491,&regstart[mcnt],regstart,"&regstart[mcnt]");regstart[mcnt] = best_regstart[mcnt];}
        {_varCheck_(6492,&regend[mcnt],regend,"&regend[mcnt]");regend[mcnt] = best_regend[mcnt];}
      }
                }
            }

          ;


          if (regs && !bufp->no_sub)
     {

              if (bufp->regs_allocated == 0)
                {


                  {_varCheck_(6507,regs->num_regs,0,"regs->num_regs");regs->num_regs = ((30) > (num_regs + 1) ? (30) : (num_regs + 1));}
                  {_varCheck_(6508,regs->start,0,"regs->start");regs->start = ((regoff_t *) malloc ((regs->num_regs) * sizeof (regoff_t)));}
                  {_varCheck_(6509,regs->end,0,"regs->end");regs->end = ((regoff_t *) malloc ((regs->num_regs) * sizeof (regoff_t)));}
                  if (regs->start == ((void *)0) || regs->end == ((void *)0))
                    return -2;
                  {_varCheck_(6512,bufp->regs_allocated,0,"bufp->regs_allocated");bufp->regs_allocated = 1;}
                }
              else if (bufp->regs_allocated == 1)
                {


                  if (regs->num_regs < num_regs + 1)
                    {
                      {_varCheck_(6520,regs->num_regs,0,"regs->num_regs");regs->num_regs = num_regs + 1;}
                      ((regs->start) = (regoff_t *) realloc (regs->start, (regs->num_regs) * sizeof (regoff_t)));
                      ((regs->end) = (regoff_t *) realloc (regs->end, (regs->num_regs) * sizeof (regoff_t)));
                      if (regs->start == ((void *)0) || regs->end == ((void *)0))
                        return -2;
                    }
                }
              else
  {


    ;
  }




              if (regs->num_regs > 0)
                {
                  {_varCheck_(6539,&regs->start[0],regs->start,"&regs->start[0]");regs->start[0] = pos;}
                  {_varCheck_(6540,&regs->end[0],regs->end,"&regs->end[0]");regs->end[0] = ((dend == end_match_1) ? d - string1
             : d - string2 + size1);}
                }



       for (mcnt = 1; mcnt < ((num_regs) < (regs->num_regs) ? (num_regs) : (regs->num_regs)); mcnt++)
  {
                  if (((regstart[mcnt]) == ((char *) -1)) || ((regend[mcnt]) == ((char *) -1)))
                    {_varCheck_(6549,&regs->start[mcnt],regs->start,"&regs->start[mcnt]");regs->start[mcnt] = regs->end[mcnt] = -1;}
                  else
                    {
        {_varCheck_(6552,&regs->start[mcnt],regs->start,"&regs->start[mcnt]");regs->start[mcnt] = ((size1 && string1 <= (regstart[mcnt]) && (regstart[mcnt]) <= string1 + size1) ? (regstart[mcnt]) - string1 : (regstart[mcnt]) - string2 + size1);}
                      {_varCheck_(6553,&regs->end[mcnt],regs->end,"&regs->end[mcnt]");regs->end[mcnt] = ((size1 && string1 <= (regend[mcnt]) && (regend[mcnt]) <= string1 + size1) ? (regend[mcnt]) - string1 : (regend[mcnt]) - string2 + size1);}
                    }
  }






              for (mcnt = num_regs; mcnt < regs->num_regs; mcnt++)
                {_varCheck_(6563,&regs->start[mcnt],regs->start,"&regs->start[mcnt]");regs->start[mcnt] = regs->end[mcnt] = -1;}
     }

          __builtin_alloca (0);
          ;


          ;

          {_varCheck_(6572,mcnt,0,"mcnt");mcnt = d - pos - ((dend == end_match_1)
       ? string1
       : string2 - size1);}

          ;

          return mcnt;
        }





      switch ((re_opcode_t) *p++)

 {


        case no_op:
          ;
          break;





 case exactn:
   {_varCheck_(6599,mcnt,0,"mcnt");mcnt = *p++;}
          ;



          if (translate)
     {
       do
  {
    while (d == dend) { if (dend == end_match_2) goto fail; {_varCheck_(6608,d,0,"d");d = string2;} {_varCheck_(6608,dend,0,"dend");dend = end_match_2;} };
    if (translate[(unsigned char) *d++] != (char) *p++)
                    goto fail;
  }
       while (--mcnt);
     }
   else
     {
       do
  {
    while (d == dend) { if (dend == end_match_2) goto fail; {_varCheck_(6618,d,0,"d");d = string2;} {_varCheck_(6618,dend,0,"dend");dend = end_match_2;} };
    if (*d++ != (char) *p++) goto fail;
  }
       while (--mcnt);
     }
   do { unsigned r; for (r = lowest_active_reg; r <= highest_active_reg; r++) { {_varCheck_(6623,&((reg_info[r]).bits.matched_something),((reg_info).bits.matched_something),"&((reg_info[r]).bits.matched_something)");((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1;} } } while (0);
          break;



 case anychar:
          ;

          while (d == dend) { if (dend == end_match_2) goto fail; {_varCheck_(6631,d,0,"d");d = string2;} {_varCheck_(6631,dend,0,"dend");dend = end_match_2;} };

          if ((!(bufp->syntax & (((((((1) << 1) << 1) << 1) << 1) << 1) << 1)) && (translate ? translate[(unsigned char) (*d)] : (*d)) == '\n')
              || (bufp->syntax & ((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) && (translate ? translate[(unsigned char) (*d)] : (*d)) == '\000'))
     goto fail;

          do { unsigned r; for (r = lowest_active_reg; r <= highest_active_reg; r++) { {_varCheck_(6637,&((reg_info[r]).bits.matched_something),((reg_info).bits.matched_something),"&((reg_info[r]).bits.matched_something)");((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1;} } } while (0);
          ;
          d++;
   break;


 case charset:
 case charset_not:
   {
     register unsigned char c;
     boolean not = (re_opcode_t) *(p - 1) == charset_not;

            ;

     while (d == dend) { if (dend == end_match_2) goto fail; {_varCheck_(6651,d,0,"d");d = string2;} {_varCheck_(6651,dend,0,"dend");dend = end_match_2;} };
     {_varCheck_(6652,c,0,"c");c = (translate ? translate[(unsigned char) (*d)] : (*d));}



     if (c < (unsigned) (*p * 8)
  && p[1 + c / 8] & (1 << (c % 8)))
       {_varCheck_(6658,not,0,"not");not = !not;}

     {_varCheck_(6660,p,0,"p");p += 1 + *p;}

     if (!not) goto fail;

     do { unsigned r; for (r = lowest_active_reg; r <= highest_active_reg; r++) { {_varCheck_(6664,&((reg_info[r]).bits.matched_something),((reg_info).bits.matched_something),"&((reg_info[r]).bits.matched_something)");((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1;} } } while (0);
            d++;
     break;
   }







        case start_memory:
   ;


   {_varCheck_(6679,p1,0,"p1");p1 = p;}

          if (((reg_info[*p]).bits.match_null_string_p) == 3)
            {_varCheck_(6682,&((reg_info[*p]).bits.match_null_string_p),((reg_info).bits.match_null_string_p),"&((reg_info[*p]).bits.match_null_string_p)");((reg_info[*p]).bits.match_null_string_p)
              = group_match_null_string_p (&p1, pend, reg_info);}






          {_varCheck_(6690,&old_regstart[*p],old_regstart,"&old_regstart[*p]");old_regstart[*p] = ((reg_info[*p]).bits.match_null_string_p)
                             ? ((regstart[*p]) == ((char *) -1)) ? d : regstart[*p]
                             : regstart[*p];}
   ;


          {_varCheck_(6696,&regstart[*p],regstart,"&regstart[*p]");regstart[*p] = d;}
   ;

          {_varCheck_(6699,&((reg_info[*p]).bits.is_active),((reg_info).bits.is_active),"&((reg_info[*p]).bits.is_active)");((reg_info[*p]).bits.is_active) = 1;}
          {_varCheck_(6700,&((reg_info[*p]).bits.matched_something),((reg_info).bits.matched_something),"&((reg_info[*p]).bits.matched_something)");((reg_info[*p]).bits.matched_something) = 0;}


          {_varCheck_(6703,highest_active_reg,0,"highest_active_reg");highest_active_reg = *p;}



          if (lowest_active_reg == ((1 << 8) + 1))
            {_varCheck_(6708,lowest_active_reg,0,"lowest_active_reg");lowest_active_reg = *p;}


          {_varCheck_(6711,p,0,"p");p += 2;}
          break;





 case stop_memory:
   ;






          {_varCheck_(6726,&old_regend[*p],old_regend,"&old_regend[*p]");old_regend[*p] = ((reg_info[*p]).bits.match_null_string_p)
                           ? ((regend[*p]) == ((char *) -1)) ? d : regend[*p]
      : regend[*p];}
   ;


          {_varCheck_(6732,&regend[*p],regend,"&regend[*p]");regend[*p] = d;}
   ;


          {_varCheck_(6736,&((reg_info[*p]).bits.is_active),((reg_info).bits.is_active),"&((reg_info[*p]).bits.is_active)");((reg_info[*p]).bits.is_active) = 0;}



          if (lowest_active_reg == highest_active_reg)
            {
              {_varCheck_(6742,lowest_active_reg,0,"lowest_active_reg");lowest_active_reg = ((1 << 8) + 1);}
              {_varCheck_(6743,highest_active_reg,0,"highest_active_reg");highest_active_reg = (1 << 8);}
            }
          else
            {



              unsigned char r = *p - 1;
              while (r > 0 && !((reg_info[r]).bits.is_active))
                r--;
# 5350 "target/grep.c"
       if (r == 0)
                {
                  {_varCheck_(6756,lowest_active_reg,0,"lowest_active_reg");lowest_active_reg = ((1 << 8) + 1);}
                  {_varCheck_(6757,highest_active_reg,0,"highest_active_reg");highest_active_reg = (1 << 8);}
                }
              else
                highest_active_reg = r;
            }






          if ((!((reg_info[*p]).bits.matched_something)
               || (re_opcode_t) p[-3] == start_memory)
       && (p + 2) < pend)
            {
              boolean is_a_jump_n = 0;

              {_varCheck_(6774,p1,0,"p1");p1 = p + 2;}
              {_varCheck_(6775,mcnt,0,"mcnt");mcnt = 0;}
              switch ((re_opcode_t) *p1++)
                {
                  case jump_n:
      {_varCheck_(6779,is_a_jump_n,0,"is_a_jump_n");is_a_jump_n = 1;}
                  case pop_failure_jump:
    case maybe_pop_jump:
    case jump:
    case dummy_failure_jump:
                    do { do { {_varCheck_(6784,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(6784,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(6784,(p1),0,"(p1)");(p1) += 2;} } while (0);
      if (is_a_jump_n)
        p1 += 2;
                    break;

                  default:
                                     ;
                }
       {_varCheck_(6792,p1,0,"p1");p1 += mcnt;}






              if (mcnt < 0 && (re_opcode_t) *p1 == on_failure_jump
                  && (re_opcode_t) p1[3] == start_memory && p1[4] == *p)
  {
# 5408 "target/grep.c"
                  if (((reg_info[*p]).bits.ever_matched_something))
      {
        unsigned r;

                      {_varCheck_(6807,&((reg_info[*p]).bits.ever_matched_something),((reg_info).bits.ever_matched_something),"&((reg_info[*p]).bits.ever_matched_something)");((reg_info[*p]).bits.ever_matched_something) = 0;}


                      for (r = *p; r < *p + *(p + 1); r++)
                        {
                          {_varCheck_(6812,&regstart[r],regstart,"&regstart[r]");regstart[r] = old_regstart[r];}


                          if ((int) old_regend[r] >= (int) regstart[r])
                            {_varCheck_(6816,&regend[r],regend,"&regend[r]");regend[r] = old_regend[r];}
                        }
                    }
    p1++;
                  do { do { {_varCheck_(6820,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(6820,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(6820,(p1),0,"(p1)");(p1) += 2;} } while (0);
                  do { char *destination; int this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < ((highest_active_reg - lowest_active_reg + 1) * 3 + 4)) { if (!((fail_stack).size > re_max_failures * ((num_regs - 1) * 3 + 4) ? 0 : ((fail_stack).stack = (fail_stack_elt_t *) (destination = (char *) __builtin_alloca (((fail_stack).size << 1) * sizeof (fail_stack_elt_t)), memcpy ((destination), ((fail_stack).stack), ((fail_stack).size * sizeof (fail_stack_elt_t))), destination), (fail_stack).stack == ((void *)0) ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; {_varCheck_(6821,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg];} ; {_varCheck_(6821,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg];} ; ; ; ; ; ; {_varCheck_(6821,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg].word;} } ; {_varCheck_(6821,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) lowest_active_reg;} ; {_varCheck_(6821,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) highest_active_reg;} ; ; {_varCheck_(6821,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) p1 + mcnt;} ; ; ; {_varCheck_(6821,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) d;} ; ; } while (0);

                  goto fail;
                }
            }


          {_varCheck_(6828,p,0,"p");p += 2;}
          break;




        case duplicate:
   {
     register const char *d2, *dend2;
     int regno = *p++;
     ;


            if (((regstart[regno]) == ((char *) -1)) || ((regend[regno]) == ((char *) -1)))
              goto fail;


            {_varCheck_(6845,d2,0,"d2");d2 = regstart[regno];}






            {_varCheck_(6852,dend2,0,"dend2");dend2 = (((size1 && string1 <= (regstart[regno]) && (regstart[regno]) <= string1 + size1)
        == (size1 && string1 <= (regend[regno]) && (regend[regno]) <= string1 + size1))
       ? regend[regno] : end_match_1);}
     for (;;)
       {


  while (d2 == dend2)
    {
      if (dend2 == end_match_2) break;
      if (dend2 == regend[regno]) break;


                    {_varCheck_(6865,d2,0,"d2");d2 = string2;}
                    {_varCheck_(6866,dend2,0,"dend2");dend2 = regend[regno];}
    }

  if (d2 == dend2) break;


  while (d == dend) { if (dend == end_match_2) goto fail; {_varCheck_(6872,d,0,"d");d = string2;} {_varCheck_(6872,dend,0,"dend");dend = end_match_2;} };


  {_varCheck_(6875,mcnt,0,"mcnt");mcnt = dend - d;}



                if (mcnt > dend2 - d2)
    {_varCheck_(6880,mcnt,0,"mcnt");mcnt = dend2 - d2;}



  if (translate
                    ? bcmp_translate (d, d2, mcnt, translate)
                    : memcmp ((d), (d2), (mcnt)))
    goto fail;
  {_varCheck_(6888,d += mcnt,0,"d += mcnt");d += mcnt, d2 += mcnt;}
       }
   }
   break;





 case begline:
          ;

          if (((d) == (size1 ? string1 : string2) || !size2))
            {
              if (!bufp->not_bol) break;
            }
          else if (d[-1] == '\n' && bufp->newline_anchor)
            {
              break;
            }

          goto fail;



 case endline:
          ;

          if (((d) == end2))
            {
              if (!bufp->not_eol) break;
            }


          else if ((d == end1 ? *string2 : *d) == '\n'
                   && bufp->newline_anchor)
            {
              break;
            }
          goto fail;



        case begbuf:
          ;
          if (((d) == (size1 ? string1 : string2) || !size2))
            break;
          goto fail;



        case endbuf:
          ;
   if (((d) == end2))
     break;
          goto fail;
# 5567 "target/grep.c"
        case on_failure_keep_string_jump:
          ;

          do { do { {_varCheck_(6948,(mcnt),0,"(mcnt)");(mcnt) = *(p) & 0377;} {_varCheck_(6948,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(6948,(p),0,"(p)");(p) += 2;} } while (0);
          ;

          do { char *destination; int this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < ((highest_active_reg - lowest_active_reg + 1) * 3 + 4)) { if (!((fail_stack).size > re_max_failures * ((num_regs - 1) * 3 + 4) ? 0 : ((fail_stack).stack = (fail_stack_elt_t *) (destination = (char *) __builtin_alloca (((fail_stack).size << 1) * sizeof (fail_stack_elt_t)), memcpy ((destination), ((fail_stack).stack), ((fail_stack).size * sizeof (fail_stack_elt_t))), destination), (fail_stack).stack == ((void *)0) ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; {_varCheck_(6951,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg];} ; {_varCheck_(6951,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg];} ; ; ; ; ; ; {_varCheck_(6951,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg].word;} } ; {_varCheck_(6951,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) lowest_active_reg;} ; {_varCheck_(6951,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) highest_active_reg;} ; ; {_varCheck_(6951,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) p + mcnt;} ; ; ; {_varCheck_(6951,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) ((void *)0);} ; ; } while (0);
          break;
# 5589 "target/grep.c"
 case on_failure_jump:
        on_failure:
          ;

          do { do { {_varCheck_(6958,(mcnt),0,"(mcnt)");(mcnt) = *(p) & 0377;} {_varCheck_(6958,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(6958,(p),0,"(p)");(p) += 2;} } while (0);
          ;
# 5605 "target/grep.c"
          {_varCheck_(6961,p1,0,"p1");p1 = p;}





          while (p1 < pend && (re_opcode_t) *p1 == no_op)
            p1++;

          if (p1 < pend && (re_opcode_t) *p1 == start_memory)
            {




              {_varCheck_(6976,highest_active_reg,0,"highest_active_reg");highest_active_reg = *(p1 + 1) + *(p1 + 2);}
              if (lowest_active_reg == ((1 << 8) + 1))
                {_varCheck_(6978,lowest_active_reg,0,"lowest_active_reg");lowest_active_reg = *(p1 + 1);}
            }

          ;
          do { char *destination; int this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < ((highest_active_reg - lowest_active_reg + 1) * 3 + 4)) { if (!((fail_stack).size > re_max_failures * ((num_regs - 1) * 3 + 4) ? 0 : ((fail_stack).stack = (fail_stack_elt_t *) (destination = (char *) __builtin_alloca (((fail_stack).size << 1) * sizeof (fail_stack_elt_t)), memcpy ((destination), ((fail_stack).stack), ((fail_stack).size * sizeof (fail_stack_elt_t))), destination), (fail_stack).stack == ((void *)0) ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; {_varCheck_(6982,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg];} ; {_varCheck_(6982,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg];} ; ; ; ; ; ; {_varCheck_(6982,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg].word;} } ; {_varCheck_(6982,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) lowest_active_reg;} ; {_varCheck_(6982,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) highest_active_reg;} ; ; {_varCheck_(6982,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) p + mcnt;} ; ; ; {_varCheck_(6982,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) d;} ; ; } while (0);
          break;




        case maybe_pop_jump:
          do { do { {_varCheck_(6989,(mcnt),0,"(mcnt)");(mcnt) = *(p) & 0377;} {_varCheck_(6989,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(6989,(p),0,"(p)");(p) += 2;} } while (0);
          ;
          {
     register unsigned char *p2 = p;
# 5652 "target/grep.c"
     while (p2 + 2 < pend
     && ((re_opcode_t) *p2 == stop_memory
         || (re_opcode_t) *p2 == start_memory))
       p2 += 3;


            if (p2 == pend)
       {



           {_varCheck_(7005,&p[-3],p,"&p[-3]");p[-3] = (unsigned char) pop_failure_jump;}
                ;

              }

            else if ((re_opcode_t) *p2 == exactn
       || (bufp->newline_anchor && (re_opcode_t) *p2 == endline))
       {
  register unsigned char c
                  = *p2 == (unsigned char) endline ? '\n' : p2[2];
  {_varCheck_(7015,p1,0,"p1");p1 = p + mcnt;}




                if ((re_opcode_t) p1[3] == exactn && p1[5] != c)
                  {
        {_varCheck_(7022,&p[-3],p,"&p[-3]");p[-3] = (unsigned char) pop_failure_jump;}
                    ;

                  }

  else if ((re_opcode_t) p1[3] == charset
    || (re_opcode_t) p1[3] == charset_not)
    {
      int not = (re_opcode_t) p1[3] == charset_not;

      if (c < (unsigned char) (p1[4] * 8)
   && p1[5 + c / 8] & (1 << (c % 8)))
        {_varCheck_(7034,not,0,"not");not = !not;}



      if (!not)
                      {
            {_varCheck_(7040,&p[-3],p,"&p[-3]");p[-3] = (unsigned char) pop_failure_jump;}
                        ;
                      }
    }
       }
   }
   {_varCheck_(7046,p,0,"p");p -= 2;}
   if ((re_opcode_t) p[-1] != pop_failure_jump)
     {
       {_varCheck_(7049,&p[-1],p,"&p[-1]");p[-1] = (unsigned char) jump;}
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
            { int this_reg; const unsigned char *string_temp; ; ; ; ; ; ; ; {_varCheck_(7066,string_temp,0,"string_temp");string_temp = fail_stack.stack[--fail_stack.avail];} if (string_temp != ((void *)0)) {_varCheck_(7066,sdummy,0,"sdummy");sdummy = (const char *) string_temp;} ; ; ; {_varCheck_(7066,pdummy,0,"pdummy");pdummy = (unsigned char *) fail_stack.stack[--fail_stack.avail];} ; ; {_varCheck_(7066,dummy_high_reg,0,"dummy_high_reg");dummy_high_reg = (unsigned) fail_stack.stack[--fail_stack.avail];} ; {_varCheck_(7066,dummy_low_reg,0,"dummy_low_reg");dummy_low_reg = (unsigned) fail_stack.stack[--fail_stack.avail];} ; for (this_reg = dummy_high_reg; this_reg >= dummy_low_reg; this_reg--) { ; {_varCheck_(7066,&reg_info_dummy[this_reg].word,reg_info_dummy.word,"&reg_info_dummy[this_reg].word");reg_info_dummy[this_reg].word = fail_stack.stack[--fail_stack.avail];} ; {_varCheck_(7066,&reg_dummy[this_reg],reg_dummy,"&reg_dummy[this_reg]");reg_dummy[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail];} ; {_varCheck_(7066,&reg_dummy[this_reg],reg_dummy,"&reg_dummy[this_reg]");reg_dummy[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail];} ; } ; };


          }




        case jump:
 unconditional_jump:
   do { do { {_varCheck_(7076,(mcnt),0,"(mcnt)");(mcnt) = *(p) & 0377;} {_varCheck_(7076,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(7076,(p),0,"(p)");(p) += 2;} } while (0);
          ;
   {_varCheck_(7078,p,0,"p");p += mcnt;}
          ;
   break;




        case jump_past_alt:
          ;
          goto unconditional_jump;







        case dummy_failure_jump:
          ;


          do { char *destination; int this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < ((highest_active_reg - lowest_active_reg + 1) * 3 + 4)) { if (!((fail_stack).size > re_max_failures * ((num_regs - 1) * 3 + 4) ? 0 : ((fail_stack).stack = (fail_stack_elt_t *) (destination = (char *) __builtin_alloca (((fail_stack).size << 1) * sizeof (fail_stack_elt_t)), memcpy ((destination), ((fail_stack).stack), ((fail_stack).size * sizeof (fail_stack_elt_t))), destination), (fail_stack).stack == ((void *)0) ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; {_varCheck_(7099,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg];} ; {_varCheck_(7099,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg];} ; ; ; ; ; ; {_varCheck_(7099,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg].word;} } ; {_varCheck_(7099,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) lowest_active_reg;} ; {_varCheck_(7099,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) highest_active_reg;} ; ; {_varCheck_(7099,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) 0;} ; ; ; {_varCheck_(7099,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) 0;} ; ; } while (0);
          goto unconditional_jump;







        case push_dummy_failure:
          ;


          do { char *destination; int this_reg; ; ; ; ; ; ; ; while (((fail_stack).size - (fail_stack).avail) < ((highest_active_reg - lowest_active_reg + 1) * 3 + 4)) { if (!((fail_stack).size > re_max_failures * ((num_regs - 1) * 3 + 4) ? 0 : ((fail_stack).stack = (fail_stack_elt_t *) (destination = (char *) __builtin_alloca (((fail_stack).size << 1) * sizeof (fail_stack_elt_t)), memcpy ((destination), ((fail_stack).stack), ((fail_stack).size * sizeof (fail_stack_elt_t))), destination), (fail_stack).stack == ((void *)0) ? 0 : ((fail_stack).size <<= 1, 1)))) return -2; ; ; } ; for (this_reg = lowest_active_reg; this_reg <= highest_active_reg; this_reg++) { ; ; ; {_varCheck_(7112,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regstart[this_reg];} ; {_varCheck_(7112,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) regend[this_reg];} ; ; ; ; ; ; {_varCheck_(7112,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) reg_info[this_reg].word;} } ; {_varCheck_(7112,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) lowest_active_reg;} ; {_varCheck_(7112,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) highest_active_reg;} ; ; {_varCheck_(7112,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) 0;} ; ; ; {_varCheck_(7112,&fail_stack.stack[fail_stack.avail++],fail_stack.stack,"&fail_stack.stack[fail_stack.avail++]");fail_stack.stack[fail_stack.avail++] = (fail_stack_elt_t) 0;} ; ; } while (0);
          break;



        case succeed_n:
          do { {_varCheck_(7118,(mcnt),0,"(mcnt)");(mcnt) = *(p + 2) & 0377;} {_varCheck_(7118,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p + 2) + 1))) << 8;} } while (0);
          ;

          ;

          if (mcnt > 0)
            {
               mcnt--;
        {_varCheck_(7126,p,0,"p");p += 2;}
               do { do { {_varCheck_(7127,&(p)[0],(p),"&(p)[0]");(p)[0] = (mcnt) & 0377;} {_varCheck_(7127,&(p)[1],(p),"&(p)[1]");(p)[1] = (mcnt) >> 8;} } while (0); {_varCheck_(7127,(p),0,"(p)");(p) += 2;} } while (0);
               ;
            }
   else if (mcnt == 0)
            {
              ;
       {_varCheck_(7133,&p[2],p,"&p[2]");p[2] = (unsigned char) no_op;}
              {_varCheck_(7134,&p[3],p,"&p[3]");p[3] = (unsigned char) no_op;}
              goto on_failure;
            }
          break;

        case jump_n:
          do { {_varCheck_(7140,(mcnt),0,"(mcnt)");(mcnt) = *(p + 2) & 0377;} {_varCheck_(7140,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p + 2) + 1))) << 8;} } while (0);
          ;


          if (mcnt)
            {
               mcnt--;
               do { {_varCheck_(7147,&(p + 2)[0],(p + 2),"&(p + 2)[0]");(p + 2)[0] = (mcnt) & 0377;} {_varCheck_(7147,&(p + 2)[1],(p + 2),"&(p + 2)[1]");(p + 2)[1] = (mcnt) >> 8;} } while (0);
        goto unconditional_jump;
            }

   else
     p += 4;
          break;

 case set_number_at:
   {
            ;

            do { do { {_varCheck_(7159,(mcnt),0,"(mcnt)");(mcnt) = *(p) & 0377;} {_varCheck_(7159,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(7159,(p),0,"(p)");(p) += 2;} } while (0);
            {_varCheck_(7160,p1,0,"p1");p1 = p + mcnt;}
            do { do { {_varCheck_(7161,(mcnt),0,"(mcnt)");(mcnt) = *(p) & 0377;} {_varCheck_(7161,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p) + 1))) << 8;} } while (0); {_varCheck_(7161,(p),0,"(p)");(p) += 2;} } while (0);
            ;
     do { {_varCheck_(7163,&(p1)[0],(p1),"&(p1)[0]");(p1)[0] = (mcnt) & 0377;} {_varCheck_(7163,&(p1)[1],(p1),"&(p1)[1]");(p1)[1] = (mcnt) >> 8;} } while (0);
            break;
          }

        case wordbound:
          ;
          if ((((d) == (size1 ? string1 : string2) || !size2) || ((d) == end2) || (re_syntax_table[(d - 1) == end1 ? *string2 : (d - 1) == string2 - 1 ? *(end1 - 1) : *(d - 1)] == 1) != (re_syntax_table[(d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d)] == 1)))
     break;
          goto fail;

 case notwordbound:
          ;
   if ((((d) == (size1 ? string1 : string2) || !size2) || ((d) == end2) || (re_syntax_table[(d - 1) == end1 ? *string2 : (d - 1) == string2 - 1 ? *(end1 - 1) : *(d - 1)] == 1) != (re_syntax_table[(d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d)] == 1)))
     goto fail;
          break;

 case wordbeg:
          ;
   if ((re_syntax_table[(d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d)] == 1) && (((d) == (size1 ? string1 : string2) || !size2) || !(re_syntax_table[(d - 1) == end1 ? *string2 : (d - 1) == string2 - 1 ? *(end1 - 1) : *(d - 1)] == 1)))
     break;
          goto fail;

 case wordend:
          ;
   if (!((d) == (size1 ? string1 : string2) || !size2) && (re_syntax_table[(d - 1) == end1 ? *string2 : (d - 1) == string2 - 1 ? *(end1 - 1) : *(d - 1)] == 1)
              && (!(re_syntax_table[(d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d)] == 1) || ((d) == end2)))
     break;
          goto fail;
# 5916 "target/grep.c"
 case wordchar:
          ;
   while (d == dend) { if (dend == end_match_2) goto fail; {_varCheck_(7194,d,0,"d");d = string2;} {_varCheck_(7194,dend,0,"dend");dend = end_match_2;} };
          if (!(re_syntax_table[(d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d)] == 1))
            goto fail;
   do { unsigned r; for (r = lowest_active_reg; r <= highest_active_reg; r++) { {_varCheck_(7197,&((reg_info[r]).bits.matched_something),((reg_info).bits.matched_something),"&((reg_info[r]).bits.matched_something)");((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1;} } } while (0);
          d++;
   break;

 case notwordchar:
          ;
   while (d == dend) { if (dend == end_match_2) goto fail; {_varCheck_(7203,d,0,"d");d = string2;} {_varCheck_(7203,dend,0,"dend");dend = end_match_2;} };
   if ((re_syntax_table[(d) == end1 ? *string2 : (d) == string2 - 1 ? *(end1 - 1) : *(d)] == 1))
            goto fail;
          do { unsigned r; for (r = lowest_active_reg; r <= highest_active_reg; r++) { {_varCheck_(7206,&((reg_info[r]).bits.matched_something),((reg_info).bits.matched_something),"&((reg_info[r]).bits.matched_something)");((reg_info[r]).bits.matched_something) = ((reg_info[r]).bits.ever_matched_something) = 1;} } } while (0);
          d++;
   break;


        default:
          abort ();
 }
      continue;



    fail:
      if (!(fail_stack.avail == 0))
 {
          ;
          { int this_reg; const unsigned char *string_temp; ; ; ; ; ; ; ; {_varCheck_(7222,string_temp,0,"string_temp");string_temp = fail_stack.stack[--fail_stack.avail];} if (string_temp != ((void *)0)) {_varCheck_(7222,d,0,"d");d = (const char *) string_temp;} ; ; ; {_varCheck_(7222,p,0,"p");p = (unsigned char *) fail_stack.stack[--fail_stack.avail];} ; ; {_varCheck_(7222,highest_active_reg,0,"highest_active_reg");highest_active_reg = (unsigned) fail_stack.stack[--fail_stack.avail];} ; {_varCheck_(7222,lowest_active_reg,0,"lowest_active_reg");lowest_active_reg = (unsigned) fail_stack.stack[--fail_stack.avail];} ; for (this_reg = highest_active_reg; this_reg >= lowest_active_reg; this_reg--) { ; {_varCheck_(7222,&reg_info[this_reg].word,reg_info.word,"&reg_info[this_reg].word");reg_info[this_reg].word = fail_stack.stack[--fail_stack.avail];} ; {_varCheck_(7222,&regend[this_reg],regend,"&regend[this_reg]");regend[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail];} ; {_varCheck_(7222,&regstart[this_reg],regstart,"&regstart[this_reg]");regstart[this_reg] = (const char *) fail_stack.stack[--fail_stack.avail];} ; } ; };




          if (!p)
     goto fail;


   ;
          if (p < pend)
            {
              boolean is_a_jump_n = 0;



              switch ((re_opcode_t) *p)
                {
                case jump_n:
                  {_varCheck_(7241,is_a_jump_n,0,"is_a_jump_n");is_a_jump_n = 1;}
                case maybe_pop_jump:
                case pop_failure_jump:
                case jump:
                  {_varCheck_(7245,p1,0,"p1");p1 = p + 1;}
                  do { do { {_varCheck_(7246,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(7246,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(7246,(p1),0,"(p1)");(p1) += 2;} } while (0);
                  {_varCheck_(7247,p1,0,"p1");p1 += mcnt;}

                  if ((is_a_jump_n && (re_opcode_t) *p1 == succeed_n)
                      || (!is_a_jump_n
                          && (re_opcode_t) *p1 == on_failure_jump))
                    goto fail;
                  break;
                default:
                                   ;
                }
            }

          if (d >= string1 && d <= end1)
     {_varCheck_(7260,dend,0,"dend");dend = end_match_1;}
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

  unsigned char *p1 = *p + 2;

  while (p1 < end)
    {




      switch ((re_opcode_t) *p1)
        {

        case on_failure_jump:
          p1++;
          do { do { {_varCheck_(7294,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(7294,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(7294,(p1),0,"(p1)");(p1) += 2;} } while (0);




   if (mcnt >= 0)
     {
# 6056 "target/grep.c"
              while ((re_opcode_t) p1[mcnt-3] == jump_past_alt)
                {




                  if (!alt_match_null_string_p (p1, p1 + mcnt - 3,
                          reg_info))
                    return 0;



                  {_varCheck_(7314,p1,0,"p1");p1 += mcnt;}



                  if ((re_opcode_t) *p1 != on_failure_jump)
                    break;



    p1++;
                  do { do { {_varCheck_(7324,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(7324,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(7324,(p1),0,"(p1)");(p1) += 2;} } while (0);
                  if ((re_opcode_t) p1[mcnt-3] != jump_past_alt)
                    {

                      {_varCheck_(7328,p1,0,"p1");p1 -= 3;}
                      break;
                    }
                }




              do { {_varCheck_(7336,(mcnt),0,"(mcnt)");(mcnt) = *(p1 - 2) & 0377;} {_varCheck_(7336,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1 - 2) + 1))) << 8;} } while (0);

              if (!alt_match_null_string_p (p1, p1 + mcnt, reg_info))
                return 0;

              {_varCheck_(7341,p1,0,"p1");p1 += mcnt;}
            }
          break;


        case stop_memory:
   ;
          {_varCheck_(7348,p,1,"p");*p = p1 + 2;}
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

  while (p1 < end)
    {



      switch ((re_opcode_t) *p1)
        {

        case on_failure_jump:
          p1++;
          do { do { {_varCheck_(7384,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(7384,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(7384,(p1),0,"(p1)");(p1) += 2;} } while (0);
          {_varCheck_(7385,p1,0,"p1");p1 += mcnt;}
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
      {_varCheck_(7432,reg_no,0,"reg_no");reg_no = *p1;}
      ;
      {_varCheck_(7434,ret,0,"ret");ret = group_match_null_string_p (&p1, end, reg_info);}




      if (((reg_info[reg_no]).bits.match_null_string_p) == 3)
        {_varCheck_(7440,&((reg_info[reg_no]).bits.match_null_string_p),((reg_info).bits.match_null_string_p),"&((reg_info[reg_no]).bits.match_null_string_p)");((reg_info[reg_no]).bits.match_null_string_p) = ret;}

      if (!ret)
        return 0;
      break;


    case jump:
      do { do { {_varCheck_(7448,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(7448,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(7448,(p1),0,"(p1)");(p1) += 2;} } while (0);
      if (mcnt >= 0)
        p1 += mcnt;
      else
        return 0;
      break;

    case succeed_n:

      {_varCheck_(7457,p1,0,"p1");p1 += 2;}
      do { do { {_varCheck_(7458,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(7458,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(7458,(p1),0,"(p1)");(p1) += 2;} } while (0);

      if (mcnt == 0)
        {
          {_varCheck_(7462,p1,0,"p1");p1 -= 4;}
          do { do { {_varCheck_(7463,(mcnt),0,"(mcnt)");(mcnt) = *(p1) & 0377;} {_varCheck_(7463,(mcnt),0,"(mcnt)");(mcnt) += ((signed char) (*((p1) + 1))) << 8;} } while (0); {_varCheck_(7463,(p1),0,"(p1)");(p1) += 2;} } while (0);
          {_varCheck_(7464,p1,0,"p1");p1 += mcnt;}
        }
      else
        return 0;
      break;

    case duplicate:
      if (!((reg_info[*p1]).bits.match_null_string_p))
        return 0;
      break;

    case set_number_at:
      {_varCheck_(7476,p1,0,"p1");p1 += 4;}

    default:

      return 0;
  }

  {_varCheck_(7483,p,1,"p");*p = p1;}
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
      if (translate[*p1++] != translate[*p2++]) return 1;
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



  {_varCheck_(7516,bufp->regs_allocated,0,"bufp->regs_allocated");bufp->regs_allocated = 0;}




  {_varCheck_(7521,bufp->no_sub,0,"bufp->no_sub");bufp->no_sub = 0;}


  {_varCheck_(7524,bufp->newline_anchor,0,"bufp->newline_anchor");bufp->newline_anchor = 1;}

  {_varCheck_(7526,ret,0,"ret");ret = regex_compile (pattern, length, re_syntax_options, bufp);}

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
    = (cflags & 1) ?
      (((((1) << 1) << 1) | (((((((1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((1) << 1) << 1) << 1) | (((((1) << 1) << 1) << 1) << 1) | (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) : (((((1) << 1) << 1) | (((((((1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((1) << 1));


  {_varCheck_(7543,preg->buffer,0,"preg->buffer");preg->buffer = 0;}
  {_varCheck_(7544,preg->allocated,0,"preg->allocated");preg->allocated = 0;}
  {_varCheck_(7545,preg->used,0,"preg->used");preg->used = 0;}





  {_varCheck_(7551,preg->fastmap,0,"preg->fastmap");preg->fastmap = 0;}

  if (cflags & (1 << 1))
    {
      unsigned i;

      {_varCheck_(7557,preg->translate,0,"preg->translate");preg->translate = (char *) malloc (256);}
      if (preg->translate == ((void *)0))
        return (int) REG_ESPACE;


      for (i = 0; i < 256; i++)
        {_varCheck_(7563,&preg->translate[i],preg->translate,"&preg->translate[i]");preg->translate[i] = (1 && ((*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) _ISupper)) ? tolower (i) : i;}
    }
  else
    preg->translate = ((void *)0);


  if (cflags & ((1 << 1) << 1))
    {
      {_varCheck_(7571,syntax,0,"syntax");syntax &= ~(((((((1) << 1) << 1) << 1) << 1) << 1) << 1);}
      {_varCheck_(7572,syntax,0,"syntax");syntax |= (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1);}

      {_varCheck_(7574,preg->newline_anchor,0,"preg->newline_anchor");preg->newline_anchor = 1;}
    }
  else
    preg->newline_anchor = 0;

  {_varCheck_(7579,preg->no_sub,0,"preg->no_sub");preg->no_sub = !!(cflags & (((1 << 1) << 1) << 1));}



  {_varCheck_(7583,ret,0,"ret");ret = regex_compile (pattern, strlen (pattern), syntax, preg);}



  if (ret == REG_ERPAREN) {_varCheck_(7587,ret,0,"ret");ret = REG_EPAREN;}

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
  boolean want_reg_info = !preg->no_sub && nmatch > 0;

  {_varCheck_(7606,private_preg,0,"private_preg");private_preg = *preg;}

  {_varCheck_(7608,private_preg.not_bol,0,"private_preg.not_bol");private_preg.not_bol = !!(eflags & 1);}
  {_varCheck_(7609,private_preg.not_eol,0,"private_preg.not_eol");private_preg.not_eol = !!(eflags & (1 << 1));}




  {_varCheck_(7614,private_preg.regs_allocated,0,"private_preg.regs_allocated");private_preg.regs_allocated = 2;}

  if (want_reg_info)
    {
      {_varCheck_(7618,regs.num_regs,0,"regs.num_regs");regs.num_regs = nmatch;}
      {_varCheck_(7619,regs.start,0,"regs.start");regs.start = ((regoff_t *) malloc ((nmatch) * sizeof (regoff_t)));}
      {_varCheck_(7620,regs.end,0,"regs.end");regs.end = ((regoff_t *) malloc ((nmatch) * sizeof (regoff_t)));}
      if (regs.start == ((void *)0) || regs.end == ((void *)0))
        return (int) REG_NOMATCH;
    }


  {_varCheck_(7626,ret,0,"ret");ret = re_search (&private_preg, string, len,
                                0, len,
                   want_reg_info ? &regs : (struct re_registers *) 0);}


  if (want_reg_info)
    {
      if (ret >= 0)
        {
          unsigned r;

          for (r = 0; r < nmatch; r++)
            {
              {_varCheck_(7639,&pmatch[r].rm_so,pmatch.rm_so,"&pmatch[r].rm_so");pmatch[r].rm_so = regs.start[r];}
              {_varCheck_(7640,&pmatch[r].rm_eo,pmatch.rm_eo,"&pmatch[r].rm_eo");pmatch[r].rm_eo = regs.end[r];}
            }
        }


      free (regs.start);
      free (regs.end);
    }


  return ret >= 0 ? (int) REG_NOERROR : (int) REG_NOMATCH;
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

  if (errcode < 0
      || errcode >= (sizeof (re_error_msg) / sizeof (re_error_msg[0])))




    abort ();

  {_varCheck_(7675,msg,0,"msg");msg = re_error_msg[errcode];}



  if (! msg)
    {_varCheck_(7680,msg,0,"msg");msg = "Success";}

  {_varCheck_(7682,msg_size,0,"msg_size");msg_size = strlen (msg) + 1;}

  if (errbuf_size != 0)
    {
      if (msg_size > errbuf_size)
        {
          strncpy (errbuf, msg, errbuf_size - 1);
          {_varCheck_(7689,&errbuf[errbuf_size - 1],errbuf,"&errbuf[errbuf_size - 1]");errbuf[errbuf_size - 1] = 0;}
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
  if (preg->buffer != ((void *)0))
    free (preg->buffer);
  {_varCheck_(7707,preg->buffer,0,"preg->buffer");preg->buffer = ((void *)0);}

  {_varCheck_(7709,preg->allocated,0,"preg->allocated");preg->allocated = 0;}
  {_varCheck_(7710,preg->used,0,"preg->used");preg->used = 0;}

  if (preg->fastmap != ((void *)0))
    free (preg->fastmap);
  {_varCheck_(7714,preg->fastmap,0,"preg->fastmap");preg->fastmap = ((void *)0);}
  {_varCheck_(7715,preg->fastmap_accurate,0,"preg->fastmap_accurate");preg->fastmap_accurate = 0;}

  if (preg->translate != ((void *)0))
    free (preg->translate);
  {_varCheck_(7719,preg->translate,0,"preg->translate");preg->translate = ((void *)0);}
}
# 6700 "target/grep.c"
# 1 "target/dfa.h" 1
# 38 "target/dfa.h"
typedef int charclass[(((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int)))];





typedef enum
{
  END = -1,







  EMPTY = (1 << 8),


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
  return c[b / (8 * sizeof (int))] & 1 << b % (8 * sizeof (int));
}

static void
setbit(b, c)
     int b;
     charclass c;
{
  {_varCheck_(8004,&c[b / (8 * sizeof(int))],c,"&c[b / (8 * sizeof(int))]");c[b / (8 * sizeof (int))] |= 1 << b % (8 * sizeof (int));}
}

static void
clrbit(b, c)
     int b;
     charclass c;
{
  {_varCheck_(8012,&c[b / (8 * sizeof(int))],c,"&c[b / (8 * sizeof(int))]");c[b / (8 * sizeof (int))] &= ~(1 << b % (8 * sizeof (int)));}
}

static void
copyset(src, dst)
     charclass src;
     charclass dst;
{
  int i;

  for (i = 0; i < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++i)
    {_varCheck_(8023,&dst[i],dst,"&dst[i]");dst[i] = src[i];}
}

static void
zeroset(s)
     charclass s;
{
  int i;

  for (i = 0; i < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++i)
    {_varCheck_(8033,&s[i],s,"&s[i]");s[i] = 0;}
}

static void
notset(s)
     charclass s;
{
  int i;

  for (i = 0; i < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++i)
    {_varCheck_(8043,&s[i],s,"&s[i]");s[i] = ~s[i];}
}

static int
equal(s1, s2)
     charclass s1;
     charclass s2;
{
  int i;

  for (i = 0; i < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++i)
    if (s1[i] != s2[i])
      return 0;
  return 1;
}


static struct dfa *dfa;


static int
charclass_index(s)
     charclass s;
{
  int i;

  for (i = 0; i < dfa->cindex; ++i)
    if (equal(s, dfa->charclasses[i]))
      return i;
  if ((dfa->cindex) >= (dfa->calloc)) { while ((dfa->cindex) >= (dfa->calloc)) (dfa->calloc) *= 2; ((dfa->charclasses) = (charclass *) xrealloc_1((ptr_t) (dfa->charclasses), (dfa->calloc) * sizeof (charclass))); };
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
  {_varCheck_(8090,syntax_bits_set,0,"syntax_bits_set");syntax_bits_set = 1;}
  {_varCheck_(8091,syntax_bits,0,"syntax_bits");syntax_bits = bits;}
  {_varCheck_(8092,case_fold,0,"case_fold");case_fold = fold;}
}






static char *lexstart;
static char *lexptr;
static lexleft;
static token lasttok;
static int laststart;

static int parens;
static int minrep, maxrep;
# 6934 "target/grep.c"
static int is_alpha(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalpha)); }
static int is_upper(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISupper)); }
static int is_lower(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISlower)); }
static int is_digit(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit)); }
static int is_xdigit(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISxdigit)); }
static int is_space(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISspace)); }
static int is_punct(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISpunct)); }
static int is_alnum(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalnum)); }
static int is_print(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISprint)); }
static int is_graph(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISgraph)); }
static int is_cntrl(c) int c; { return (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _IScntrl)); }




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

  {_varCheck_(8148,len,0,"len");len = strlen(s);}
  if (lexleft < len)
    return 0;
  return strncmp(s, lexptr, len) == 0;
}

static token
lex()
{
  token c, c1, c2;
  int backslash = 0, invert;
  charclass ccl;
  int i;







  for (i = 0; i < 2; ++i)
    {
      { if (! lexleft) if (0 != 0) dfaerror(0); else return END; {_varCheck_(8170,(c),0,"(c)");(c) = (unsigned char) *lexptr++;} --lexleft; };
      switch (c)
 {
 case '\\':
   if (backslash)
     goto normal_char;
   if (lexleft == 0)
     dfaerror("Unfinished \\ escape");
   {_varCheck_(8178,backslash,0,"backslash");backslash = 1;}
   break;

 case '^':
   if (backslash)
     goto normal_char;
   if (syntax_bits & ((((1) << 1) << 1) << 1)
       || lasttok == END
       || lasttok == LPAREN
       || lasttok == OR)
     return lasttok = BEGLINE;
   goto normal_char;

 case '$':
   if (backslash)
     goto normal_char;
   if (syntax_bits & ((((1) << 1) << 1) << 1)
       || lexleft == 0
       || (syntax_bits & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)
    ? lexleft > 0 && *lexptr == ')'
    : lexleft > 1 && lexptr[0] == '\\' && lexptr[1] == ')')
       || (syntax_bits & ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)
    ? lexleft > 0 && *lexptr == '|'
    : lexleft > 1 && lexptr[0] == '\\' && lexptr[1] == '|')
       || ((syntax_bits & ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
           && lexleft > 0 && *lexptr == '\n'))
     return lasttok = ENDLINE;
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
   if (backslash && !(syntax_bits & (((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
     {
       {_varCheck_(8218,laststart,0,"laststart");laststart = 0;}
       return lasttok = BACKREF;
     }
   goto normal_char;

 case '<':
   if (backslash)
     return lasttok = BEGWORD;
   goto normal_char;

 case '>':
   if (backslash)
     return lasttok = ENDWORD;
   goto normal_char;

 case 'b':
   if (backslash)
     return lasttok = LIMWORD;
   goto normal_char;

 case 'B':
   if (backslash)
     return lasttok = NOTLIMWORD;
   goto normal_char;

 case '?':
   if (syntax_bits & (((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
     goto normal_char;
   if (backslash != ((syntax_bits & ((1) << 1)) != 0))
     goto normal_char;
   if (!(syntax_bits & (((((1) << 1) << 1) << 1) << 1)) && laststart)
     goto normal_char;
   return lasttok = QMARK;

 case '*':
   if (backslash)
     goto normal_char;
   if (!(syntax_bits & (((((1) << 1) << 1) << 1) << 1)) && laststart)
     goto normal_char;
   return lasttok = STAR;

 case '+':
   if (syntax_bits & (((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
     goto normal_char;
   if (backslash != ((syntax_bits & ((1) << 1)) != 0))
     goto normal_char;
   if (!(syntax_bits & (((((1) << 1) << 1) << 1) << 1)) && laststart)
     goto normal_char;
   return lasttok = PLUS;

 case '{':
   if (!(syntax_bits & ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
     goto normal_char;
   if (backslash != ((syntax_bits & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0))
     goto normal_char;
   {_varCheck_(8273,minrep,0,"minrep");minrep = maxrep = 0;}





   { if (! lexleft) if ("unfinished repeat count" != 0) dfaerror("unfinished repeat count"); else return END; {_varCheck_(8279,(c),0,"(c)");(c) = (unsigned char) *lexptr++;} --lexleft; };
   if ((1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit)))
     {
       {_varCheck_(8282,minrep,0,"minrep");minrep = c - '0';}
       for (;;)
  {
    { if (! lexleft) if ("unfinished repeat count" != 0) dfaerror("unfinished repeat count"); else return END; {_varCheck_(8285,(c),0,"(c)");(c) = (unsigned char) *lexptr++;} --lexleft; };
    if (!(1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit)))
      break;
    {_varCheck_(8288,minrep,0,"minrep");minrep = 10 * minrep + c - '0';}
  }
     }
   else if (c != ',')
     dfaerror("malformed repeat count");
   if (c == ',')
     for (;;)
       {
  { if (! lexleft) if ("unfinished repeat count" != 0) dfaerror("unfinished repeat count"); else return END; {_varCheck_(8296,(c),0,"(c)");(c) = (unsigned char) *lexptr++;} --lexleft; };
  if (!(1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit)))
    break;
  {_varCheck_(8299,maxrep,0,"maxrep");maxrep = 10 * maxrep + c - '0';}
       }
   else
     maxrep = minrep;
   if (!(syntax_bits & (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
     {
       if (c != '\\')
  dfaerror("malformed repeat count");
       { if (! lexleft) if ("unfinished repeat count" != 0) dfaerror("unfinished repeat count"); else return END; {_varCheck_(8307,(c),0,"(c)");(c) = (unsigned char) *lexptr++;} --lexleft; };
     }
   if (c != '}')
     dfaerror("malformed repeat count");
   {_varCheck_(8311,laststart,0,"laststart");laststart = 0;}
   return lasttok = REPMN;

 case '|':
   if (syntax_bits & (((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
     goto normal_char;
   if (backslash != ((syntax_bits & ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0))
     goto normal_char;
   {_varCheck_(8319,laststart,0,"laststart");laststart = 1;}
   return lasttok = OR;

 case '\n':
   if (syntax_bits & (((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)
       || backslash
       || !(syntax_bits & ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
     goto normal_char;
   {_varCheck_(8327,laststart,0,"laststart");laststart = 1;}
   return lasttok = OR;

 case '(':
   if (backslash != ((syntax_bits & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0))
     goto normal_char;
   ++parens;
   {_varCheck_(8334,laststart,0,"laststart");laststart = 1;}
   return lasttok = LPAREN;

 case ')':
   if (backslash != ((syntax_bits & ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0))
     goto normal_char;
   if (parens == 0 && syntax_bits & ((((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
     goto normal_char;
   --parens;
   {_varCheck_(8343,laststart,0,"laststart");laststart = 0;}
   return lasttok = RPAREN;

 case '.':
   if (backslash)
     goto normal_char;
   zeroset(ccl);
   notset(ccl);
   if (!(syntax_bits & (((((((1) << 1) << 1) << 1) << 1) << 1) << 1)))
     clrbit('\n', ccl);
   if (syntax_bits & ((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
     clrbit('\0', ccl);
   {_varCheck_(8355,laststart,0,"laststart");laststart = 0;}
   return lasttok = CSET + charclass_index(ccl);

 case 'w':
 case 'W':
   if (!backslash)
     goto normal_char;
   zeroset(ccl);
   for (c2 = 0; c2 < (1 << 8); ++c2)
     if ((1 && ((*__ctype_b_loc ())[(int) ((c2))] & (unsigned short int) _ISalnum)))
       setbit(c2, ccl);
   if (c == 'W')
     notset(ccl);
   {_varCheck_(8368,laststart,0,"laststart");laststart = 0;}
   return lasttok = CSET + charclass_index(ccl);

 case '[':
   if (backslash)
     goto normal_char;
   zeroset(ccl);
   { if (! lexleft) if ("Unbalanced [" != 0) dfaerror("Unbalanced ["); else return END; {_varCheck_(8375,(c),0,"(c)");(c) = (unsigned char) *lexptr++;} --lexleft; };
   if (c == '^')
     {
       { if (! lexleft) if ("Unbalanced [" != 0) dfaerror("Unbalanced ["); else return END; {_varCheck_(8378,(c),0,"(c)");(c) = (unsigned char) *lexptr++;} --lexleft; };
       {_varCheck_(8379,invert,0,"invert");invert = 1;}
     }
   else
     invert = 0;
   do
     {






       if (c == '[' && (syntax_bits & (((1) << 1) << 1)))
  for (c1 = 0; prednames[c1].name; ++c1)
    if (looking_at(prednames[c1].name))
      {
        for (c2 = 0; c2 < (1 << 8); ++c2)
   if ((*prednames[c1].pred)(c2))
     setbit(c2, ccl);
        {_varCheck_(8398,lexptr,0,"lexptr");lexptr += strlen(prednames[c1].name);}
        {_varCheck_(8399,lexleft,0,"lexleft");lexleft -= strlen(prednames[c1].name);}
        { if (! lexleft) if ("Unbalanced [" != 0) dfaerror("Unbalanced ["); else return END; {_varCheck_(8400,(c1),0,"(c1)");(c1) = (unsigned char) *lexptr++;} --lexleft; };
        goto skip;
      }
       if (c == '\\' && (syntax_bits & (1)))
  { if (! lexleft) if ("Unbalanced [" != 0) dfaerror("Unbalanced ["); else return END; {_varCheck_(8404,(c),0,"(c)");(c) = (unsigned char) *lexptr++;} --lexleft; };
       { if (! lexleft) if ("Unbalanced [" != 0) dfaerror("Unbalanced ["); else return END; {_varCheck_(8405,(c1),0,"(c1)");(c1) = (unsigned char) *lexptr++;} --lexleft; };
       if (c1 == '-')
  {
    { if (! lexleft) if ("Unbalanced [" != 0) dfaerror("Unbalanced ["); else return END; {_varCheck_(8408,(c2),0,"(c2)");(c2) = (unsigned char) *lexptr++;} --lexleft; };
    if (c2 == ']')
      {


        --lexptr;
        ++lexleft;
        {_varCheck_(8415,c2,0,"c2");c2 = c;}
      }
    else
      {
        if (c2 == '\\'
     && (syntax_bits & (1)))
   { if (! lexleft) if ("Unbalanced [" != 0) dfaerror("Unbalanced ["); else return END; {_varCheck_(8421,(c2),0,"(c2)");(c2) = (unsigned char) *lexptr++;} --lexleft; };
        { if (! lexleft) if ("Unbalanced [" != 0) dfaerror("Unbalanced ["); else return END; {_varCheck_(8422,(c1),0,"(c1)");(c1) = (unsigned char) *lexptr++;} --lexleft; };
      }
  }
       else
  c2 = c;
       while (c <= c2)
  {
    setbit(c, ccl);
    if (case_fold)
      if ((1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISupper)))
        setbit(tolower(c), ccl);
      else if ((1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISlower)))
        setbit(toupper(c), ccl);
    ++c;
  }
     skip:
       ;
     }
   while ((c = c1) != ']');
   if (invert)
     {
       notset(ccl);
       if (syntax_bits & (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  clrbit('\n', ccl);
     }
   {_varCheck_(8447,laststart,0,"laststart");laststart = 0;}
   return lasttok = CSET + charclass_index(ccl);

 default:
 normal_char:
   laststart = 0;
   if (case_fold && (1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalpha)))
     {
       zeroset(ccl);
       setbit(c, ccl);
       if (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISupper))
  setbit(tolower(c), ccl);
       else
  setbit(toupper(c), ccl);
       return lasttok = CSET + charclass_index(ccl);
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
  if ((dfa->tindex) >= (dfa->talloc)) { while ((dfa->tindex) >= (dfa->talloc)) (dfa->talloc) *= 2; ((dfa->tokens) = (token *) xrealloc_1((ptr_t) (dfa->tokens), (dfa->talloc) * sizeof (token))); };
  {_varCheck_(8488,&dfa->tokens[dfa->tindex++],dfa->tokens,"&dfa->tokens[dfa->tindex++]");dfa->tokens[dfa->tindex++] = t;}

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
  if (depth > dfa->depth)
    {_varCheck_(8510,dfa->depth,0,"dfa->depth");dfa->depth = depth;}
}
# 7369 "target/grep.c"
static void regexp(int);




static void
atom()
{
  if ((tok >= 0 && tok < (1 << 8)) || tok >= CSET || tok == BACKREF
      || tok == BEGLINE || tok == ENDLINE || tok == BEGWORD
      || tok == ENDWORD || tok == LIMWORD || tok == NOTLIMWORD)
    {
      addtok(tok);
      {_varCheck_(8526,tok,0,"tok");tok = lex();}
    }
  else if (tok == LPAREN)
    {
      {_varCheck_(8530,tok,0,"tok");tok = lex();}
      regexp(0);
      if (tok != RPAREN)
 dfaerror("Unbalanced (");
      {_varCheck_(8534,tok,0,"tok");tok = lex();}
    }
  else
    addtok(EMPTY);
}


static int
nsubtoks(tindex)
{
  int ntoks1;

  switch (dfa->tokens[tindex - 1])
    {
    default:
      return 1;
    case QMARK:
    case STAR:
    case PLUS:
      return 1 + nsubtoks(tindex - 1);
    case CAT:
    case OR:
    case ORTOP:
      {_varCheck_(8557,ntoks1,0,"ntoks1");ntoks1 = nsubtoks(tindex - 1);}
      return 1 + ntoks1 + nsubtoks(tindex - 1 - ntoks1);
    }
}


static void
copytoks(tindex, ntokens)
     int tindex, ntokens;
{
  int i;

  for (i = 0; i < ntokens; ++i)
    addtok(dfa->tokens[tindex + i]);
}

static void
closure()
{
  int tindex, ntokens, i;

  atom();
  while (tok == QMARK || tok == STAR || tok == PLUS || tok == REPMN)
    if (tok == REPMN)
      {
 {_varCheck_(8582,ntokens,0,"ntokens");ntokens = nsubtoks(dfa->tindex);}
 {_varCheck_(8583,tindex,0,"tindex");tindex = dfa->tindex - ntokens;}
 if (maxrep == 0)
   addtok(PLUS);
 if (minrep == 0)
   addtok(QMARK);
 for (i = 1; i < minrep; ++i)
   {
     copytoks(tindex, ntokens);
     addtok(CAT);
   }
 for (; i < maxrep; ++i)
   {
     copytoks(tindex, ntokens);
     addtok(QMARK);
     addtok(CAT);
   }
 {_varCheck_(8599,tok,0,"tok");tok = lex();}
      }
    else
      {
 addtok(tok);
 {_varCheck_(8604,tok,0,"tok");tok = lex();}
      }
}

static void
branch()
{
  closure();
  while (tok != RPAREN && tok != OR && tok >= 0)
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
  while (tok == OR)
    {
      {_varCheck_(8626,tok,0,"tok");tok = lex();}
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
  {_varCheck_(8645,dfa,0,"dfa");dfa = d;}
  {_varCheck_(8646,lexstart,0,"lexstart");lexstart = lexptr = s;}
  {_varCheck_(8647,lexleft,0,"lexleft");lexleft = len;}
  {_varCheck_(8648,lasttok,0,"lasttok");lasttok = END;}
  {_varCheck_(8649,laststart,0,"laststart");laststart = 1;}
  {_varCheck_(8650,parens,0,"parens");parens = 0;}

  if (! syntax_bits_set)
    dfaerror("No syntax specified");

  {_varCheck_(8655,tok,0,"tok");tok = lex();}
  {_varCheck_(8656,depth,0,"depth");depth = d->depth;}

  regexp(1);

  if (tok != END)
    dfaerror("Unbalanced )");

  addtok(END - d->nregexps);
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

  for (i = 0; i < src->nelem; ++i)
    {_varCheck_(8683,&dst->elems[i],dst->elems,"&dst->elems[i]");dst->elems[i] = src->elems[i];}
  {_varCheck_(8684,dst->nelem,0,"dst->nelem");dst->nelem = src->nelem;}
}





static void
insert(p, s)
     position p;
     position_set *s;
{
  int i;
  position t1, t2;

  for (i = 0; i < s->nelem && p.strchr < s->elems[i].strchr; ++i)
    ;
  if (i < s->nelem && p.strchr == s->elems[i].strchr)
    s->elems[i].constraint |= p.constraint;
  else
    {
      {_varCheck_(8705,t1,0,"t1");t1 = p;}
      ++s->nelem;
      while (i < s->nelem)
 {
   {_varCheck_(8709,t2,0,"t2");t2 = s->elems[i];}
   {_varCheck_(8710,&s->elems[i++],s->elems,"&s->elems[i++]");s->elems[i++] = t1;}
   {_varCheck_(8711,t1,0,"t1");t1 = t2;}
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

  {_varCheck_(8726,m->nelem,0,"m->nelem");m->nelem = 0;}
  while (i < s1->nelem && j < s2->nelem)
    if (s1->elems[i].strchr > s2->elems[j].strchr)
      {_varCheck_(8729,&m->elems[m->nelem++],m->elems,"&m->elems[m->nelem++]");m->elems[m->nelem++] = s1->elems[i++];}
    else if (s1->elems[i].strchr < s2->elems[j].strchr)
      {_varCheck_(8731,&m->elems[m->nelem++],m->elems,"&m->elems[m->nelem++]");m->elems[m->nelem++] = s2->elems[j++];}
    else
      {
 {_varCheck_(8734,&m->elems[m->nelem],m->elems,"&m->elems[m->nelem]");m->elems[m->nelem] = s1->elems[i++];}
 {_varCheck_(8735,&m->elems[m->nelem++].constraint,m->elems.constraint,"&m->elems[m->nelem++].constraint");m->elems[m->nelem++].constraint |= s2->elems[j++].constraint;}
      }
  while (i < s1->nelem)
    {_varCheck_(8738,&m->elems[m->nelem++],m->elems,"&m->elems[m->nelem++]");m->elems[m->nelem++] = s1->elems[i++];}
  while (j < s2->nelem)
    {_varCheck_(8740,&m->elems[m->nelem++],m->elems,"&m->elems[m->nelem++]");m->elems[m->nelem++] = s2->elems[j++];}
}


static void
delete(p, s)
     position p;
     position_set *s;
{
  int i;

  for (i = 0; i < s->nelem; ++i)
    if (p.strchr == s->elems[i].strchr)
      break;
  if (i < s->nelem)
    for (--s->nelem; i < s->nelem; ++i)
      {_varCheck_(8756,&s->elems[i],s->elems,"&s->elems[i]");s->elems[i] = s->elems[i + 1];}
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

  {_varCheck_(8774,newline,0,"newline");newline = newline ? 1 : 0;}
  {_varCheck_(8775,letter,0,"letter");letter = letter ? 1 : 0;}

  for (i = 0; i < s->nelem; ++i)
    hash ^= s->elems[i].strchr + s->elems[i].constraint;


  for (i = 0; i < d->sindex; ++i)
    {
      if (hash != d->states[i].hash || s->nelem != d->states[i].elems.nelem
   || newline != d->states[i].newline || letter != d->states[i].letter)
 continue;
      for (j = 0; j < s->nelem; ++j)
 if (s->elems[j].constraint
     != d->states[i].elems.elems[j].constraint
     || s->elems[j].strchr != d->states[i].elems.elems[j].strchr)
   break;
      if (j == s->nelem)
 return i;
    }


  if ((d->sindex) >= (d->salloc)) { while ((d->sindex) >= (d->salloc)) (d->salloc) *= 2; ((d->states) = (dfa_state *) xrealloc_1((ptr_t) (d->states), (d->salloc) * sizeof (dfa_state))); };
  {_varCheck_(8797,&d->states[i].hash,d->states.hash,"&d->states[i].hash");d->states[i].hash = hash;}
  ((d->states[i].elems.elems) = (position *) xmalloc_1((s->nelem) * sizeof (position)));
  copy(s, &d->states[i].elems);
  {_varCheck_(8800,&d->states[i].newline,d->states.newline,"&d->states[i].newline");d->states[i].newline = newline;}
  {_varCheck_(8801,&d->states[i].letter,d->states.letter,"&d->states[i].letter");d->states[i].letter = letter;}
  {_varCheck_(8802,&d->states[i].backref,d->states.backref,"&d->states[i].backref");d->states[i].backref = 0;}
  {_varCheck_(8803,&d->states[i].constraint,d->states.constraint,"&d->states[i].constraint");d->states[i].constraint = 0;}
  {_varCheck_(8804,&d->states[i].first_end,d->states.first_end,"&d->states[i].first_end");d->states[i].first_end = 0;}
  for (j = 0; j < s->nelem; ++j)
    if (d->tokens[s->elems[j].strchr] < 0)
      {
 {_varCheck_(8808,constraint,0,"constraint");constraint = s->elems[j].constraint;}
 if ((((constraint) & 1 << (((newline) ? 2 : 0) + ((0) ? 1 : 0) + 4)) && ((constraint) & 1 << (((letter) ? 2 : 0) + ((0) ? 1 : 0))))
     || (((constraint) & 1 << (((newline) ? 2 : 0) + ((0) ? 1 : 0) + 4)) && ((constraint) & 1 << (((letter) ? 2 : 0) + ((1) ? 1 : 0))))
     || (((constraint) & 1 << (((newline) ? 2 : 0) + ((1) ? 1 : 0) + 4)) && ((constraint) & 1 << (((letter) ? 2 : 0) + ((0) ? 1 : 0))))
     || (((constraint) & 1 << (((newline) ? 2 : 0) + ((1) ? 1 : 0) + 4)) && ((constraint) & 1 << (((letter) ? 2 : 0) + ((1) ? 1 : 0)))))
   d->states[i].constraint |= constraint;
 if (! d->states[i].first_end)
   {_varCheck_(8815,&d->states[i].first_end,d->states.first_end,"&d->states[i].first_end");d->states[i].first_end = d->tokens[s->elems[j].strchr];}
      }
    else if (d->tokens[s->elems[j].strchr] == BACKREF)
      {
 {_varCheck_(8819,&d->states[i].constraint,d->states.constraint,"&d->states[i].constraint");d->states[i].constraint = 0xff;}
 {_varCheck_(8820,&d->states[i].backref,d->states.backref,"&d->states[i].backref");d->states[i].backref = 1;}
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

  ((visited) = (int *) xmalloc_1((d->tindex) * sizeof (int)));
  for (i = 0; i < d->tindex; ++i)
    {_varCheck_(8844,&visited[i],visited,"&visited[i]");visited[i] = 0;}

  for (i = 0; i < s->nelem; ++i)
    if (d->tokens[s->elems[i].strchr] >= (1 << 8)
 && d->tokens[s->elems[i].strchr] != BACKREF
 && d->tokens[s->elems[i].strchr] < CSET)
      {
 {_varCheck_(8851,old,0,"old");old = s->elems[i];}
 {_varCheck_(8852,p.constraint,0,"p.constraint");p.constraint = old.constraint;}
 delete(s->elems[i], s);
 if (visited[old.strchr])
   {
     --i;
     continue;
   }
 {_varCheck_(8859,&visited[old.strchr],visited,"&visited[old.strchr]");visited[old.strchr] = 1;}
 switch (d->tokens[old.strchr])
   {
   case BEGLINE:
     {_varCheck_(8863,p.constraint,0,"p.constraint");p.constraint &= 0xcf;}
     break;
   case ENDLINE:
     {_varCheck_(8866,p.constraint,0,"p.constraint");p.constraint &= 0xaf;}
     break;
   case BEGWORD:
     {_varCheck_(8869,p.constraint,0,"p.constraint");p.constraint &= 0xf2;}
     break;
   case ENDWORD:
     {_varCheck_(8872,p.constraint,0,"p.constraint");p.constraint &= 0xf4;}
     break;
   case LIMWORD:
     {_varCheck_(8875,p.constraint,0,"p.constraint");p.constraint &= 0xf6;}
     break;
   case NOTLIMWORD:
     {_varCheck_(8878,p.constraint,0,"p.constraint");p.constraint &= 0xf9;}
     break;
   default:
     break;
   }
 for (j = 0; j < d->follows[old.strchr].nelem; ++j)
   {
     {_varCheck_(8885,p.strchr,0,"p.strchr");p.strchr = d->follows[old.strchr].elems[j].strchr;}
     insert(p, s);
   }

 {_varCheck_(8889,i,0,"i");i = -1;}
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
  {_varCheck_(8915,d->searchflag,0,"d->searchflag");d->searchflag = searchflag;}

  ((nullable) = (int *) xmalloc_1((d->depth) * sizeof (int)));
  {_varCheck_(8918,o_nullable,0,"o_nullable");o_nullable = nullable;}
  ((nfirstpos) = (int *) xmalloc_1((d->depth) * sizeof (int)));
  {_varCheck_(8920,o_nfirst,0,"o_nfirst");o_nfirst = nfirstpos;}
  ((firstpos) = (position *) xmalloc_1((d->nleaves) * sizeof (position)));
  {_varCheck_(8922,o_firstpos = firstpos,0,"o_firstpos = firstpos");o_firstpos = firstpos, firstpos += d->nleaves;}
  ((nlastpos) = (int *) xmalloc_1((d->depth) * sizeof (int)));
  {_varCheck_(8924,o_nlast,0,"o_nlast");o_nlast = nlastpos;}
  ((lastpos) = (position *) xmalloc_1((d->nleaves) * sizeof (position)));
  {_varCheck_(8926,o_lastpos = lastpos,0,"o_lastpos = lastpos");o_lastpos = lastpos, lastpos += d->nleaves;}
  ((nalloc) = (int *) xmalloc_1((d->tindex) * sizeof (int)));
  for (i = 0; i < d->tindex; ++i)
    {_varCheck_(8929,&nalloc[i],nalloc,"&nalloc[i]");nalloc[i] = 0;}
  ((merged.elems) = (position *) xmalloc_1((d->nleaves) * sizeof (position)));

  ((d->follows) = (position_set *) xcalloc((d->tindex), sizeof (position_set)));

  for (i = 0; i < d->tindex; ++i)



    switch (d->tokens[i])
      {
      case EMPTY:

 {_varCheck_(8942,nullable++,1,"nullable++");*nullable++ = 1;}


 {_varCheck_(8945,nfirstpos++,1,"nfirstpos++");*nfirstpos++ = *nlastpos++ = 0;}
 break;

      case STAR:
      case PLUS:


 {_varCheck_(8952,tmp.nelem,0,"tmp.nelem");tmp.nelem = nfirstpos[-1];}
 {_varCheck_(8953,tmp.elems,0,"tmp.elems");tmp.elems = firstpos;}
 {_varCheck_(8954,pos,0,"pos");pos = lastpos;}
 for (j = 0; j < nlastpos[-1]; ++j)
   {
     merge(&tmp, &d->follows[pos[j].strchr], &merged);
     if ((merged.nelem - 1) >= (nalloc[pos[j].strchr])) { while ((merged.nelem - 1) >= (nalloc[pos[j].strchr])) (nalloc[pos[j].strchr]) *= 2; ((d->follows[pos[j].strchr].elems) = (position *) xrealloc_1((ptr_t) (d->follows[pos[j].strchr].elems), (nalloc[pos[j].strchr]) * sizeof (position))); };

     copy(&merged, &d->follows[pos[j].strchr]);
   }

      case QMARK:

 if (d->tokens[i] != PLUS)
   {_varCheck_(8966,&nullable[-1],nullable,"&nullable[-1]");nullable[-1] = 1;}
 break;

      case CAT:


 {_varCheck_(8972,tmp.nelem,0,"tmp.nelem");tmp.nelem = nfirstpos[-1];}
 {_varCheck_(8973,tmp.elems,0,"tmp.elems");tmp.elems = firstpos;}
 {_varCheck_(8974,pos,0,"pos");pos = lastpos + nlastpos[-1];}
 for (j = 0; j < nlastpos[-2]; ++j)
   {
     merge(&tmp, &d->follows[pos[j].strchr], &merged);
     if ((merged.nelem - 1) >= (nalloc[pos[j].strchr])) { while ((merged.nelem - 1) >= (nalloc[pos[j].strchr])) (nalloc[pos[j].strchr]) *= 2; ((d->follows[pos[j].strchr].elems) = (position *) xrealloc_1((ptr_t) (d->follows[pos[j].strchr].elems), (nalloc[pos[j].strchr]) * sizeof (position))); };

     copy(&merged, &d->follows[pos[j].strchr]);
   }



 if (nullable[-2])
   nfirstpos[-2] += nfirstpos[-1];
 else
   firstpos += nfirstpos[-1];
 --nfirstpos;



 if (nullable[-1])
   nlastpos[-2] += nlastpos[-1];
 else
   {
     {_varCheck_(8997,pos,0,"pos");pos = lastpos + nlastpos[-2];}
     for (j = nlastpos[-1] - 1; j >= 0; --j)
       {_varCheck_(8999,&pos[j],pos,"&pos[j]");pos[j] = lastpos[j];}
     {_varCheck_(9000,lastpos,0,"lastpos");lastpos += nlastpos[-2];}
     {_varCheck_(9001,&nlastpos[-2],nlastpos,"&nlastpos[-2]");nlastpos[-2] = nlastpos[-1];}
   }
 --nlastpos;


 {_varCheck_(9006,&nullable[-2],nullable,"&nullable[-2]");nullable[-2] = nullable[-1] && nullable[-2];}
 --nullable;
 break;

      case OR:
      case ORTOP:

 {_varCheck_(9013,&nfirstpos[-2],nfirstpos,"&nfirstpos[-2]");nfirstpos[-2] += nfirstpos[-1];}
 --nfirstpos;


 {_varCheck_(9017,&nlastpos[-2],nlastpos,"&nlastpos[-2]");nlastpos[-2] += nlastpos[-1];}
 --nlastpos;


 {_varCheck_(9021,&nullable[-2],nullable,"&nullable[-2]");nullable[-2] = nullable[-1] || nullable[-2];}
 --nullable;
 break;

      default:





 {_varCheck_(9031,nullable++,1,"nullable++");*nullable++ = d->tokens[i] == BACKREF;}


 {_varCheck_(9034,nfirstpos++,1,"nfirstpos++");*nfirstpos++ = *nlastpos++ = 1;}
 {_varCheck_(9035,--firstpos,0,"--firstpos");--firstpos, --lastpos;}
 {_varCheck_(9036,firstpos->strchr,0,"firstpos->strchr");firstpos->strchr = lastpos->strchr = i;}
 {_varCheck_(9037,firstpos->constraint,0,"firstpos->constraint");firstpos->constraint = lastpos->constraint = 0xff;}


 {_varCheck_(9040,&nalloc[i],nalloc,"&nalloc[i]");nalloc[i] = 1;}
 ((d->follows[i].elems) = (position *) xmalloc_1((nalloc[i]) * sizeof (position)));
 break;
      }
# 7986 "target/grep.c"
  for (i = 0; i < d->tindex; ++i)
    if (d->tokens[i] < (1 << 8) || d->tokens[i] == BACKREF
 || d->tokens[i] >= CSET)
      {
# 8001 "target/grep.c"
 copy(&d->follows[i], &merged);
 epsclosure(&merged, d);
 if (d->follows[i].nelem < merged.nelem)
   ((d->follows[i].elems) = (position *) xrealloc_1((ptr_t) (d->follows[i].elems), (merged.nelem) * sizeof (position)));
 copy(&merged, &d->follows[i]);
      }



  {_varCheck_(9059,merged.nelem,0,"merged.nelem");merged.nelem = 0;}
  for (i = 0; i < nfirstpos[-1]; ++i)
    insert(firstpos[i], &merged);
  epsclosure(&merged, d);


  {_varCheck_(9065,wants_newline,0,"wants_newline");wants_newline = 0;}
  for (i = 0; i < merged.nelem; ++i)
    if ((((merged.elems[i].constraint) & 0xc0) >> 2 != ((merged.elems[i].constraint) & 0x30)))
      {_varCheck_(9068,wants_newline,0,"wants_newline");wants_newline = 1;}


  {_varCheck_(9071,d->salloc,0,"d->salloc");d->salloc = 1;}
  {_varCheck_(9072,d->sindex,0,"d->sindex");d->sindex = 0;}
  ((d->states) = (dfa_state *) xmalloc_1((d->salloc) * sizeof (dfa_state)));
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
  position_set grps[(1 << 8)];
  charclass labels[(1 << 8)];
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
      {_varCheck_(9116,initialized,0,"initialized");initialized = 1;}
      for (i = 0; i < (1 << 8); ++i)
 if ((1 && ((*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) _ISalnum)))
   setbit(i, letters);
      setbit('\n', newline);
    }

  zeroset(matches);

  for (i = 0; i < d->states[s].elems.nelem; ++i)
    {
      {_varCheck_(9127,pos,0,"pos");pos = d->states[s].elems.elems[i];}
      if (d->tokens[pos.strchr] >= 0 && d->tokens[pos.strchr] < (1 << 8))
 setbit(d->tokens[pos.strchr], matches);
      else if (d->tokens[pos.strchr] >= CSET)
 copyset(d->charclasses[d->tokens[pos.strchr] - CSET], matches);
      else
 continue;



      if (pos.constraint != 0xFF)
 {
   if (! ((pos.constraint) & 1 << (((d->states[s].newline) ? 2 : 0) + ((1) ? 1 : 0) + 4)))

     clrbit('\n', matches);
   if (! ((pos.constraint) & 1 << (((d->states[s].newline) ? 2 : 0) + ((0) ? 1 : 0) + 4)))

     for (j = 0; j < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++j)
       matches[j] &= newline[j];
   if (! ((pos.constraint) & 1 << (((d->states[s].letter) ? 2 : 0) + ((1) ? 1 : 0))))

     for (j = 0; j < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++j)
       matches[j] &= ~letters[j];
   if (! ((pos.constraint) & 1 << (((d->states[s].letter) ? 2 : 0) + ((0) ? 1 : 0))))

     for (j = 0; j < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++j)
       matches[j] &= letters[j];


   for (j = 0; j < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))) && !matches[j]; ++j)
     ;
   if (j == (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))))
     continue;
 }

      for (j = 0; j < ngrps; ++j)
 {



   if (d->tokens[pos.strchr] >= 0 && d->tokens[pos.strchr] < (1 << 8)
       && !tstbit(d->tokens[pos.strchr], labels[j]))
     continue;



   {_varCheck_(9173,intersectf,0,"intersectf");intersectf = 0;}
   for (k = 0; k < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++k)
     (intersect[k] = matches[k] & labels[j][k]) ? intersectf = 1 : 0;
   if (! intersectf)
     continue;


   {_varCheck_(9180,leftoversf,0,"leftoversf");leftoversf = matchesf = 0;}
   for (k = 0; k < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++k)
     {

       int match = matches[k], label = labels[j][k];

       (leftovers[k] = ~match & label) ? leftoversf = 1 : 0;
       (matches[k] = match & ~label) ? matchesf = 1 : 0;
     }


   if (leftoversf)
     {
       copyset(leftovers, labels[ngrps]);
       copyset(intersect, labels[j]);
       ((grps[ngrps].elems) = (position *) xmalloc_1((d->nleaves) * sizeof (position)));
       copy(&grps[j], &grps[ngrps]);
       ++ngrps;
     }



   {_varCheck_(9202,&grps[j].elems[grps[j].nelem++],grps.elems[grps[j].nelem++],"&grps[j].elems[grps[j].nelem++]");grps[j].elems[grps[j].nelem++] = pos;}



   if (! matchesf)
     break;
 }



      if (j == ngrps)
 {
   copyset(matches, labels[ngrps]);
   zeroset(matches);
   ((grps[ngrps].elems) = (position *) xmalloc_1((d->nleaves) * sizeof (position)));
   {_varCheck_(9217,&grps[ngrps].nelem,grps.nelem,"&grps[ngrps].nelem");grps[ngrps].nelem = 1;}
   {_varCheck_(9218,&grps[ngrps].elems[0],grps.elems[0],"&grps[ngrps].elems[0]");grps[ngrps].elems[0] = pos;}
   ++ngrps;
 }
    }

  ((follows.elems) = (position *) xmalloc_1((d->nleaves) * sizeof (position)));
  ((tmp.elems) = (position *) xmalloc_1((d->nleaves) * sizeof (position)));




  if (d->searchflag)
    {
      {_varCheck_(9231,wants_newline,0,"wants_newline");wants_newline = 0;}
      {_varCheck_(9232,wants_letter,0,"wants_letter");wants_letter = 0;}
      for (i = 0; i < d->states[0].elems.nelem; ++i)
 {
   if ((((d->states[0].elems.elems[i].constraint) & 0xc0) >> 2 != ((d->states[0].elems.elems[i].constraint) & 0x30)))
     {_varCheck_(9236,wants_newline,0,"wants_newline");wants_newline = 1;}
   if ((((d->states[0].elems.elems[i].constraint) & 0x0c) >> 2 != ((d->states[0].elems.elems[i].constraint) & 0x03)))
     {_varCheck_(9238,wants_letter,0,"wants_letter");wants_letter = 1;}
 }
      copy(&d->states[0].elems, &follows);
      {_varCheck_(9241,state,0,"state");state = state_index(d, &follows, 0, 0);}
      if (wants_newline)
 {_varCheck_(9243,state_newline,0,"state_newline");state_newline = state_index(d, &follows, 1, 0);}
      else
 state_newline = state;
      if (wants_letter)
 {_varCheck_(9247,state_letter,0,"state_letter");state_letter = state_index(d, &follows, 0, 1);}
      else
 state_letter = state;
      for (i = 0; i < (1 << 8); ++i)
 if (i == '\n')
   {_varCheck_(9252,&trans[i],trans,"&trans[i]");trans[i] = state_newline;}
 else if ((1 && ((*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) _ISalnum)))
   {_varCheck_(9254,&trans[i],trans,"&trans[i]");trans[i] = state_letter;}
 else
   trans[i] = state;
    }
  else
    for (i = 0; i < (1 << 8); ++i)
      {_varCheck_(9260,&trans[i],trans,"&trans[i]");trans[i] = -1;}

  for (i = 0; i < ngrps; ++i)
    {
      {_varCheck_(9264,follows.nelem,0,"follows.nelem");follows.nelem = 0;}



      for (j = 0; j < grps[i].nelem; ++j)
 for (k = 0; k < d->follows[grps[i].elems[j].strchr].nelem; ++k)
   insert(d->follows[grps[i].elems[j].strchr].elems[k], &follows);



      if (d->searchflag)
 for (j = 0; j < d->states[0].elems.nelem; ++j)
   insert(d->states[0].elems.elems[j], &follows);


      {_varCheck_(9279,wants_newline,0,"wants_newline");wants_newline = 0;}
      if (tstbit('\n', labels[i]))
 for (j = 0; j < follows.nelem; ++j)
   if ((((follows.elems[j].constraint) & 0xc0) >> 2 != ((follows.elems[j].constraint) & 0x30)))
     {_varCheck_(9283,wants_newline,0,"wants_newline");wants_newline = 1;}

      {_varCheck_(9285,wants_letter,0,"wants_letter");wants_letter = 0;}
      for (j = 0; j < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++j)
 if (labels[i][j] & letters[j])
   break;
      if (j < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))))
 for (j = 0; j < follows.nelem; ++j)
   if ((((follows.elems[j].constraint) & 0x0c) >> 2 != ((follows.elems[j].constraint) & 0x03)))
     {_varCheck_(9292,wants_letter,0,"wants_letter");wants_letter = 1;}


      {_varCheck_(9295,state,0,"state");state = state_index(d, &follows, 0, 0);}
      if (wants_newline)
 {_varCheck_(9297,state_newline,0,"state_newline");state_newline = state_index(d, &follows, 1, 0);}
      else
 state_newline = state;
      if (wants_letter)
 {_varCheck_(9301,state_letter,0,"state_letter");state_letter = state_index(d, &follows, 0, 1);}
      else
 state_letter = state;


      for (j = 0; j < (((1 << 8) + (8 * sizeof (int)) - 1) / (8 * sizeof (int))); ++j)
 for (k = 0; k < (8 * sizeof (int)); ++k)
   if (labels[i][j] & 1 << k)
     {
       int c = j * (8 * sizeof (int)) + k;

       if (c == '\n')
  {_varCheck_(9313,&trans[c],trans,"&trans[c]");trans[c] = state_newline;}
       else if ((1 && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalnum)))
  {_varCheck_(9315,&trans[c],trans,"&trans[c]");trans[c] = state_letter;}
       else if (c < (1 << 8))
  {_varCheck_(9317,&trans[c],trans,"&trans[c]");trans[c] = state;}
     }
    }

  for (i = 0; i < ngrps; ++i)
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





  if (d->trcount >= 1024)
    {
      for (i = 0; i < d->tralloc; ++i)
 if (d->trans[i])
   {
     free((ptr_t) d->trans[i]);
     {_varCheck_(9345,&d->trans[i],d->trans,"&d->trans[i]");d->trans[i] = ((void *)0);}
   }
 else if (d->fails[i])
   {
     free((ptr_t) d->fails[i]);
     {_varCheck_(9350,&d->fails[i],d->fails,"&d->fails[i]");d->fails[i] = ((void *)0);}
   }
      {_varCheck_(9352,d->trcount,0,"d->trcount");d->trcount = 0;}
    }

  ++d->trcount;


  {_varCheck_(9358,&d->success[s],d->success,"&d->success[s]");d->success[s] = 0;}
  if (((((*d).states[s].constraint) & 1 << (((d->states[s].newline) ? 2 : 0) + ((1) ? 1 : 0) + 4)) && (((*d).states[s].constraint) & 1 << (((d->states[s].letter) ? 2 : 0) + ((0) ? 1 : 0)))))

    d->success[s] |= 4;
  if (((((*d).states[s].constraint) & 1 << (((d->states[s].newline) ? 2 : 0) + ((0) ? 1 : 0) + 4)) && (((*d).states[s].constraint) & 1 << (((d->states[s].letter) ? 2 : 0) + ((1) ? 1 : 0)))))

    d->success[s] |= 2;
  if (((((*d).states[s].constraint) & 1 << (((d->states[s].newline) ? 2 : 0) + ((0) ? 1 : 0) + 4)) && (((*d).states[s].constraint) & 1 << (((d->states[s].letter) ? 2 : 0) + ((0) ? 1 : 0)))))

    d->success[s] |= 1;

  ((trans) = (int *) xmalloc_1(((1 << 8)) * sizeof (int)));
  dfastate(s, d, trans);




  for (i = 0; i < (1 << 8); ++i)
    if (trans[i] >= d->tralloc)
      {
 int oldalloc = d->tralloc;

 while (trans[i] >= d->tralloc)
   d->tralloc *= 2;
 ((d->realtrans) = (int * *) xrealloc_1((ptr_t) (d->realtrans), (d->tralloc + 1) * sizeof (int *)));
 {_varCheck_(9383,d->trans,0,"d->trans");d->trans = d->realtrans + 1;}
 ((d->fails) = (int * *) xrealloc_1((ptr_t) (d->fails), (d->tralloc) * sizeof (int *)));
 ((d->success) = (int *) xrealloc_1((ptr_t) (d->success), (d->tralloc) * sizeof (int)));
 ((d->newlines) = (int *) xrealloc_1((ptr_t) (d->newlines), (d->tralloc) * sizeof (int)));
 while (oldalloc < d->tralloc)
   {
     {_varCheck_(9389,&d->trans[oldalloc],d->trans,"&d->trans[oldalloc]");d->trans[oldalloc] = ((void *)0);}
     {_varCheck_(9390,&d->fails[oldalloc++],d->fails,"&d->fails[oldalloc++]");d->fails[oldalloc++] = ((void *)0);}
   }
      }



  {_varCheck_(9396,&d->newlines[s],d->newlines,"&d->newlines[s]");d->newlines[s] = trans['\n'];}
  {_varCheck_(9397,&trans['\n'],trans,"&trans['\n']");trans['\n'] = -1;}

  if (((*d).states[s].constraint))
    {_varCheck_(9400,&d->fails[s],d->fails,"&d->fails[s]");d->fails[s] = trans;}
  else
    d->trans[s] = trans;
}

static void
build_state_zero(d)
     struct dfa *d;
{
  {_varCheck_(9409,d->tralloc,0,"d->tralloc");d->tralloc = 1;}
  {_varCheck_(9410,d->trcount,0,"d->trcount");d->trcount = 0;}
  ((d->realtrans) = (int * *) xcalloc((d->tralloc + 1), sizeof (int *)));
  {_varCheck_(9412,d->trans,0,"d->trans");d->trans = d->realtrans + 1;}
  ((d->fails) = (int * *) xcalloc((d->tralloc), sizeof (int *)));
  ((d->success) = (int *) xmalloc_1((d->tralloc) * sizeof (int)));
  ((d->newlines) = (int *) xmalloc_1((d->tralloc) * sizeof (int)));
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

  static sbit[(1 << 8)];
  static sbit_init;

  if (! sbit_init)
    {
      int i;

      {_varCheck_(9439,sbit_init,0,"sbit_init");sbit_init = 1;}
      for (i = 0; i < (1 << 8); ++i)
 if (i == '\n')
   {_varCheck_(9442,&sbit[i],sbit,"&sbit[i]");sbit[i] = 4;}
 else if ((1 && ((*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) _ISalnum)))
   {_varCheck_(9444,&sbit[i],sbit,"&sbit[i]");sbit[i] = 2;}
 else
   sbit[i] = 1;
    }

  if (! d->tralloc)
    build_state_zero(d);

  {_varCheck_(9452,s,0,"s");s = s1 = 0;}
  {_varCheck_(9453,p,0,"p");p = (unsigned char *) begin;}
  {_varCheck_(9454,trans,0,"trans");trans = d->trans;}
  {_varCheck_(9455,end,1,"end");*end = '\n';}

  for (;;)
    {

      if ((t = trans[s]) != 0)
 do
   {
     {_varCheck_(9463,s1,0,"s1");s1 = t[*p++];}
     if (! (t = trans[s1]))
       goto last_was_s;
     {_varCheck_(9466,s,0,"s");s = t[*p++];}
   }
        while ((t = trans[s]) != 0);
      goto last_was_s1;
    last_was_s:
      tmp = s, s = s1, s1 = tmp;
    last_was_s1:

      if (s >= 0 && p <= (unsigned char *) end && d->fails[s])
 {
   if (d->success[s] & sbit[*p])
     {
       if (backref)
  if (d->states[s].backref)
    {_varCheck_(9480,backref,1,"backref");*backref = 1;}
  else
    *backref = 0;
       return (char *) p;
     }

   {_varCheck_(9486,s1,0,"s1");s1 = s;}
   {_varCheck_(9487,s,0,"s");s = d->fails[s][*p++];}
   continue;
 }


      if (count && (char *) p <= end && p[-1] == '\n')
 ++*count;


      if ((char *) p > end)
 return ((void *)0);

      if (s >= 0)
 {
   build_state(s, d);
   {_varCheck_(9502,trans,0,"trans");trans = d->trans;}
   continue;
 }

      if (p[-1] == '\n' && newline)
 {
   {_varCheck_(9508,s,0,"s");s = d->newlines[s1];}
   continue;
 }

      {_varCheck_(9512,s,0,"s");s = 0;}
    }
}



void
dfainit(d)
     struct dfa *d;
{
  {_varCheck_(9522,d->calloc,0,"d->calloc");d->calloc = 1;}
  ((d->charclasses) = (charclass *) xmalloc_1((d->calloc) * sizeof (charclass)));
  {_varCheck_(9524,d->cindex,0,"d->cindex");d->cindex = 0;}

  {_varCheck_(9526,d->talloc,0,"d->talloc");d->talloc = 1;}
  ((d->tokens) = (token *) xmalloc_1((d->talloc) * sizeof (token)));
  {_varCheck_(9528,d->tindex,0,"d->tindex");d->tindex = d->depth = d->nleaves = d->nregexps = 0;}

  {_varCheck_(9530,d->searchflag,0,"d->searchflag");d->searchflag = 0;}
  {_varCheck_(9531,d->tralloc,0,"d->tralloc");d->tralloc = 0;}

  {_varCheck_(9533,d->musts,0,"d->musts");d->musts = 0;}
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

      {_varCheck_(9549,copy,0,"copy");copy = malloc(len);}
      if (!copy)
 dfaerror("out of memory");


      {_varCheck_(9554,case_fold,0,"case_fold");case_fold = 0;}
      for (i = 0; i < len; ++i)
 if ((1 && ((*__ctype_b_loc ())[(int) ((s[i]))] & (unsigned short int) _ISupper)))
   {_varCheck_(9557,&copy[i],copy,"&copy[i]");copy[i] = tolower(s[i]);}
 else
   copy[i] = s[i];

      dfainit(d);
      dfaparse(copy, len, d);
      free(copy);
      dfamust(d);
      {_varCheck_(9565,d->cindex,0,"d->cindex");d->cindex = d->tindex = d->depth = d->nleaves = d->nregexps = 0;}
      {_varCheck_(9566,case_fold,0,"case_fold");case_fold = 1;}
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
  for (i = 0; i < d->sindex; ++i)
    free((ptr_t) d->states[i].elems.elems);
  free((ptr_t) d->states);
  for (i = 0; i < d->tindex; ++i)
    if (d->follows[i].elems)
      free((ptr_t) d->follows[i].elems);
  free((ptr_t) d->follows);
  for (i = 0; i < d->tralloc; ++i)
    if (d->trans[i])
      free((ptr_t) d->trans[i]);
    else if (d->fails[i])
      free((ptr_t) d->fails[i]);
  free((ptr_t) d->realtrans);
  free((ptr_t) d->fails);
  free((ptr_t) d->newlines);
  for (dm = d->musts; dm; dm = ndm)
    {
      {_varCheck_(9606,ndm,0,"ndm");ndm = dm->next;}
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

  {_varCheck_(9620,newsize,0,"newsize");newsize = (new == ((void *)0)) ? 0 : strlen(new);}
  if (old == ((void *)0))
    {_varCheck_(9622,oldsize,0,"oldsize");oldsize = 0;}
  else if (newsize == 0)
    return old;
  else oldsize = strlen(old);
  if (old == ((void *)0))
    {_varCheck_(9627,result,0,"result");result = (char *) malloc(newsize + 1);}
  else
    result = (char *) realloc((void *) old, oldsize + newsize + 1);
  if (result != ((void *)0) && new != ((void *)0))
    (void) strcpy(result + oldsize, new);
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

  {_varCheck_(9650,len,0,"len");len = strlen(lookfor);}
  for (cp = lookin; *cp != '\0'; ++cp)
    if (strncmp(cp, lookfor, len) == 0)
      return cp;
  return ((void *)0);
}

static void
ifree(cp)
     char *cp;
{
  if (cp != ((void *)0))
    free(cp);
}

static void
freelist(cpp)
     char **cpp;
{
  int i;

  if (cpp == ((void *)0))
    return;
  for (i = 0; cpp[i] != ((void *)0); ++i)
    {
      free(cpp[i]);
      {_varCheck_(9676,&cpp[i],cpp,"&cpp[i]");cpp[i] = ((void *)0);}
    }
}

static char **
enlist(cpp, new, len)
     char **cpp;
     char *new;
     int len;
{
  int i, j;

  if (cpp == ((void *)0))
    return ((void *)0);
  if ((new = icpyalloc(new)) == ((void *)0))
    {
      freelist(cpp);
      return ((void *)0);
    }
  {_varCheck_(9695,&new[len],new,"&new[len]");new[len] = '\0';}

  for (i = 0; cpp[i] != ((void *)0); ++i)
    if (istrstr(cpp[i], new) != ((void *)0))
      {
 free(new);
 return cpp;
      }

  {_varCheck_(9704,j,0,"j");j = 0;}
  while (cpp[j] != ((void *)0))
    if (istrstr(new, cpp[j]) == ((void *)0))
      ++j;
    else
      {
 free(cpp[j]);
 if (--i == j)
   break;
 {_varCheck_(9713,&cpp[j],cpp,"&cpp[j]");cpp[j] = cpp[i];}
 {_varCheck_(9714,&cpp[i],cpp,"&cpp[i]");cpp[i] = ((void *)0);}
      }

  {_varCheck_(9717,cpp,0,"cpp");cpp = (char **) realloc((char *) cpp, (i + 2) * sizeof *cpp);}
  if (cpp == ((void *)0))
    return ((void *)0);
  {_varCheck_(9720,&cpp[i],cpp,"&cpp[i]");cpp[i] = new;}
  {_varCheck_(9721,&cpp[i + 1],cpp,"&cpp[i + 1]");cpp[i + 1] = ((void *)0);}
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

  if (left == ((void *)0) || right == ((void *)0))
    return ((void *)0);
  {_varCheck_(9740,cpp,0,"cpp");cpp = (char **) malloc(sizeof *cpp);}
  if (cpp == ((void *)0))
    return ((void *)0);
  {_varCheck_(9743,&cpp[0],cpp,"&cpp[0]");cpp[0] = ((void *)0);}
  for (lcp = left; *lcp != '\0'; ++lcp)
    {
      {_varCheck_(9746,len,0,"len");len = 0;}
      {_varCheck_(9747,rcp,0,"rcp");rcp = strchr(right, *lcp);}
      while (rcp != ((void *)0))
 {
   for (i = 1; lcp[i] != '\0' && lcp[i] == rcp[i]; ++i)
     ;
   if (i > len)
     {_varCheck_(9753,len,0,"len");len = i;}
   {_varCheck_(9754,rcp,0,"rcp");rcp = strchr(rcp + 1, *lcp);}
 }
      if (len == 0)
 continue;
      if ((cpp = enlist(cpp, lcp, len)) == ((void *)0))
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

  if (old == ((void *)0) || new == ((void *)0))
    return ((void *)0);
  for (i = 0; new[i] != ((void *)0); ++i)
    {
      {_varCheck_(9775,old,0,"old");old = enlist(old, new[i], strlen(new[i]));}
      if (old == ((void *)0))
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

  if (left == ((void *)0) || right == ((void *)0))
    return ((void *)0);
  {_varCheck_(9795,both,0,"both");both = (char **) malloc(sizeof *both);}
  if (both == ((void *)0))
    return ((void *)0);
  {_varCheck_(9798,&both[0],both,"&both[0]");both[0] = ((void *)0);}
  for (lnum = 0; left[lnum] != ((void *)0); ++lnum)
    {
      for (rnum = 0; right[rnum] != ((void *)0); ++rnum)
 {
   {_varCheck_(9803,temp,0,"temp");temp = comsubs(left[lnum], right[rnum]);}
   if (temp == ((void *)0))
     {
       freelist(both);
       return ((void *)0);
     }
   {_varCheck_(9809,both,0,"both");both = addlists(both, temp);}
   freelist(temp);
   if (both == ((void *)0))
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
  {_varCheck_(9830,&mp->left[0],mp->left,"&mp->left[0]");mp->left[0] = mp->right[0] = mp->is[0] = '\0';}
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

  {_varCheck_(9848,result,0,"result");result = "";}
  {_varCheck_(9849,exact,0,"exact");exact = 0;}
  {_varCheck_(9850,musts,0,"musts");musts = (must *) malloc((dfa->tindex + 1) * sizeof *musts);}
  if (musts == ((void *)0))
    return;
  {_varCheck_(9853,mp,0,"mp");mp = musts;}
  for (i = 0; i <= dfa->tindex; ++i)
    {_varCheck_(9855,&mp[i],mp,"&mp[i]");mp[i] = must0;}
  for (i = 0; i <= dfa->tindex; ++i)
    {
      {_varCheck_(9858,&mp[i].in,mp.in,"&mp[i].in");mp[i].in = (char **) malloc(sizeof *mp[i].in);}
      {_varCheck_(9859,&mp[i].left,mp.left,"&mp[i].left");mp[i].left = malloc(2);}
      {_varCheck_(9860,&mp[i].right,mp.right,"&mp[i].right");mp[i].right = malloc(2);}
      {_varCheck_(9861,&mp[i].is,mp.is,"&mp[i].is");mp[i].is = malloc(2);}
      if (mp[i].in == ((void *)0) || mp[i].left == ((void *)0) ||
   mp[i].right == ((void *)0) || mp[i].is == ((void *)0))
 goto done;
      {_varCheck_(9865,&mp[i].left[0],mp.left[0],"&mp[i].left[0]");mp[i].left[0] = mp[i].right[0] = mp[i].is[0] = '\0';}
      {_varCheck_(9866,&mp[i].in[0],mp.in[0],"&mp[i].in[0]");mp[i].in[0] = ((void *)0);}
    }
# 8958 "target/grep.c"
  for (ri = 0; ri < dfa->tindex; ++ri)
    {
      switch (t = dfa->tokens[ri])
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
   if (mp <= musts)
     goto done;
   --mp;
   resetmust(mp);
   break;
 case OR:
 case ORTOP:
   if (mp < &musts[2])
     goto done;
   {
     char **new;
     must *lmp;
     must *rmp;
     int j, ln, rn, n;

     {_varCheck_(9903,rmp,0,"rmp");rmp = --mp;}
     {_varCheck_(9904,lmp,0,"lmp");lmp = --mp;}

     if (strcmp(lmp->is, rmp->is) != 0)
       {_varCheck_(9907,&lmp->is[0],lmp->is,"&lmp->is[0]");lmp->is[0] = '\0';}

     {_varCheck_(9909,i,0,"i");i = 0;}
     while (lmp->left[i] != '\0' && lmp->left[i] == rmp->left[i])
       ++i;
     {_varCheck_(9912,&lmp->left[i],lmp->left,"&lmp->left[i]");lmp->left[i] = '\0';}

     {_varCheck_(9914,ln,0,"ln");ln = strlen(lmp->right);}
     {_varCheck_(9915,rn,0,"rn");rn = strlen(rmp->right);}
     {_varCheck_(9916,n,0,"n");n = ln;}
     if (n > rn)
       {_varCheck_(9918,n,0,"n");n = rn;}
     for (i = 0; i < n; ++i)
       if (lmp->right[ln - i - 1] != rmp->right[rn - i - 1])
  break;
     for (j = 0; j < i; ++j)
       {_varCheck_(9923,&lmp->right[j],lmp->right,"&lmp->right[j]");lmp->right[j] = lmp->right[(ln - i) + j];}
     {_varCheck_(9924,&lmp->right[j],lmp->right,"&lmp->right[j]");lmp->right[j] = '\0';}
     {_varCheck_(9925,new,0,"new");new = inboth(lmp->in, rmp->in);}
     if (new == ((void *)0))
       goto done;
     freelist(lmp->in);
     free((char *) lmp->in);
     {_varCheck_(9930,lmp->in,0,"lmp->in");lmp->in = new;}
   }
   break;
 case PLUS:
   if (mp <= musts)
     goto done;
   --mp;
   {_varCheck_(9937,&mp->is[0],mp->is,"&mp->is[0]");mp->is[0] = '\0';}
   break;
 case END:
   if (mp != &musts[1])
     goto done;
   for (i = 0; musts[0].in[i] != ((void *)0); ++i)
     if (strlen(musts[0].in[i]) > strlen(result))
       {_varCheck_(9944,result,0,"result");result = musts[0].in[i];}
   if (strcmp(result, musts[0].is) == 0)
     {_varCheck_(9946,exact,0,"exact");exact = 1;}
   goto done;
 case CAT:
   if (mp < &musts[2])
     goto done;
   {
     must *lmp;
     must *rmp;

     {_varCheck_(9955,rmp,0,"rmp");rmp = --mp;}
     {_varCheck_(9956,lmp,0,"lmp");lmp = --mp;}



     {_varCheck_(9960,lmp->in,0,"lmp->in");lmp->in = addlists(lmp->in, rmp->in);}
     if (lmp->in == ((void *)0))
       goto done;
     if (lmp->right[0] != '\0' &&
  rmp->left[0] != '\0')
       {
  char *tp;

  {_varCheck_(9968,tp,0,"tp");tp = icpyalloc(lmp->right);}
  if (tp == ((void *)0))
    goto done;
  {_varCheck_(9971,tp,0,"tp");tp = icatalloc(tp, rmp->left);}
  if (tp == ((void *)0))
    goto done;
  {_varCheck_(9974,lmp->in,0,"lmp->in");lmp->in = enlist(lmp->in, tp,
     strlen(tp));}
  free(tp);
  if (lmp->in == ((void *)0))
    goto done;
       }

     if (lmp->is[0] != '\0')
       {
  {_varCheck_(9983,lmp->left,0,"lmp->left");lmp->left = icatalloc(lmp->left,
          rmp->left);}
  if (lmp->left == ((void *)0))
    goto done;
       }

     if (rmp->is[0] == '\0')
       {_varCheck_(9990,&lmp->right[0],lmp->right,"&lmp->right[0]");lmp->right[0] = '\0';}
     {_varCheck_(9991,lmp->right,0,"lmp->right");lmp->right = icatalloc(lmp->right, rmp->right);}
     if (lmp->right == ((void *)0))
       goto done;

     if (lmp->is[0] != '\0' && rmp->is[0] != '\0')
       {
  {_varCheck_(9997,lmp->is,0,"lmp->is");lmp->is = icatalloc(lmp->is, rmp->is);}
  if (lmp->is == ((void *)0))
    goto done;
       }
     else
       lmp->is[0] = '\0';
   }
   break;
 default:
   if (t < END)
     {

       goto done;
     }
   else if (t == '\0')
     {

       goto done;
     }
   else if (t >= CSET)
     {

       resetmust(mp);
     }
   else
     {

       resetmust(mp);
       {_varCheck_(10025,&mp->is[0],mp->is,"&mp->is[0]");mp->is[0] = mp->left[0] = mp->right[0] = t;}
       {_varCheck_(10026,&mp->is[1],mp->is,"&mp->is[1]");mp->is[1] = mp->left[1] = mp->right[1] = '\0';}
       {_varCheck_(10027,mp->in,0,"mp->in");mp->in = enlist(mp->in, mp->is, 1);}
       if (mp->in == ((void *)0))
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
      {_varCheck_(10039,dm,0,"dm");dm = (struct dfamust *) malloc(sizeof (struct dfamust));}
      {_varCheck_(10040,dm->exact,0,"dm->exact");dm->exact = exact;}
      {_varCheck_(10041,dm->must,0,"dm->must");dm->must = malloc(strlen(result) + 1);}
      strcpy(dm->must, result);
      {_varCheck_(10043,dm->next,0,"dm->next");dm->next = dfa->musts;}
      {_varCheck_(10044,dfa->musts,0,"dfa->musts");dfa->musts = dm;}
    }
  {_varCheck_(10046,mp,0,"mp");mp = musts;}
  for (i = 0; i <= dfa->tindex; ++i)
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
  unsigned char delta[((127 * 2 + 1) + 1)];
  struct trie *next[((127 * 2 + 1) + 1)];
  char *target;
  int mind2;
  char *trans;
};



kwset_t
kwsalloc(trans)
     char *trans;
{
  struct kwset *kwset;

  {_varCheck_(10259,kwset,0,"kwset");kwset = (struct kwset *) xmalloc(sizeof (struct kwset));}
  if (!kwset)
    return 0;

  _obstack_begin ((&kwset->obstack), 0, 0, (void *(*) ()) xmalloc, (void (*) ()) free);
  {_varCheck_(10264,kwset->words,0,"kwset->words");kwset->words = 0;}
  {_varCheck_(10265,kwset->trie,0,"kwset->trie");kwset->trie
    = (struct trie *) __extension__ ({ struct obstack *__h = (&kwset->obstack); __extension__ ({ struct obstack *__o = (__h); int __len = ((sizeof (struct trie))); ((__o->chunk_limit - __o->next_free < __len) ? (_obstack_newchunk (__o, __len), 0) : 0); {_varCheck_(10266,__o->next_free,0,"__o->next_free");__o->next_free += __len;} (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *value = (void *) __o1->object_base; if (__o1->next_free == value) {_varCheck_(10266,__o1->maybe_empty_object,0,"__o1->maybe_empty_object");__o1->maybe_empty_object = 1;} {_varCheck_(10266,__o1->next_free,0,"__o1->next_free");__o1->next_free = (((((__o1->next_free) - (char *)0)+__o1->alignment_mask) & ~ (__o1->alignment_mask)) + (char *)0);} ((__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) ? (__o1->next_free = __o1->chunk_limit) : 0); {_varCheck_(10266,__o1->object_base,0,"__o1->object_base");__o1->object_base = __o1->next_free;} value; }); });}
  if (!kwset->trie)
    {
      kwsfree((kwset_t) kwset);
      return 0;
    }
  {_varCheck_(10272,kwset->trie->accepting,0,"kwset->trie->accepting");kwset->trie->accepting = 0;}
  {_varCheck_(10273,kwset->trie->links,0,"kwset->trie->links");kwset->trie->links = 0;}
  {_varCheck_(10274,kwset->trie->parent,0,"kwset->trie->parent");kwset->trie->parent = 0;}
  {_varCheck_(10275,kwset->trie->next,0,"kwset->trie->next");kwset->trie->next = 0;}
  {_varCheck_(10276,kwset->trie->fail,0,"kwset->trie->fail");kwset->trie->fail = 0;}
  {_varCheck_(10277,kwset->trie->depth,0,"kwset->trie->depth");kwset->trie->depth = 0;}
  {_varCheck_(10278,kwset->trie->shift,0,"kwset->trie->shift");kwset->trie->shift = 0;}
  {_varCheck_(10279,kwset->mind,0,"kwset->mind");kwset->mind = 2147483647;}
  {_varCheck_(10280,kwset->maxd,0,"kwset->maxd");kwset->maxd = -1;}
  {_varCheck_(10281,kwset->target,0,"kwset->target");kwset->target = 0;}
  {_varCheck_(10282,kwset->trans,0,"kwset->trans");kwset->trans = trans;}

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

  {_varCheck_(10304,kwset,0,"kwset");kwset = (struct kwset *) kws;}
  {_varCheck_(10305,trie,0,"trie");trie = kwset->trie;}
  {_varCheck_(10306,text,0,"text");text += len;}



  while (len--)
    {
      {_varCheck_(10312,label,0,"label");label = kwset->trans ? kwset->trans[(unsigned char) *--text] : *--text;}




      {_varCheck_(10317,link,0,"link");link = trie->links;}
      {_varCheck_(10318,&links[0],links,"&links[0]");links[0] = (struct tree *) &trie->links;}
      {_varCheck_(10319,&dirs[0],dirs,"&dirs[0]");dirs[0] = L;}
      {_varCheck_(10320,depth,0,"depth");depth = 1;}

      while (link && label != link->label)
 {
   {_varCheck_(10324,&links[depth],links,"&links[depth]");links[depth] = link;}
   if (label < link->label)
     {_varCheck_(10326,&dirs[depth++] = L,dirs = L,"&dirs[depth++] = L");dirs[depth++] = L, link = link->llink;}
   else
     dirs[depth++] = R, link = link->rlink;
 }




      if (!link)
 {
   {_varCheck_(10336,link,0,"link");link = (struct tree *) __extension__ ({ struct obstack *__h = (&kwset->obstack); __extension__ ({ struct obstack *__o = (__h); int __len = ((sizeof (struct tree))); ((__o->chunk_limit - __o->next_free < __len) ? (_obstack_newchunk (__o, __len), 0) : 0); {_varCheck_(10336,__o->next_free,0,"__o->next_free");__o->next_free += __len;} (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *value = (void *) __o1->object_base; if (__o1->next_free == value) {_varCheck_(10336,__o1->maybe_empty_object,0,"__o1->maybe_empty_object");__o1->maybe_empty_object = 1;} {_varCheck_(10336,__o1->next_free,0,"__o1->next_free");__o1->next_free = (((((__o1->next_free) - (char *)0)+__o1->alignment_mask) & ~ (__o1->alignment_mask)) + (char *)0);} ((__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) ? (__o1->next_free = __o1->chunk_limit) : 0); {_varCheck_(10336,__o1->object_base,0,"__o1->object_base");__o1->object_base = __o1->next_free;} value; }); });}

   if (!link)
     return "memory exhausted";
   {_varCheck_(10340,link->llink,0,"link->llink");link->llink = 0;}
   {_varCheck_(10341,link->rlink,0,"link->rlink");link->rlink = 0;}
   {_varCheck_(10342,link->trie,0,"link->trie");link->trie = (struct trie *) __extension__ ({ struct obstack *__h = (&kwset->obstack); __extension__ ({ struct obstack *__o = (__h); int __len = ((sizeof (struct trie))); ((__o->chunk_limit - __o->next_free < __len) ? (_obstack_newchunk (__o, __len), 0) : 0); {_varCheck_(10342,__o->next_free,0,"__o->next_free");__o->next_free += __len;} (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *value = (void *) __o1->object_base; if (__o1->next_free == value) {_varCheck_(10342,__o1->maybe_empty_object,0,"__o1->maybe_empty_object");__o1->maybe_empty_object = 1;} {_varCheck_(10342,__o1->next_free,0,"__o1->next_free");__o1->next_free = (((((__o1->next_free) - (char *)0)+__o1->alignment_mask) & ~ (__o1->alignment_mask)) + (char *)0);} ((__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) ? (__o1->next_free = __o1->chunk_limit) : 0); {_varCheck_(10342,__o1->object_base,0,"__o1->object_base");__o1->object_base = __o1->next_free;} value; }); });}

   if (!link->trie)
     return "memory exhausted";
   {_varCheck_(10346,link->trie->accepting,0,"link->trie->accepting");link->trie->accepting = 0;}
   {_varCheck_(10347,link->trie->links,0,"link->trie->links");link->trie->links = 0;}
   {_varCheck_(10348,link->trie->parent,0,"link->trie->parent");link->trie->parent = trie;}
   {_varCheck_(10349,link->trie->next,0,"link->trie->next");link->trie->next = 0;}
   {_varCheck_(10350,link->trie->fail,0,"link->trie->fail");link->trie->fail = 0;}
   {_varCheck_(10351,link->trie->depth,0,"link->trie->depth");link->trie->depth = trie->depth + 1;}
   {_varCheck_(10352,link->trie->shift,0,"link->trie->shift");link->trie->shift = 0;}
   {_varCheck_(10353,link->label,0,"link->label");link->label = label;}
   {_varCheck_(10354,link->balance,0,"link->balance");link->balance = 0;}


   if (dirs[--depth] == L)
     {_varCheck_(10358,&links[depth]->llink,links->llink,"&links[depth]->llink");links[depth]->llink = link;}
   else
     links[depth]->rlink = link;


   while (depth && !links[depth]->balance)
     {
       if (dirs[depth] == L)
  --links[depth]->balance;
       else
  ++links[depth]->balance;
       --depth;
     }


   if (depth && ((dirs[depth] == L && --links[depth]->balance)
   || (dirs[depth] == R && ++links[depth]->balance)))
     {
       switch (links[depth]->balance)
  {
  case (char) -2:
    switch (dirs[depth + 1])
      {
      case L:
        {_varCheck_(10382,&r = links[depth] , t = r->llink,r = links , t = r->llink,"&r = links[depth] , t = r->llink");r = links[depth], t = r->llink, rl = t->rlink;}
        {_varCheck_(10383,t->rlink = r,0,"t->rlink = r");t->rlink = r, r->llink = rl;}
        {_varCheck_(10384,t->balance,0,"t->balance");t->balance = r->balance = 0;}
        break;
      case R:
        {_varCheck_(10387,&r = links[depth] , l = r->llink,r = links , l = r->llink,"&r = links[depth] , l = r->llink");r = links[depth], l = r->llink, t = l->rlink;}
        {_varCheck_(10388,rl = t->rlink,0,"rl = t->rlink");rl = t->rlink, lr = t->llink;}
        {_varCheck_(10389,t->llink = l , l->rlink = lr , t->rlink = r,0,"t->llink = l , l->rlink = lr , t->rlink = r");t->llink = l, l->rlink = lr, t->rlink = r, r->llink = rl;}
        {_varCheck_(10390,l->balance,0,"l->balance");l->balance = t->balance != 1 ? 0 : -1;}
        {_varCheck_(10391,r->balance,0,"r->balance");r->balance = t->balance != (char) -1 ? 0 : 1;}
        {_varCheck_(10392,t->balance,0,"t->balance");t->balance = 0;}
        break;
      }
    break;
  case 2:
    switch (dirs[depth + 1])
      {
      case R:
        {_varCheck_(10400,&l = links[depth] , t = l->rlink,l = links , t = l->rlink,"&l = links[depth] , t = l->rlink");l = links[depth], t = l->rlink, lr = t->llink;}
        {_varCheck_(10401,t->llink = l,0,"t->llink = l");t->llink = l, l->rlink = lr;}
        {_varCheck_(10402,t->balance,0,"t->balance");t->balance = l->balance = 0;}
        break;
      case L:
        {_varCheck_(10405,&l = links[depth] , r = l->rlink,l = links , r = l->rlink,"&l = links[depth] , r = l->rlink");l = links[depth], r = l->rlink, t = r->llink;}
        {_varCheck_(10406,lr = t->llink,0,"lr = t->llink");lr = t->llink, rl = t->rlink;}
        {_varCheck_(10407,t->llink = l , l->rlink = lr , t->rlink = r,0,"t->llink = l , l->rlink = lr , t->rlink = r");t->llink = l, l->rlink = lr, t->rlink = r, r->llink = rl;}
        {_varCheck_(10408,l->balance,0,"l->balance");l->balance = t->balance != 1 ? 0 : -1;}
        {_varCheck_(10409,r->balance,0,"r->balance");r->balance = t->balance != (char) -1 ? 0 : 1;}
        {_varCheck_(10410,t->balance,0,"t->balance");t->balance = 0;}
        break;
      }
    break;
  }

       if (dirs[depth - 1] == L)
  {_varCheck_(10417,&links[depth - 1]->llink,links->llink,"&links[depth - 1]->llink");links[depth - 1]->llink = t;}
       else
  links[depth - 1]->rlink = t;
     }
 }

      {_varCheck_(10423,trie,0,"trie");trie = link->trie;}
    }



  if (!trie->accepting)
    {_varCheck_(10429,trie->accepting,0,"trie->accepting");trie->accepting = 1 + 2 * kwset->words;}
  ++kwset->words;


  if (trie->depth < kwset->mind)
    {_varCheck_(10434,kwset->mind,0,"kwset->mind");kwset->mind = trie->depth;}
  if (trie->depth > kwset->maxd)
    {_varCheck_(10436,kwset->maxd,0,"kwset->maxd");kwset->maxd = trie->depth;}

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
  {_varCheck_(10452,(*last),0,"(*last)");(*last) = (*last)->next = tree->trie;}
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
      {_varCheck_(10476,link,0,"link");link = fail->links;}
      while (link && tree->label != link->label)
 if (tree->label < link->label)
   {_varCheck_(10479,link,0,"link");link = link->llink;}
 else
   link = link->rlink;
      if (link)
 {
   {_varCheck_(10484,tree->trie->fail,0,"tree->trie->fail");tree->trie->fail = link->trie;}
   return;
 }
      {_varCheck_(10487,fail,0,"fail");fail = fail->fail;}
    }

  {_varCheck_(10490,tree->trie->fail,0,"tree->trie->fail");tree->trie->fail = recourse;}
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
  if (depth < delta[tree->label])
    {_varCheck_(10506,&delta[tree->label],delta,"&delta[tree->label]");delta[tree->label] = depth;}
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
  while (a && b->label != a->label)
    if (b->label < a->label)
      {_varCheck_(10523,a,0,"a");a = a->llink;}
    else
      a = a->rlink;
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
  {_varCheck_(10540,&next[tree->label],next,"&next[tree->label]");next[tree->label] = tree->trie;}
}



char *
kwsprep(kws)
     kwset_t kws;
{
  register struct kwset *kwset;
  register int i;
  register struct trie *curr, *fail;
  register char *trans;
  unsigned char delta[((127 * 2 + 1) + 1)];
  struct trie *last, *next[((127 * 2 + 1) + 1)];

  {_varCheck_(10556,kwset,0,"kwset");kwset = (struct kwset *) kws;}




  if (kwset->mind < 256)
    for (i = 0; i < ((127 * 2 + 1) + 1); ++i)
      {_varCheck_(10563,&delta[i],delta,"&delta[i]");delta[i] = kwset->mind;}
  else
    for (i = 0; i < ((127 * 2 + 1) + 1); ++i)
      {_varCheck_(10566,&delta[i],delta,"&delta[i]");delta[i] = 255;}



  if (kwset->words == 1 && kwset->trans == 0)
    {

      {_varCheck_(10573,kwset->target,0,"kwset->target");kwset->target = __extension__ ({ struct obstack *__h = (&kwset->obstack); __extension__ ({ struct obstack *__o = (__h); int __len = ((kwset->mind)); ((__o->chunk_limit - __o->next_free < __len) ? (_obstack_newchunk (__o, __len), 0) : 0); {_varCheck_(10573,__o->next_free,0,"__o->next_free");__o->next_free += __len;} (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *value = (void *) __o1->object_base; if (__o1->next_free == value) {_varCheck_(10573,__o1->maybe_empty_object,0,"__o1->maybe_empty_object");__o1->maybe_empty_object = 1;} {_varCheck_(10573,__o1->next_free,0,"__o1->next_free");__o1->next_free = (((((__o1->next_free) - (char *)0)+__o1->alignment_mask) & ~ (__o1->alignment_mask)) + (char *)0);} ((__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) ? (__o1->next_free = __o1->chunk_limit) : 0); {_varCheck_(10573,__o1->object_base,0,"__o1->object_base");__o1->object_base = __o1->next_free;} value; }); });}
      for (i = kwset->mind - 1, curr = kwset->trie; i >= 0; --i)
 {
   {_varCheck_(10576,&kwset->target[i],kwset->target,"&kwset->target[i]");kwset->target[i] = curr->links->label;}
   {_varCheck_(10577,curr,0,"curr");curr = curr->links->trie;}
 }

      for (i = 0; i < kwset->mind; ++i)
 {_varCheck_(10581,&delta[(unsigned char)kwset->target[i]],delta],"&delta[(unsigned char)kwset->target[i]]");delta[(unsigned char) kwset->target[i]] = kwset->mind - (i + 1);}
      {_varCheck_(10582,kwset->mind2,0,"kwset->mind2");kwset->mind2 = kwset->mind;}


      for (i = 0; i < kwset->mind - 1; ++i)
 if (kwset->target[i] == kwset->target[kwset->mind - 1])
   {_varCheck_(10587,kwset->mind2,0,"kwset->mind2");kwset->mind2 = kwset->mind - (i + 1);}
    }
  else
    {


      for (curr = last = kwset->trie; curr; curr = curr->next)
 {

   enqueue(curr->links, &last);

   {_varCheck_(10598,curr->shift,0,"curr->shift");curr->shift = kwset->mind;}
   {_varCheck_(10599,curr->maxshift,0,"curr->maxshift");curr->maxshift = kwset->mind;}


   treedelta(curr->links, curr->depth, delta);


   treefails(curr->links, curr->fail, kwset->trie);



   for (fail = curr->fail; fail; fail = fail->fail)
     {



       if (!hasevery(fail->links, curr->links))
  if (curr->depth - fail->depth < fail->shift)
    {_varCheck_(10616,fail->shift,0,"fail->shift");fail->shift = curr->depth - fail->depth;}




       if (curr->accepting && fail->maxshift > curr->depth - fail->depth)
  {_varCheck_(10622,fail->maxshift,0,"fail->maxshift");fail->maxshift = curr->depth - fail->depth;}
     }
 }



      for (curr = kwset->trie->next; curr; curr = curr->next)
 {
   if (curr->maxshift > curr->parent->maxshift)
     {_varCheck_(10631,curr->maxshift,0,"curr->maxshift");curr->maxshift = curr->parent->maxshift;}
   if (curr->shift > curr->maxshift)
     {_varCheck_(10633,curr->shift,0,"curr->shift");curr->shift = curr->maxshift;}
 }



      for (i = 0; i < ((127 * 2 + 1) + 1); ++i)
 {_varCheck_(10639,&next[i],next,"&next[i]");next[i] = 0;}
      treenext(kwset->trie->links, next);

      if ((trans = kwset->trans) != 0)
 for (i = 0; i < ((127 * 2 + 1) + 1); ++i)
   {_varCheck_(10644,&kwset->next[i],kwset->next,"&kwset->next[i]");kwset->next[i] = next[(unsigned char) trans[i]];}
      else
 for (i = 0; i < ((127 * 2 + 1) + 1); ++i)
   {_varCheck_(10647,&kwset->next[i],kwset->next,"&kwset->next[i]");kwset->next[i] = next[i];}
    }


  if ((trans = kwset->trans) != 0)
    for (i = 0; i < ((127 * 2 + 1) + 1); ++i)
      {_varCheck_(10653,&kwset->delta[i],kwset->delta,"&kwset->delta[i]");kwset->delta[i] = delta[(unsigned char) trans[i]];}
  else
    for (i = 0; i < ((127 * 2 + 1) + 1); ++i)
      {_varCheck_(10656,&kwset->delta[i],kwset->delta,"&kwset->delta[i]");kwset->delta[i] = delta[i];}

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

  {_varCheck_(10675,kwset,0,"kwset");kwset = (struct kwset *) kws;}
  {_varCheck_(10676,len,0,"len");len = kwset->mind;}

  if (len == 0)
    return text;
  if (len > size)
    return 0;
  if (len == 1)
    return memchr(text, kwset->target[0], size);

  {_varCheck_(10685,d1,0,"d1");d1 = kwset->delta;}
  {_varCheck_(10686,sp,0,"sp");sp = kwset->target + len;}
  {_varCheck_(10687,gc,0,"gc");gc = ((unsigned char) (sp[-2]));}
  {_varCheck_(10688,md2,0,"md2");md2 = kwset->mind2;}
  {_varCheck_(10689,tp,0,"tp");tp = text + len;}


  if (size > 12 * len)

    for (ep = text + size - 11 * len;;)
      {
 while (tp <= ep)
   {
     {_varCheck_(10698,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     {_varCheck_(10699,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     if (d == 0)
       goto found;
     {_varCheck_(10702,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     {_varCheck_(10703,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     {_varCheck_(10704,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     if (d == 0)
       goto found;
     {_varCheck_(10707,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     {_varCheck_(10708,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     {_varCheck_(10709,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     if (d == 0)
       goto found;
     {_varCheck_(10712,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
     {_varCheck_(10713,&d = d1[((unsigned char)(tp[-1]))],d = d1))],"&d = d1[((unsigned char)(tp[-1]))]");d = d1[((unsigned char) (tp[-1]))], tp += d;}
   }
 break;
      found:
 if (((unsigned char) (tp[-2])) == gc)
   {
     for (i = 3; i <= len && ((unsigned char) (tp[-i])) == ((unsigned char) (sp[-i])); ++i)
       ;
     if (i > len)
       return tp - len;
   }
 {_varCheck_(10724,tp,0,"tp");tp += md2;}
      }



  {_varCheck_(10729,ep,0,"ep");ep = text + size;}
  {_varCheck_(10730,d,0,"d");d = d1[((unsigned char) (tp[-1]))];}
  while (d <= ep - tp)
    {
      {_varCheck_(10733,d,0,"d");d = d1[((unsigned char) ((tp += d)[-1]))];}
      if (d != 0)
 continue;
      if (tp[-2] == gc)
 {
   for (i = 3; i <= len && ((unsigned char) (tp[-i])) == ((unsigned char) (sp[-i])); ++i)
     ;
   if (i > len)
     return tp - len;
 }
      {_varCheck_(10743,d,0,"d");d = md2;}
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


  {_varCheck_(10767,kwset,0,"kwset");kwset = (struct kwset *) kws;}
  if (len < kwset->mind)
    return 0;
  {_varCheck_(10770,next,0,"next");next = kwset->next;}
  {_varCheck_(10771,delta,0,"delta");delta = kwset->delta;}
  {_varCheck_(10772,trans,0,"trans");trans = kwset->trans;}
  {_varCheck_(10773,lim,0,"lim");lim = text + len;}
  {_varCheck_(10774,end,0,"end");end = text;}
  if ((d = kwset->mind) != 0)
    {_varCheck_(10776,mch,0,"mch");mch = 0;}
  else
    {
      {_varCheck_(10779,mch = text,0,"mch = text");mch = text, accept = kwset->trie;}
      goto match;
    }

  if (len >= 4 * kwset->mind)
    {_varCheck_(10784,qlim,0,"qlim");qlim = lim - 4 * kwset->mind;}
  else
    qlim = 0;

  while (lim - end >= d)
    {
      if (qlim && end <= qlim)
 {
   {_varCheck_(10792,end,0,"end");end += d - 1;}
   while ((d = delta[c = *end]) && end < qlim)
     {
       {_varCheck_(10795,end,0,"end");end += d;}
       {_varCheck_(10796,end,0,"end");end += delta[(unsigned char) *end];}
       {_varCheck_(10797,end,0,"end");end += delta[(unsigned char) *end];}
     }
   ++end;
 }
      else
 d = delta[c = (end += d)[-1]];
      if (d)
 continue;
      {_varCheck_(10805,beg,0,"beg");beg = end - 1;}
      {_varCheck_(10806,trie,0,"trie");trie = next[c];}
      if (trie->accepting)
 {
   {_varCheck_(10809,mch,0,"mch");mch = beg;}
   {_varCheck_(10810,accept,0,"accept");accept = trie;}
 }
      {_varCheck_(10812,d,0,"d");d = trie->shift;}
      while (beg > text)
 {
   {_varCheck_(10815,c,0,"c");c = trans ? trans[(unsigned char) *--beg] : *--beg;}
   {_varCheck_(10816,tree,0,"tree");tree = trie->links;}
   while (tree && c != tree->label)
     if (c < tree->label)
       {_varCheck_(10819,tree,0,"tree");tree = tree->llink;}
     else
       tree = tree->rlink;
   if (tree)
     {
       {_varCheck_(10824,trie,0,"trie");trie = tree->trie;}
       if (trie->accepting)
  {
    {_varCheck_(10827,mch,0,"mch");mch = beg;}
    {_varCheck_(10828,accept,0,"accept");accept = trie;}
  }
     }
   else
     break;
   {_varCheck_(10833,d,0,"d");d = trie->shift;}
 }
      if (mch)
 goto match;
    }
  return 0;

 match:



  if (lim - mch > kwset->maxd)
    {_varCheck_(10845,lim,0,"lim");lim = mch + kwset->maxd;}
  {_varCheck_(10846,lmch,0,"lmch");lmch = 0;}
  {_varCheck_(10847,d,0,"d");d = 1;}
  while (lim - end >= d)
    {
      if ((d = delta[c = (end += d)[-1]]) != 0)
 continue;
      {_varCheck_(10852,beg,0,"beg");beg = end - 1;}
      if (!(trie = next[c]))
 {
   {_varCheck_(10855,d,0,"d");d = 1;}
   continue;
 }
      if (trie->accepting && beg <= mch)
 {
   {_varCheck_(10860,lmch,0,"lmch");lmch = beg;}
   {_varCheck_(10861,accept,0,"accept");accept = trie;}
 }
      {_varCheck_(10863,d,0,"d");d = trie->shift;}
      while (beg > text)
 {
   {_varCheck_(10866,c,0,"c");c = trans ? trans[(unsigned char) *--beg] : *--beg;}
   {_varCheck_(10867,tree,0,"tree");tree = trie->links;}
   while (tree && c != tree->label)
     if (c < tree->label)
       {_varCheck_(10870,tree,0,"tree");tree = tree->llink;}
     else
       tree = tree->rlink;
   if (tree)
     {
       {_varCheck_(10875,trie,0,"trie");trie = tree->trie;}
       if (trie->accepting && beg <= mch)
  {
    {_varCheck_(10878,lmch,0,"lmch");lmch = beg;}
    {_varCheck_(10879,accept,0,"accept");accept = trie;}
  }
     }
   else
     break;
   {_varCheck_(10884,d,0,"d");d = trie->shift;}
 }
      if (lmch)
 {
   {_varCheck_(10888,mch,0,"mch");mch = lmch;}
   goto match;
 }
      if (!d)
 {_varCheck_(10892,d,0,"d");d = 1;}
    }

  if (kwsmatch)
    {
      {_varCheck_(10897,kwsmatch->strchr,0,"kwsmatch->strchr");kwsmatch->strchr = accept->accepting / 2;}
      {_varCheck_(10898,&kwsmatch->beg[0],kwsmatch->beg,"&kwsmatch->beg[0]");kwsmatch->beg[0] = mch;}
      {_varCheck_(10899,&kwsmatch->size[0],kwsmatch->size,"&kwsmatch->size[0]");kwsmatch->size[0] = accept->depth;}
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

  {_varCheck_(10914,kwset,0,"kwset");kwset = (struct kwset *) kws;}
  if (kwset->words == 1 && kwset->trans == 0)
    {
      {_varCheck_(10917,ret,0,"ret");ret = bmexec(kws, text, size);}
      if (kwsmatch != 0 && ret != 0)
 {
   {_varCheck_(10920,kwsmatch->strchr,0,"kwsmatch->strchr");kwsmatch->strchr = 0;}
   {_varCheck_(10921,&kwsmatch->beg[0],kwsmatch->beg,"&kwsmatch->beg[0]");kwsmatch->beg[0] = ret;}
   {_varCheck_(10922,&kwsmatch->size[0],kwsmatch->size,"&kwsmatch->size[0]");kwsmatch->size[0] = kwset->mind;}
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

  {_varCheck_(10937,kwset,0,"kwset");kwset = (struct kwset *) kws;}
  __extension__ ({ struct obstack *__o = (&kwset->obstack); void *__obj = (0); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) {_varCheck_(10938,__o->next_free,0,"__o->next_free");__o->next_free = __o->object_base = __obj;} else (obstack_free) (__o, __obj); });
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
  static char trans[((127 * 2 + 1) + 1)];
  int i;

  if (match_icase)
    for (i = 0; i < ((127 * 2 + 1) + 1); ++i)
      {_varCheck_(10994,&trans[i],trans,"&trans[i]");trans[i] = ((1 && ((*__ctype_b_loc ())[(int) ((i))] & (unsigned short int) _ISupper)) ? tolower(i) : (i));}

  if (!(kwset = kwsalloc(match_icase ? trans : (char *) 0)))
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



      for (dm = dfa_1.musts; dm; dm = dm->next)
 {
   if (!dm->exact)
     continue;
   ++lastexact;
   if ((err = kwsincr(kwset, dm->must, strlen(dm->must))) != 0)
     fatal(err, 0);
 }


      for (dm = dfa_1.musts; dm; dm = dm->next)
 {
   if (dm->exact)
     continue;
   if ((err = kwsincr(kwset, dm->must, strlen(dm->must))) != 0)
     fatal(err, 0);
 }
      if ((err = kwsprep(kwset)) != 0)
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

  re_set_syntax((((1) << 1) | (((1) << 1) << 1) | (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
  dfasyntax((((1) << 1) | (((1) << 1) << 1) | (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1), match_icase);

  if ((err = re_compile_pattern(pattern, size, &regex)) != 0)
    fatal(err, 0);

  dfainit(&dfa_1);





  if (match_words || match_lines)
    {






      char *n = xmalloc(size + 50);
      int i = 0;

      strcpy(n, "");

      if (match_lines)
 strcpy(n, "^\\(");
      if (match_words)
 strcpy(n, "\\(^\\|[^0-9A-Za-z_]\\)\\(");

      {_varCheck_(11078,i,0,"i");i = strlen(n);}
      memcpy((n + i), (pattern), (size));
      {_varCheck_(11080,i,0,"i");i += size;}

      if (match_words)
 strcpy(n + i, "\\)\\([^0-9A-Za-z_]\\|$\\)");
      if (match_lines)
 strcpy(n + i, "\\)$");

      {_varCheck_(11087,i,0,"i");i += strlen(n + i);}
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

  if (strcmp(matcher, "posix-egrep") == 0)
    {
      re_set_syntax((((((1) << 1) << 1) | ((((1) << 1) << 1) << 1) | (((((1) << 1) << 1) << 1) << 1) | (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
      dfasyntax((((((1) << 1) << 1) | ((((1) << 1) << 1) << 1) | (((((1) << 1) << 1) << 1) << 1) | (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)), match_icase);
    }
  else
    {
      re_set_syntax(((((1) << 1) << 1) | ((((1) << 1) << 1) << 1) | (((((1) << 1) << 1) << 1) << 1) | (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
      dfasyntax(((((1) << 1) << 1) | ((((1) << 1) << 1) << 1) | (((((1) << 1) << 1) << 1) << 1) | (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)), match_icase);
    }

  if ((err = re_compile_pattern(pattern, size, &regex)) != 0)
    fatal(err, 0);

  dfainit(&dfa_1);





  if (match_words || match_lines)
    {






      char *n = xmalloc(size + 50);
      int i = 0;

      strcpy(n, "");

      if (match_lines)
 strcpy(n, "^(");
      if (match_words)
 strcpy(n, "(^|[^0-9A-Za-z_])(");

      {_varCheck_(11144,i,0,"i");i = strlen(n);}
      memcpy((n + i), (pattern), (size));
      {_varCheck_(11146,i,0,"i");i += size;}

      if (match_words)
 strcpy(n + i, ")([^0-9A-Za-z_]|$)");
      if (match_lines)
 strcpy(n + i, ")$");

      {_varCheck_(11153,i,0,"i");i += strlen(n + i);}
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


  {_varCheck_(11174,buflim,0,"buflim");buflim = buf + size;}

  for (beg = end = buf; end < buflim; beg = end + 1)
    {
      if (kwset)
 {

   {_varCheck_(11181,beg,0,"beg");beg = kwsexec(kwset, beg, buflim - beg, &kwsm);}
   if (!beg)
     goto failure;


   {_varCheck_(11186,end,0,"end");end = memchr(beg, '\n', buflim - beg);}
   if (!end)
     {_varCheck_(11188,end,0,"end");end = buflim;}
   while (beg > buf && beg[-1] != '\n')
     --beg;
   {_varCheck_(11191,save,0,"save");save = *end;}
   if (kwsm.strchr < lastexact)
     goto success;
   if (!dfaexec(&dfa_1, beg, end, 0, (int *) 0, &backref))
     {
       {_varCheck_(11196,end,1,"end");*end = save;}
       continue;
     }
   {_varCheck_(11199,end,1,"end");*end = save;}

   if (!backref)
     goto success;
 }
      else
 {

   {_varCheck_(11207,save,0,"save");save = *buflim;}
   {_varCheck_(11208,beg,0,"beg");beg = dfaexec(&dfa_1, beg, buflim, 0, (int *) 0, &backref);}
   {_varCheck_(11209,buflim,1,"buflim");*buflim = save;}
   if (!beg)
     goto failure;

   {_varCheck_(11213,end,0,"end");end = memchr(beg, '\n', buflim - beg);}
   if (!end)
     {_varCheck_(11215,end,0,"end");end = buflim;}
   while (beg > buf && beg[-1] != '\n')
     --beg;

   if (!backref)
     goto success;
 }


      {_varCheck_(11224,regex.not_eol,0,"regex.not_eol");regex.not_eol = 0;}
      if ((start = re_search(&regex, beg, end - beg, 0, end - beg, &regs)) >= 0)
 {
   {_varCheck_(11227,len,0,"len");len = regs.end[0] - start;}
   if (!match_lines && !match_words || match_lines && len == end - beg)
     goto success;






   if (match_words)
     while (start >= 0)
       {
  if ((start == 0 || !((1 && ((*__ctype_b_loc ())[(int) ((beg[start - 1]))] & (unsigned short int) _ISalnum)) || (beg[start - 1]) == '_'))
      && (len == end - beg || !((1 && ((*__ctype_b_loc ())[(int) ((beg[start + len]))] & (unsigned short int) _ISalnum)) || (beg[start + len]) == '_')))
    goto success;
  if (len > 0)
    {

      --len;
      {_varCheck_(11246,regex.not_eol,0,"regex.not_eol");regex.not_eol = 1;}
      {_varCheck_(11247,len,0,"len");len = re_match(&regex, beg, start + len, start, &regs);}
    }
  if (len <= 0)
    {

      if (start == end - beg)
        break;
      ++start;
      {_varCheck_(11255,regex.not_eol,0,"regex.not_eol");regex.not_eol = 0;}
      {_varCheck_(11256,start,0,"start");start = re_search(&regex, beg, end - beg,
          start, end - beg - start, &regs);}
      {_varCheck_(11258,len,0,"len");len = regs.end[0] - start;}
    }
       }
 }
    }

 failure:
  return 0;

 success:
  *endp = end < buflim ? end + 1 : end;
  return beg;
}

static void
Fcompile(pattern, size)
     char *pattern;
     size_t size;
{
  char *beg, *lim, *err;

  kwsinit();
  {_varCheck_(11280,beg,0,"beg");beg = pattern;}
  do
    {
      for (lim = beg; lim < pattern + size && *lim != '\n'; ++lim)
 ;
      if ((err = kwsincr(kwset, beg, lim - beg)) != 0)
 fatal(err, 0);
      if (lim < pattern + size)
 ++lim;
      {_varCheck_(11289,beg,0,"beg");beg = lim;}
    }
  while (beg < pattern + size);

  if ((err = kwsprep(kwset)) != 0)
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

  for (beg = buf; beg <= buf + size; ++beg)
    {
      if (!(beg = kwsexec(kwset, beg, buf + size - beg, &kwsmatch)))
 return 0;
      {_varCheck_(11311,len,0,"len");len = kwsmatch.size[0];}
      if (match_lines)
 {
   if (beg > buf && beg[-1] != '\n')
     continue;
   if (beg + len < buf + size && beg[len] != '\n')
     continue;
   goto success;
 }
      else if (match_words)
 for (try = beg; len && try;)
   {
     if (try > buf && ((1 && ((*__ctype_b_loc ())[(int) (((unsigned char) try[-1]))] & (unsigned short int) _ISalnum)) || ((unsigned char) try[-1]) == '_'))
       break;
     if (try + len < buf + size && ((1 && ((*__ctype_b_loc ())[(int) (((unsigned char) try[len]))] & (unsigned short int) _ISalnum)) || ((unsigned char) try[len]) == '_'))
       {
  {_varCheck_(11327,try,0,"try");try = kwsexec(kwset, beg, --len, &kwsmatch);}
  {_varCheck_(11328,len,0,"len");len = kwsmatch.size[0];}
       }
     else
       goto success;
   }
      else
 goto success;
    }

  return 0;

 success:
  if ((end = memchr(beg + len, '\n', (buf + size) - (beg + len))) != 0)
    ++end;
  else
    end = buf + size;
  {_varCheck_(11344,endp,1,"endp");*endp = end;}
  while (beg > buf && beg[-1] != '\n')
    --beg;
  return beg;
}
