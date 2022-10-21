#include <stdio.h>

int main()
{
  int A, B;
  int sum;
  printf("Enter A :cd set01");
  scanf("%d", &A);
  printf("Enter B :");
  scanf("%d", &B);
  sum = add(A, B);
  printf("%d",sum);
}

int add(int A, int B)
{
  int sum = A + B;
  return sum;
}