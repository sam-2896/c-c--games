#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 
shutd() 
{ 
               char st; 
          printf(" Are you sure to shutdown your computer. Please mention(y/n)"); 
          scanf("%c",&st); 
  scanf("%c",&st); 
          if(st=='y' || st=='Y') 
              { 
           system("c:\\windows\\system32\\shutdown /s"); 
		 
           system("pause"); 
          } }
