#include <stdio.h>

int main(){
    int A;
    int B;
    int i;
    int j;

    printf("--------------");
    printf("\n");
    printf("Deret Bilangan");
    printf("\n");
    printf("1.Ganjil");
    printf("\n");
    printf("2.Genap");
    printf("\n");
    printf("3.Prima");
    printf("\n");
    printf("--------------");
    printf("\n");
    printf("\n")
    printf("Masukkan Pilihan Anda : ");
    scanf("%d",&j);
    printf("\n");
    printf("Masukkan bilangan awal: ");
    scanf("%d",&A);
    printf("\n");
    printf("Masukkan bilangan akhir: ");
    scanf("%d",&B);
    printf("\n");

    switch(j){
	case(1):
	    for (i=A;i<=B;i++){
		if(i%2==1)
		printf("%d",i);
	    }
	    break;
	case(2):
	    for (i=A;i<=B;i++){
		if(i%2==0)
		printf("%d",i);
        }
	    break;
	case(3):
	    for(i=A; i<=B; i++){
		if(i%2==1 && i%3==1||i==2||i==3)
		printf("%d",i);
		}
	    break;
	default:printf("Menu Yang Anda Pilih Tidak Ada");
	    break;
    }
    getch();
}
