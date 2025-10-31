#include<stdio.h>

void solve(void) {
  /*********Begin*********/
  int a, b = 1;
  int ab, ba = 0;
  for (a = 1; a <= 3000; a++) {
    ab = 0;
    ba=0;
    int i = 1;
    
    for (i = 1; i < (a / 2 + 1); i++) {     //求出a因数和对应的数ab
      if (a % i == 0) {
        ab += i;
      }
    }
    
    int j = 1;
      for (j = 1; j < (ab / 2 + 1); j++) {      //求出ab因数和对应的数ba
        if (ab % j == 0) {
          ba += j;
        }
    }
    
    if (ab<=3000&&ba==a&&a!=ab){           //如果ab比3000小，就把他当成b，判断他的因数与a是否相等
        printf("(%d,%d)",a,ab);
    }
    
    /*for (b = 1; b <= 3000; b++) {
      int j = 1;
      for (j = 1; j < (b / 2 + 1); j++) {
        if (b % j == 0) {
          ba += j;
        }
      }
    if (ab==b&&ba==a){
        printf("(%d,%d)",a,b);
    }
    }*/
  }
  /*********End**********/
}
int main(void) {
  solve();

  return 0;
}
