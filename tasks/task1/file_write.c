#include <stdlib.h>
#include <stdio.h>


/*how to write and read a file*/

/*
"r" read (text file)
"w" write (text file)
"br" binary read
"bw" binary write
atoi text to interger
atof text to float
*/
int main(void)
{
	FILE* fp;  /* This is the file pointer*/

fp= fopen("afile.dat","w");

for(int i=0;i<100;i++)
	{
		fprintf(fp,"%i\n",i);
	}

fclose(fp);

int a=0;

fp= fopen("afile.dat","r");
char line[32];

for (int j=0;j<100;j++)
	{
		fgets(line,sizeof line, fp);
		a=a+atoi(line);
	}
fclose(fp);

printf("%i",a);

}