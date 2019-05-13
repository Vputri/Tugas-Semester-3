#include <stdio.h>


	char buffer[]={"andi,joko, dan suti"};
	main()
	{
		int ctr;
		for (ctr = 0; buffer[ctr] !='\0'; ctr++) 
		{
			if (buffer[ctr] != 'a' || buffer[ctr] != 'e' || buffer[ctr] == 'i' || buffer[ctr] == 'o' || buffer[ctr] == 'u')
			continue; 
			putchar(buffer[ctr]);
		}

	}


