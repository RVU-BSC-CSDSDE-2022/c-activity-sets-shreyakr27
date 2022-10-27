
void a() {
  printf("%d\n", ar[0]);
  ar[0] = 2;
}


int main() {
  int ar[] = {1, 2, 3};

  a(3, ar);
  print("%d\n", ar[0]);
  
  return 0;
}