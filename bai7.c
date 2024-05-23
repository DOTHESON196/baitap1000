#include<stdio.h>
int main()
{
  int i, n;
  float S;
  S = 0;
  do
  {
     printf("Nhập vào số n: ");
     scanf("%d", &n);
     if(n < 1)
     {
        printf("Số n phải lớn hơn hoặc bằng 1, sai ");
     }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    S = S + (float)i / (i + 1);
  }
 
  printf("\nTổng 1/2 + 2/3 + ... + %d/%d là: %.2f",n,(n + 1), S);
}