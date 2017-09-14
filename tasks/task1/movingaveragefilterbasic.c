#include <stdlib.h>
#include <stdio.h>

/*set an array to mold 256 float*/
/*float original[256]*/
/*basic filtering only really one use*/

int main(void)
{
	float original[256];
	float output[256];
	float x;

	for(int n=2;n<253;n++)
		{
			x=0;

			for(int m=-2,m<2,m++)
			{
				x=x+original[m+n];
			}
			 output[n-2]=x/5.0;
			}
		}

	return 0;
}