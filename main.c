#include <stdio.h>
int main(void)
{
  int i = 10;
  int *ptr = &i;
 printf("i = %d, pi : %p\n", i, ptr);
  (*ptr)++; 
 printf("i = %d, pi : %p\n", i, ptr);
  *ptr++;
 printf("i = %d, pi : %p\n", i, ptr);
 
return 0;
}
