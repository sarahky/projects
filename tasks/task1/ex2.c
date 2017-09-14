#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	/*basic example of a array*/
	int a[20];
	int n;

	for(int n=0;n<20;n++)
		{
			a[n]= 5*n;
			 printf("\n %d",a[n]);
		}

	return 0;
}