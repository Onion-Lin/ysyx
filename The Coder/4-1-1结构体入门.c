#include <stdio.h>
/*********Begin*********/
struct student {
  long long code;
  char name[20];
  int mark;
};

int main() {
  int nub = 2;
  scanf("%d", &nub);
  struct student s[nub + 1];
  int i;
  for (i = 0; i < nub; i++) {
    scanf("%lld", &s[i].code);
    scanf("%s", s[i].name);
    scanf("%d", &s[i].mark);
  }
  /*printf ("code1=%lld",s[0].code);
  printf ("code1=%s",s[0].name);
  printf ("code1=%d\n",s[0].mark);
   printf ("code2=%lld ",s[1].code);
  printf ("code2=%s ",s[1].name);
  printf ("code2=%d\n",s[1].mark);   */
  int j, k;
  int tmp;
  for (i = 0; i < nub; i++) {
    for (j = i; j < nub; j++) {
      if (s[i].mark < s[j].mark) {
        s[nub].mark = s[j].mark;
        s[nub].code = s[j].code;
        for (k = 0; k < (int)strlen(s[j].name); k++) {
          s[nub].name[k] = s[j].name[k];
        }
        s[nub].name[k] = '\0';

        s[j].mark = s[i].mark;
        s[j].code = s[i].code;
        for (k = 0; k < (int)strlen(s[i].name); k++) {
          s[j].name[k] = s[i].name[k];
        }
        s[j].name[k] = '\0';

        s[i].mark = s[nub].mark;
        s[i].code = s[nub].code;
        for (k = 0; k < (int)strlen(s[nub].name); k++) {
          s[i].name[k] = s[nub].name[k];
        }
        s[i].name[k] = '\0';
      }
    }
  }
  for (i = 0; i < nub; i++) {
    printf("%lld %s %d\n", s[i].code, s[i].name, s[i].mark);
  }

  return 0;
}

/*********End*********/