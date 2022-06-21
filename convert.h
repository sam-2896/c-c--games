#include<stdio.h>
#include<math.h>
#include <stdlib.h>
void convert(char i){
   
    char fromUnit,toUnit;
    char *fUnit,*tUnit;
    float fromValue,meterValue,toValue;
    int power =0;
	printf("from unit -");
	scanf("%c",&fromUnit);
	printf("to unit -");
	scanf("%c",&toUnit);	scanf("%c",&toUnit);
	printf("magnitude -");
    scanf("%f",&fromValue); 
    
	
    switch(fromUnit){
         case 'a': meterValue = fromValue * 1.143; fUnit=(char*)"ell"; break;
         case 'b': meterValue = fromValue ; power = -15; fUnit=(char*)"fm"; break;
         case 'c': meterValue = fromValue * 0.3048; fUnit=(char*)"ft"; break;
         case 'd': meterValue = fromValue * 0.0254; fUnit=(char*)"in"; break;
         case 'e': meterValue = fromValue * 9.4607304725808; power =15; fUnit=(char*)"ly"; break;
         case 'f': meterValue = fromValue; fUnit=(char*)"m"; break;
         case 'g': meterValue = fromValue * 1609.344; fUnit=(char*)"mi"; break;
         case 'h': meterValue = fromValue; fUnit=(char*)"nm"; power = -9; break;
         case 'i': meterValue = fromValue * 0.762 ; fUnit=(char*)"pace"; break;
         case 'j': meterValue = fromValue * 0.000351450; fUnit=(char*)"pt"; break;
         case 'k': meterValue = fromValue * 0.9144; fUnit=(char*)"yd"; break;
         case 'l': meterValue = fromValue * 0.001; fUnit=(char*)"mm"; break;
         case 'm': meterValue = fromValue * 0.01; fUnit=(char*)"cm"; break;
         case 'n': meterValue = fromValue * 0.1; fUnit=(char*)"deci meter"; break;
         case 'o': meterValue = fromValue * 10; fUnit=(char*)"deca meter"; break;
         case 'p': meterValue = fromValue * 100; fUnit=(char*)"hm"; break;
         case 'q': meterValue = fromValue * 1000; fUnit=(char*)"km"; break;
         default:
             printf("Invalid input"); exit(0);
    }

    switch(toUnit){
         case 'a': toValue = meterValue/1.143; tUnit=(char*)"ell"; break;
         case 'b': toValue = meterValue; tUnit=(char*)"fm"; break;
         case 'c': toValue = meterValue/0.3048; tUnit=(char*)"ft"; break;
         case 'd': toValue = meterValue/0.0254; tUnit=(char*)"in"; break;
         case 'e': toValue = meterValue/9.4607304725808; tUnit=(char*)"ly"; break;
         case 'f': toValue = meterValue; tUnit=(char*)"m";break;
         case 'g': toValue = meterValue/1609.344; tUnit=(char*)"mi"; break;
         case 'h': toValue = meterValue; tUnit=(char*)"nm"; break;
         case 'i': toValue = meterValue/0.762; tUnit=(char*)"pace"; break;
         case 'j': toValue = meterValue/0.000351450; tUnit=(char*)"pt"; break;
         case 'k': toValue = meterValue/0.9144; tUnit=(char*)"yd"; break;
         case 'l': toValue = meterValue/0.001; tUnit=(char*)"mm"; break;
         case 'm': toValue = meterValue/0.01; tUnit=(char*)"cm"; break;
         case 'n': toValue = meterValue/0.1; tUnit=(char*)"deci meter"; break;
         case 'o': toValue = meterValue/10; tUnit=(char*)"deca meter"; break;
         case 'p': toValue = meterValue/100; tUnit=(char*)"hm"; break;
         case 'q': toValue = meterValue/1000; tUnit=(char*)"km"; break;
         default:
             printf("Invalid input"); exit(0);
    }
   
    if(power==0)
         printf("%.4Lf %s = %.4Lf %s \n",fromValue,fUnit,toValue,tUnit);
    else{
         while(toValue > 10) 
         printf("%.4Lf %s = %.4Lf*10^%d %s \n",fromValue,fUnit,toValue,power,tUnit);
    }


    
}
