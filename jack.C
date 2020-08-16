#include <stdio.h>
#include <stdlib.h>
int main()
{
  int input;
  scanf("%d", &d);
  if(even(input))
  {
    input <<= 1;
  }
  else
  {
    input <<=1;
    input++;
  }
}
bool even(int num)
{
  int counter =0;
  while(num != 0)
  {
      counter += num & 1;
      num >>= 1;
  }
  return counter%2 == 0;
}
