/* The file syscall_table.h is auto generated. DO NOT EDIT, CHANGES WILL BE LOST. */
/* If you want to add syscalls, use syscall_table_gen.py  */

#define SYS_SETCLOCK 			(0)
#define SYS_SLEEP 			(1)
#define SYS_SUSPEND 			(2)
#define SYS_THREAD_CREATE 			(3)
#define SYS_THREAD_JOIN 			(4)
#define SYS_TEST 			(5)
#define SYS_GETPID 			(6)
#define SYS_GETPPID 			(7)
#define SYS_OPEN 			(8)
#define SYS_CLOSE 			(9)
#define SYS_READ 			(10)
#define SYS_WRITE 			(11)
#define SYS_SEEK 			(12)
#define SYS_MKDIR 			(13)
#define SYS_UNLINK 			(14)
#define SYS_GETTIMEOFDAY 			(15)
#define SYS_MALLOC 			(16)
#define SYS_MEM_INIT 			(17)
#define SYS_FREE 			(18)
#define SYS_CALLOC 			(19)
#define SYS_REALLOC 			(20)
#define SYS_OPENDIR 			(21)
#define SYS_READDIR 			(22)
#define SYS_CLOSEDIR 			(23)
#define SYS_STAT 			(24)
#define SYS_POLL 			(25)
#define SYS_IOCTL 			(26)
#define SYS_CHDIR 			(27)
#define SYS_GETCWD 			(28)
#define SYS_SEM_INIT 			(29)
#define SYS_SEM_POST 			(30)
#define SYS_SEM_WAIT 			(31)
#define SYS_SEM_DESTROY 			(32)
#define SYS_MUTEX_INIT 			(33)
#define SYS_MUTEX_UNLOCK 			(34)
#define SYS_MUTEX_LOCK 			(35)
#define SYS_MUTEX_DESTROY 			(36)
#define SYS_SOCKET 			(37)
#define SYS_BIND 			(38)
#define SYS_ACCEPT 			(39)
#define SYS_CONNECT 			(40)
#define SYS_LISTEN 			(41)
#define SYS_SENDTO 			(42)
#define SYS_RECVFROM 			(43)
#define SYS_SETSOCKOPT 			(44)
#define SYS_GETSOCKOPT 			(45)
#define SYS_SHUTDOWN 			(46)
#define SYS_DUP 			(47)
#define SYS_DUP2 			(48)
#define SYS_KILL 			(49)
#define SYS_EXIT 			(50)
#define _SYSCALLS_NR (51) /* We have 51 syscalls! */