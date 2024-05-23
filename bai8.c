#include<stdio.h>
int main()
{
  int i, n;
  float S;
  S = 0;
  do
  {
     printf("\nNhập vào số n: ");
     scanf("%d", &n);
     if(n < 1)
     {
        printf("\nSố n phải lớn hơn hoặc bằng 1, sai");
     }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    S = S + (float)(2 * i + 1) / (2 * i + 2);
  }
  printf("\nTổng 1/2 + 3/4 + ... + %d/%d là: %.2f",(2 * n + 1),(2 * n + 2), S);
}
