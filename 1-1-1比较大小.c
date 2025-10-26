#include <stdio.h>

int main(void) {
  /*********Begin*********/
  int input[10];
  int i = 0;
	for (i=0;i<10;i++){
		input[i]=getchar();
		printf ("input %d = %d\n",i,input[i]);
	}
	
	

  
  int mdl = 0;
  int k, j = 0;
  for (j = 0; j < 10; j++) {
    for (k = j+1; k < 10; k++) {
    	if (input[k] > input[j]) {
      		mdl = input[j];
      		input[j] = input[k];
      		input[k] = mdl;
    	}
    }
    printf ("input%d=%d\n",j,input[j]);
  }

  for (i = 0; i < 10; i++) {
    //printf("%s", input[i]);
  }
  /*********End**********/
  return 0;
}

