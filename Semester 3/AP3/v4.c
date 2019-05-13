#include <stdio.h>
void exchange ( int *a, int *b );
main()
{
    int a = 10, b = 20;

printf("From main: a0 = %d, b = %d\n", a, b);
    exchange(&a, &b);

printf("a1 = %d, b = %d\n", a, b);

fflush(stdin);

getch();
}

void exchange ( int *a, int *b )
{
    int temp;
    temp = *a; *a = *b;*b = temp;
    printf("From function exchange: ");
    printf("a2 = %d, b = %d\n", *a, *b);
}

