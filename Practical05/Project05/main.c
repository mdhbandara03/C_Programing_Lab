#include <stdio.h>
#include <stdlib.h>

int main()
{
   //while loop
 int x=0;
 while(x<=100)
 {
 printf(" %d",x);
 x++;
 }
 //do while loop
 int x=0;
 do
 {
 printf("%d",x);
 x++;
 }while(x<=100);
 //for loop
 int x;
 for(x=0;x<=100;x++)
 {
 printf("%d",x);
 }//Ques01


 {
 int no,counter=1,sum=0;
 float avg;
 while(counter<=10)
 {
 printf("Enter %d mark ",counter);
 scanf("%d",&no);
 sum =sum+no;
 counter++;
 avg=(float)sum /10;
 }
 printf("Total is %d \n Average is %.2f",sum,avg);
 if(avg<50)
 printf("\n Fail");
 else
 printf("\n Pass");//Ques02



 int n,total=1;
 printf("Enter numer ");
 scanf("%d",&n);
 if(n<0)
 {
 printf("Invalid input ");
 }
 else
 {
 for(int i=1; i<=n; i++)
 {
 total=i*total;
 }
 }
 {
 printf("factorial of %d is %d",n,total);
 }//Ques03


 #include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,sum=0;
 printf("Enter a number ");
 scanf("%d",&n);
 while(n!=0)
 {
 sum+=n%10;
 n/=10;
 }
 printf("Sum of digits: %d\n",sum);//Ques04


 int n,rno=0;
 printf("Enter a number ");
 scanf("%d",&n);
 do {
 int digit=n%10;
 rno=rno*10+digit;
 n/=10;
 } while (n!= 0);
 printf("Reversed number: %d\n",rno);//Ques05


 int count, power, base, result=1;
 printf ("Enter the base value ");
 scanf ("%d",&base);
 printf ("Enter the power value ");
 scanf ("%d",&power);
 for (count=1; count<=power;count++)
 {
 result=result*base;
 }
 printf("Value is %d",result);//Ques06



 int num1=0,num2=1,n,count;
 printf("Fibonacci Sequence ");
 for (count=0;count<10;count++) {
 if (count<=1) {
 n=count;
 } else
 {
 n=num1+num2;
 num1=num2;
 num2=n;
 }
 printf("%d",n);
 }//Ques07


 int no,mod,total=0,x;
 printf("Enter the number ");
 scanf("%d",&no);
 x=no;
 while(no)
 {
 mod=no%10;
 total=total+(mod*mod*mod);
 no=no/10;
 }
 printf("%d",no);
 if(x==total)
 printf("%d is a armstrong number ",x);
 else
 printf("%d is not a armstrong number ",x);
//Ques08



 char letter;
 printf("ASCII values for letters A to Z \n");
 for (letter='A';letter<='Z';letter++)
 {
 printf("%c %d\n",letter,letter);
 }//Ques09


 int rows;
 printf("Enter the number of row ");
 scanf("%d",&rows);
 for(int x=1;x<=rows;x++)
 {
 for(int y=1;y<=x;y++)
 {
 printf("*");
 }
 printf("\n");
 }//Ques10


 int no,count=2,prime=1;
 printf("Enter a number ");
 scanf("%d",&no);
 while(count<no)
 {
 if(no%count==0)
 {
 prime=0;
 break;
 }
 count++;
 }
 if(prime)
 printf("%d is a prime number",no);
 else
 printf("%d is not a prime number",no);
}//Ques11










}
