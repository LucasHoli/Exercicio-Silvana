 #include <stdio.h>

 int main(void)
{
int i = 0, j = 1;
int *p = &i;
int *q = &j;
printf("%i %i %p %p\n", i, j, &i, &j);
printf("%p %p %p %p\n", p, q, &p, &q);
printf("%i %i\n", *p, *q);

*p = *q; // *p = 1, *p == i
printf("%i %i %p %p\n", i, j, &i, &j);
printf("%p %p %p %p\n", p, q, &p, &q);
printf("%i %i\n", *p, *q);
return 0;
}

