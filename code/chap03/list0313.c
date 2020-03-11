#include<stdio.h>
int main(void)
{
  int n1, n2, n3, max;
  puts("三つの整数を入力してください。");
  printf("整数１："); scanf("%d", &n1);
  printf("整数２："); scanf("%d", &n4);
  printf("整数３："); scanf("%d", &n3);

  max = n1;
  if(n2 > max) max = n2;
  if(n3 > max) max = n3;
  printf("最大値は%dです。", max);
  return 0;
}