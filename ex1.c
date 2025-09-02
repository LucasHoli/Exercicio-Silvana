#include <stdio.h>

int main(void)
 {
int i = 2;
int j = i * i; // j = 4
int *k = &i; // *k = 2
int m = *k * *k; // m = 4
*k = j * *k * m; // *k = 4 * 2 * 4 = 32

printf("%i %i %i %i", i, j, *k, m);
return 0;
}
