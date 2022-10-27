#include <stdio.h>

int main()
{
  int a, b, c, compare;
  printf("Enter a: \n");
  scanf("%d", &a);
  printf("Enter b: \n");
  scanf("%d", &b);
  printf("Enter c:");
  scanf("%d", &c);
  compare = com(a, b, c);
  printf("The largest of 1, 2 and 3 is %d",com);
  }

int com(int a, int b, int c)
{
  int large;
  if(a>b)
    large = a;
  else if (a>c)
    large = a;
  else if (b>c)
    large = b;
  else if(b>a)
    large = b;
  else if(c>a)
    large = c;
  else if(c>b)
    large = c;
  return large;
}
