#ifndef BSW_ETC_MY_STDIO_H_
#define BSW_ETC_MY_STDIO_H_

#define BUFSIZE     128
#define KB_BS '\x7F'
#define KB_CR '\r'

void my_puts(const char *str);
void my_printf(const char *fmt, ...);
void my_scanf(const char *fmt, ...);

#endif /* BSW_ETC_MY_STDIO_H_ */
