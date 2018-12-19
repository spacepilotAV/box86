#ifndef __DEBUG_H_
#define __DEBUG_H_

extern int box86_log;    // log level
#define LOG_NONE 0
#define LOG_INFO 1
#define LOG_DEBUG 2
#define LOG_DUMP 3

#define printf_log(L, ...) if(L<=box86_log) printf(__VA_ARGS__)

#endif //__DEBUG_H_