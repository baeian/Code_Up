#include <stdio.h>

int n;

void f(int n)
{
    int a=0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            a++;
        }
    }
    printf(a==2?"prime":"composite");
}
// 이 부분에 들어가야 될 코드를 작성하여 제출
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}