#include <stdio.h>

void isLeapYear (void);
void nine (void);


int main() {
  int type;
  while (1) {
    printf("输入1或者2执行程序,输入0退出程序:\n");
    printf("(Ysl63) > ");
    scanf("%d", &type);
	int ch = getchar();

    if (type == 1 || type == 2 || type == 0) {		//判断是否正确输入
      if (type == 1) {
        isLeapYear();
      }
      
	  if (type == 2) {
        nine();
      }
      
	  if (type == 0) {
        printf("程序退出\n");
        break;
      }

    } 	else 	{
      		printf("指令错误!!!\n");
    	}
  }
  return 0;
}
  

/*闰年部分*/
void isLeapYear (void) {
    int year;
    printf("请输入年份：");
    scanf("%d", &year);
    
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      printf("%d是闰年\n", year);
    } else {
      printf("%d不是闰年\n", year);
    }
  
}

/*乘法表部分*/
void nine (void) {
  for (int i = 1; i <= 9; i++) {
    
	for (int j = 1; j <= i; j++) {
      printf("%d*%d=%2d  ", j, i, i * j);
    }
    
	printf("\n");
  }
}