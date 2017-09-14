#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*set an array to mold 256 float*/
/*float original[256]*/
/*makes noise*/

int main(void)
{
	FILE* fp;  /* This is the file pointer*/
	float original[1000]; /*orignal input*/


fp= fopen("afile.dat","w");   /*noisy file*/
	for (int j=0; j<100;j++)
		{
			float i= 0.2*((float)rand()/(float)RAND_MAX)-0.1;  /*noise*/
			original[j]=(sin((float)j/100.0*2*M_PI)+i);        /*for 0-2pi noisy sin */
			 printf("%f\n",original[j]);
			fprintf(fp, "%f\n",original[j]);
		}

fclose(fp);

return 0;
}