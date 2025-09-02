#include <stdio.h>

int main(void)
{
int x = 5; // x =5
int *y = &x; // *y = 5
int z = *y; // z = 5
printf("%i, %i, %i\n", x, *y, z);

x = 7; // x = 7
printf("%i, %i, %i\n", x, *y, z);

*y = 2;
printf("%i, %i, %i\n", x, *y, z);
return 0;
 }
