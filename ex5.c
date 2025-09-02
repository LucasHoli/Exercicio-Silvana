#include <stdio.h>

int main(void)
{
int i = 5;
int *p = &i;

printf("%i %i %i %i %i", p, *p+2, **&p, 3**p, **&p+4);
return 0;
}
