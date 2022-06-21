 #include <stdio.h>
 int kbc(){
 
 int i,a[10],n;
 printf("WELCOME TO THE GAME""KAUN BANEGA CROREPATHI ,It contains10 QUESTIONS each carries 10 LAKHS\n");

 for(i=1;i<=10;i++)
 {
  n=0;
  switch(i)
  {
  case 1:
   printf("In what direction muslim pray\n 1.East 2.South 3.Nearby Mosque's direction 4.Mecca's direction \n");
   
   scanf("%d",&n);
   if(n==4)
   {
   	printf("You have entered the correct answer Now you have won Rs.%d00000\n Your Next Question is \n",i);
	   
     
   }
   else
   {printf("hello");
     printf("You have entered the wrong answerBe4tter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 2:
   printf("Who is the Mother of RAMA in Ramayana\n 1.Kousalya 2.Kaikai 3.Sumitra 4.Mantra \n");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 Your Next Question is \n",i);
   }
   else
   {
     printf("You have entered the wrong answerBe4tter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 3:
   printf("What is the Symbol of Nazis(Army of Great Hitler) \n1.Cross 2.Skull and Bones 3.Owl 4.Swastika \n");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 \nYour Next Question is \n",i);
   }
   else
   {
     printf("You have entered the wrong answerBe4tter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 4:
   printf("Who among these is not an Railway Minister\n 1.Mamtha Banerjee 2.Lal Bahadur Shastri 3.Geetha Mukerjee 4.George Fernandis \n");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer Now you have won Rs.%d00000 \nYour Next Question is \n",i);
   }
   else
   {
     printf("You have entered the wrong answerBe4tter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 5:
   printf("Who Correctly Answered to Yaksha's Questions \n1.Drona 2.Abimanyu 3.Yudishtira 4.Arjuna\n");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000Your\n Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTime ,You have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 6:
   printf("Who Heads Reserve Bank of India\n1.FinanceMinister2.Commissioner3.Chief Bank Manager4.Governor\n");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000\nYour Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 7:
   printf("Which of these AnimalsLaughs\n1.Monkey2.Tiger3.Giraffe4.Hyna\n");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000\nYour Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 8:
   printf("Which is the system of Governance inChina\n1.communism2.communalism3.Monarchy4.Democratic\n");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000\nYour Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 9:
   printf("How many Rings does Olympic Symbolhave1.32.23.64.5\n");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000\nYour Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answerBe4tter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  case 10:
   printf("Who patronised Kalidas\n1.Akbar2.Chandra Guptha3.VikramaAditya4.Krishna Devaraya\n");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answerNow you have wonRs.%d00000\n*YOU HAVE BECOME CROREPATHI OF THIS WEEK*\n",i);
   }
   else
   {
    printf("You have entered the wrong answerBetter Luck NextTimeYou have earned Rs.%d00000\n",i-1);return (i-1)*100000;
    i=11;
   }
   break;
  default:
   break;
   }
   }
   
   }
   
