#include <stdlib.h>
#include <stdio.h>

/*needs to be fixed*/


int main(void)

{
float x;
float y;
int i;
float* z;
x=5;
y=7;

	z = &x;

	printf("\nx=%f y=%f",x,y);
	printf("\nx is at %p y is at %p", (void*) &x,(void*) &y);
	printf("\nz=%p   *z=%f",z,*z);

int b[10];
int *c=b;
for(int c=b;c<=b[10];c++);
{
	c=i*2;
}

printf("\nb[0]=%i",b[0]);
printf("\nb=%p",(void*)b);

}