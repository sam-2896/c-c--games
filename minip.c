#include <stdio.h>
#include <string.h>
#include "table.h"
#include "kbc.h"
#include "cal.h"
#include "convert.h"
#include "file.h"
#include "shutd.h"
void sw();
int total;
char nocf[20];
void main(){
	
	char name[100],no[20],cllg[100],add[100],mail[30],noc[20],str[100];
	int x1,i,yu=0,asd=0;
	printf("                welcome to this new world \n");
	do{
	if(x1==3)break;
	printf("      1 for sign in\n      2 for sign up(new users)\n      any other key to exit \n");// x1
	scanf("%d",&x1);
	switch(x1){
		case 1:{
			
			printf("to sign in enter your contact no.(must be 10 digit )- \n");
			scanf("%s",noc);
			
			for (i= 0;i<14;i++)
				{
					if(i<10)
					{
					nocf[i]=noc[i];
						}
					}
					nocf[10]='.';
					nocf[11]='t';
					nocf[12]='x';
					nocf[13]='t';
					
			FILE *ptr;
			ptr=	fopen(nocf,"r");
			
			if(ptr==NULL){
			
			 printf("user not found \n");
			 break;
			 }
			else {	
				fgets(str,100, ptr);
				strcpy(name,str);
				printf("hi %s \n",name);
       		    yu++;
				}
 	  		 fclose(ptr);
				}
			sw();
			break;
			
		case 2:{
			
			printf("hello user enter your informations below\n");
			printf("enter your name  - \n");
			gets(name);
			gets(name);
			printf("enter your contact no.(must be 10 digit) - \n");
			gets(no);
			
			printf("enter your college - \n");
			gets(cllg);
			printf("enter your address - \n");
			gets(add);
			printf("enter your email - \n");
			gets(mail);
			file(name,no,cllg,add,mail);
			sw();
				for (i= 0;i<14;i++)
				{
					if(i<10)
					{
					nocf[i]=no[i];
						}
					}
					nocf[10]='.';
					nocf[11]='t';
					nocf[12]='x';
					nocf[13]='t';
			break;}
		
		default:
			exit(0);
	}
	
}
	

	while(x1!=3);
	
	}
	void sw(){
	char name[50],no[20],cllg[100],add[100],mail[30],str[50],cha;
	int x,cb,b,c,asd,i;
	FILE *ptro;
	do
{
		printf("Enter 1 for print table\nEnter 2 for play game\nEnter 3 for calculator\nEnter 4 for conversion\nEnter 5 for update informations \nEnter 6 for read detail\nEnter 7 to shut down pc\nEnter 0 for exit\n");
	scanf("%d",&x);
	if(x==0) break;
	switch(x){// x
		case 1:
		
			printf("enter no of which table you want to print , and then digits from where to where to print it - ");
			scanf("%d%d%d",&cb,&b,&c);
			table (cb,b,c);
			break;
		
		case 2:
			
			printf("welcom to KBC(kon banega crorepati)\n");
			total=kbc();
			break;
		
		case 3:
		
			printf("welcome to calculator\n");
			cal();
			break; 
			
		case 4:
		
    printf("To convert the 12 Inch to Foot\n");
    printf("enter the the unit in the format : dc12\n");

    printf("Ell: a\n");
    printf("Femi: b\n");
    printf("Foot: c\n");
    printf("Inch: d\n");
    printf("Light year: e\n");
    printf("Metre: f\n");
    printf("Mile: g\n");
    printf("Nano meter: h\n");
    printf("Pace: i\n");
    printf("Point: j\n");
    printf("Yard: k\n");
    printf("Mili meter: l\n");
    printf("Centi meter: m\n");
    printf("Deci meter: n\n");
    printf("Deca meter: o\n");
    printf("Hecto meter: p\n");
    printf("Kilo meter: q\n");
    scanf("%c",&cha);
			convert(cha);
			break;
		case 5:remove(nocf);
				printf("hello user enter your informations below\n");
			printf("enter your name  - \n");
			gets(name);
			gets(name);
			printf("enter your contact no.(must be 10 digit) - \n");
			gets(no);
			for (i= 0;i<14;i++)
				{
					if(i<10)
					{
					nocf[i]=no[i];
						}
					}
					nocf[10]='.';
					nocf[11]='t';
					nocf[12]='x';
					nocf[13]='t';
			printf("enter your college - \n");
			gets(cllg);
			printf("enter your address - \n");
			gets(add);
			printf("enter your email - \n");
			gets(mail);
			file(name,no,cllg,add,mail);
		
			break;
		case 6: 
		
			ptro=	fopen(nocf,"r");
			
			if(ptro==NULL){
			
			 printf("user not found \n");
			 break;
			 }
			else {
			
			
			for (asd=0;asd<5;asd++){
				fgets(str,100, ptro) ;
	       		 printf("%s", str);
				}
 	  		 fclose(ptro);
				}
				break;
		case 7:{
			shutd();
			break;
		}	
		case 0:
		 exit(0);	
		break;
		default :
			printf("invalid option");
		}
	}
while(x!=0);}

