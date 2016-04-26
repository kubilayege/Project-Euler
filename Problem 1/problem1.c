#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int j,sum=0;
	for( j=1 ; j<1000 ; j++)
	{
		if( j%3==0 || j%5==0 )
		{
			sum = sum + j;
		}
	}
	printf("%d\n ",sum);
	return 0;
}
