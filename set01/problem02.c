#include <stdio.h>

int main()
{
  int a, b;
  int sum_v;
  printf("enter a: \n");
  scanf("%d", &a);
  printf("enter b: \n");
  scanf("%d", &b);
  sum_v = add(a, b);
  printf("%d",sum_v);
}

int add(int a, int b)
{
  int sum = a + b;
  return sum;
}
  
