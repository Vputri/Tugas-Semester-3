#include <stdio.h>

int main()
{
    int A;
    int B;
    printf("Masukkan bilangan ke-1 : ");
    scanf("%d",&A);
    printf("Masukkan bilangan ke-2 : ");
    scanf("%d",&B);
    if (A>B){
        printf("%d lebih besar daripada %d\n\n",A,B);
    }else if(A<B){
        printf("%d lebih kecil daripada %d\n\n",A,B);
    }else{
        printf("%d sama dengan %d\n\n",A,B);
    }

    
}