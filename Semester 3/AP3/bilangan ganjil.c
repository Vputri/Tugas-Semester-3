#include <stdio.h>

int main()
{
    int A;
    int B;
    int i;
    printf("Masukkan bilangan awal: ");
    scanf("%d",&A);
    printf("Masukkan bilangan akhir: ");
    scanf("%d",&B);
    for (i=A;i<=B;i++){
    if(i%2==1)
            printf(" %d",i);
    }
    getch();
}