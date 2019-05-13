#include <stdio.h>

void myFunc(int x)
{
	if(x>0)
	myFunc(--x);
	printf("%d,",x);
}
int main()
{
	myFunc(5);
	int tesarray[3][2][2]={1,2,3,4,5,6,7,8,9,10,11,12};
	int p=2*3+4*5;
	printf("\np=%d",p);
	printf("\ny=%d",tesarray[2][1][0]);
	return 0;
}
