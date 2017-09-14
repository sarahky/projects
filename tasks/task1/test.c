#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*set an array to mold 256 float*/
/*float original[256]*/


int main(void)
{
	FILE* fp;  /* This is the file pointer*/

	float original[256]; /*orignal input*/
	float output[256]; /* filtered output*/
	float filter; /* size of the moving filter*/
	float x; /*held value*/


fp= fopen("afile.dat","w");   /*noisy file*/
	for (int j=0; j=100;j++)/*for 0-2pi */
		{
			float i= 0.2*((float)rand()/(float)RAND_MAX)-0.1;
			original[j]=(sin(j)+i)/j*(2*M_PI);
		}
fclose(fp);






fp= fopen("afile.dat","r");    /*filtered file*/

	filter=5;

	for(int n=0;n<255-filter;n++)  /*full array*/
		{
			x=0;

			for(int m=0;m=filter;m++)   /*filter*/
				{
					x=x+original[m+n];
				}
			 output[n]=x/(float)filter;
			 printf("%f",output[n]);
		}

fclose(fp);

return 0;
}