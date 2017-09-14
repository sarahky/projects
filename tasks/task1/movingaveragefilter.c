#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*set an array to mold 256 float*/
/*float original[256]*/
/* can change the filter size*/

int main(void)
{
	


FILE* fp;  /* This is the file pointer*/
FILE* Filtered;
	float original[100]; /*orignal input*/
	float output[100]; /* filtered output*/
	int filter; /* size of the moving filter*/
	float x; /*held value*/


fp= fopen("afile.dat","r");    /*filtered file*/
Filtered=fopen("smoothed.dat","w");  
	filter=5;

 	char line [32];

 	printf("\nReading input file");
	for(int j=0;j<100;j++)

	{
	fgets(line,sizeof line,fp);
	original[j]=atof(line);
	printf("%f\n",original[j]);
	}

	printf("\nFiltering");
	for(int n=0;n<100-filter;n++)  /*full array*/
		{
			x=0;

			for(int m=0;m<filter;m++)   /*filter*/
				{
					x=x+original[m+n];
				}
			 output[n]=x/(float)filter;
			 printf("%f\n",output[n]);
			 fprintf(Filtered, "%f\n",output[n]);
		
		}

fclose(fp);
fclose(Filtered);
return 0;
}