#include <stdio.h>
void table(int cb,int b,int c){
	int j;
	
	for(j=b;j<=c;j++)
	{
		printf("%d * %d = %d\n",cb,j,cb*j);
	}
}
