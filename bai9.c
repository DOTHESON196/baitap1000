#include<stdio.h>
int main()
{
  int n;
  float p = 1;
  do
  {
     printf("\nNhập vào số n: ");
     scanf("%d", &n);
     if(n < 1)
     {
        printf("\nSố n phải lớn hơn hoặc bằng 1, vui lòng nhập lại !");
     }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    p = p * i;
  }
  printf("\nTích 1 x 2 x ... x %d là: %.1f",n, p);
}
