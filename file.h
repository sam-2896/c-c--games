#include <stdio.h>

#include <string.h>
void file(char a[50],char pn[20],char c[100],char d[100],char e[30]){
FILE *p;
int i;
char k[14];
for (i= 0;i<14;i++)
{
	if(i<10)
	k[i]=pn[i];
	k[10]='.';
	k[11]='t';
	k[12]='x';
	k[13]='t';
}
p = fopen(k,"w")	;

fputs(a,p);
fputs("\n",p);

fputs(pn,p);
fputs("\n",p);
fputs(c,p);
fputs("\n",p);
fputs(d,p);	
fputs("\n",p);
fputs(e,p);
fputs("\n",p);

fclose(p);
printf("your data is safely stored\n");
	
	
	
}
