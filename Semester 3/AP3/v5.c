#include <stdio.h>
#include <string.h>
#define myname "Abdul"
main()
{
    int     umur=0;
    char    nama[41];

    printf("Masukkan Nama: ");
    scanf("%s", nama);

    if (strcmp(nama, myname) == 0)
        printf("Andalah orangnya!\n");
    else
        printf("Anda bukanlah orangnya!\n");

    fflush(stdin);
    getch();
}

