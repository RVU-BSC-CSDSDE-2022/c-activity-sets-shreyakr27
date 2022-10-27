#include <stdio.h>

int main()
{
  int A, B;
  int sum;
  printf("Enter A :");
  scanf("%d", &A);
  printf("Enter B :");
  scanf("%d", &B);
  sum = add(A, B);
  printf("The sum of 1 and 2 is %d",sum);
}

int add(int A, int B)
{
  int sum = A + B;
  return sum;
}