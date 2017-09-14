#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*set an array to mold 256 float*/
/*float original[256]*/
/*example of sin*/

int main(void)
{


	FILE* fp;  /* This is the file pointer*/
fp= fopen("afile.dat","w");   /*noisy file*/

	float original[256]; /*orignal input*/
	float output[256]; /* filtered output*/
	float filter; /* size of the moving filter*/
	float x; /*held value*/
	



for (int j=0; j=100;j++)/*for 0-2pi */
	{
	float i= 0.2*((float)rand()/(float)RAND_MAX)-0.1;
	original[j]=(sin(j)+i)/j*(2*M_PI);
	}

fclose(fp);


	return 0;
}