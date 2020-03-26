#include<stdio.h>
int main(void)
{
  int retry;
  do{
    int i, no;
    do{
      printf("正の整数を入力してください：");
      scanf("%d", &no);
      if(no <= 0)
        puts("\a正でない数を入力しないでください。");
    }while(no <= 0);

    
  }
}