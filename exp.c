#include <stdio.h>
#include <stdarg.h>
void fun(char *msg, ...);
int main() {
  fun("Hello", 1, 4, 7, 11);
  return 0;
}
void fun(char *msg,...) {
  int num;
  va_list ptr;
  va_start(ptr, msg);
  num = va_arg(ptr, int);
  num = va_arg(ptr, int);
  printf("%d", num);
}
