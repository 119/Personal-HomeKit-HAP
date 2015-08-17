#ifndef __KMADD_COMMON_H__
#define __KMADD_COMMON_H__

#define KMADD_COLOR_RED     "\x1b[31m"
#define KMADD_COLOR_GREEN   "\x1b[32m"
#define KMADD_COLOR_YELLOW  "\x1b[33m"
#define KMADD_COLOR_BLUE    "\x1b[34m"
#define KMADD_COLOR_MAGENTA "\x1b[35m"
#define KMADD_COLOR_CYAN    "\x1b[36m"
#define KMADD_COLOR_RESET   "\x1b[0m"

#if 1  // open debug
#define KMADD_TRACE_ON 1
#define KMADD_TRACE_IN  printf(KMADD_COLOR_RED"trace_func ---->>>: [%s:%d %s]\n\r"KMADD_COLOR_RESET,__FILE__,__LINE__,__FUNCTION__)
#define KMADD_TRACE_AT  printf(KMADD_COLOR_BLUE"trace_func -----at: [%s:%d %s]\n\r"KMADD_COLOR_RESET,__FILE__,__LINE__,__FUNCTION__)
#define KMADD_TRACE_WARN printf(KMADD_COLOR_GREEN"need mod@: [%s:%d %s]\n\r"KMADD_COLOR_RESET,__FILE__,__LINE__,__FUNCTION__)
#define KMADD_TRACE_OUT printf(KMADD_COLOR_GREEN"trace_func <<<----: [%s:%d %s]\n\r"KMADD_COLOR_RESET,__FILE__,__LINE__,__FUNCTION__)
//#define KMADD_TRACE_IRQ  printk(KMADD_COLOR_BLUE"trace_IRQ ====at: [%s:%d %s]\n\r"KMADD_COLOR_RESET,__FILE__,__LINE__,__FUNCTION__)
#define KMADD_TRACE_IRQ 
#define kmaddprintf(_fmt_, ...) printf("[kmadd %s:%d] "_fmt_"\n\r", __FILE__, __LINE__, ##__VA_ARGS__)
//#define kmaddprintk(_fmt_, ...) printk("[kmadd %s:%d] "_fmt_"\n\r", __FILE__, __LINE__, ##__VA_ARGS__)
#define kmaddprintk(...)

#else  // close debug
#define KMADD_TRACE_ON 0
#define KMADD_TRACE_IN 
#define KMADD_TRACE_AT 
#define KMADD_TRACE_WARN 
#define KMADD_TRACE_OUT 
#define KMADD_TRACE_IRQ 
#define kmaddprintf(...)
#define kmaddprintk(...)
#endif 


#endif
