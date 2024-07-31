#include <stdio.h>
int prime(n1)
{
  int i, count = 0, flag = 0;
  for (i = 1; i <= n1; i++)
  {

    if (n1 % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    flag = 1;
  }
  return flag;
}
void main()
{
  int n, r, rev = 0;
  printf("enter the num ");
  scanf("%d", &n);
  prime(n);
  if (prime() == 1)
  {
    while (n != 0)
    {
      r = n % 10;
      rev = rev * 10 + r;
      n = n / 10;
    }
  }

  if (prime(rev) == 1)
  {
    printf("this is a twisted prime number");
  }
  else
  {
    printf("not a twisted prime number");
  }
}