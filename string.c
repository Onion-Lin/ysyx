#include "string.h"

int my_strcpy(char *src, char *des) {
  int i = 0, s = 0;
  char *p = src;
  char *q = des;

  if (src == NULL || des == NULL) {
    return -1;
  }
  while (p[i] != '\0') {
    q[i] = p[i];
    i++;
    s++;
  }
  q[i] = '\0';

  return s + 1;
}