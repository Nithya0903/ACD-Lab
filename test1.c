#include<stdio.h>

void test1(int b)
{
  printf("hjgjhk");
}
int test2(int b, int a[])
{
  printf("jbhkj");
  return b;
}
int main()
{
  //Program to add 2 numbers and increment by 1
  int a[3] = { 1, 2 };
  int b=0;
  a[2] = a[1] + a[2];
  a[2]++;
  test1(b);
  printf("%d",test2(b,a));
  //test3();
  printf("%d", a[2]);

  return 0;
}