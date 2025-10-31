#include <stdio.h>

int main(void) {
  /*********Begin*********/
  int stdrow,stdcol;
  printf("Input m, n:");
  scanf("%d,%d", &stdcol, &stdrow);
  int arrow[stdcol][stdrow];
  printf("Input %d*%d array:\n",stdrow,stdcol);
  int i,j;
  int mid;
  for (j = 0; j < stdcol; j++) {
    for  (i = 0; i < stdrow; i++) {
      scanf("%d",&mid);
      arrow[i][j]=mid;
    }
  }
  int k = 0;
  int m,n = 0;
  k = arrow[0][0];
  //printf ("arrow 00=%d",k);
  
  for (j = 0; j < stdcol; j++) {
    for  (i = 0; i < stdrow; i++) {
      if (arrow[i][j] >= k) {
        k = arrow[i][j];
        m = i+1;    //col
        n = j+1;    //row
      }
    }
  }
  printf("max=%d, row=%d, col=%d", k, n, m);

  /*********End**********/
  return 0;
}

