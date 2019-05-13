#include <stdio.h>

int main()
{
	int z,x=5,y=-10,a=4,b=2,c=10,v;
	z=x++ - --y * b/a;
	v=c++ + ++c;
	printf ("z = %d \n", z);
	printf ("%d,%d,%d,%d\n",v,c++,c,++c);
	printf ("My salary was increased by 15%'!\n");
	printf ("\"My salary was increased by 15/%\!\"\n");
	printf ("My salary was increased by 15%!\n");
	printf ("\"My salary was increased by 15%%!\"\n");
}


