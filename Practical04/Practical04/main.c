#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Enter a number : ");
    scanf("%d",&n1);
        if (n1%2==0)
            printf ("%d is an even number", n1);
        else
    {
        printf ("%d is an odd number", n1);
    }
        printf("\n\n\n");//Ques01

 // above program using a switch statement instead of an If-Else statement
 int no;
 printf ("Enter a number :");
 scanf ("%d",&no);
 switch (no%2)
 {
 case 0: printf ("%d is an even number", no);
    int no;
    printf ("Enter a number :");
    scanf ("%d",&no);
    switch (no%2)
    {
        case 0: printf ("%d is an even number", no); break;
        case 1: printf ("%d is an odd number", no); break;
        default: printf("%d is an invalid input",no);
    }
  } printf("\n\n\n");//Ques01



 int n2, n3, opt, add, sub, mul;
 float div;
 printf ("Enter two numbers : ");
 scanf ("%d%d",&n2,&n3) ;
 printf (" 1-addition\n 2-subtraction\n 3-multiplication\n 4-division\n ");
 printf ("select the operator :");
 scanf("%d",&opt);
 switch (opt)
    {
        case 1:printf ("Addition is %d",add,add=n2+n3);break;
        case 2:printf ("Subtraction IS %d",sub,sub=n2-n3) ;break;
        case 3:printf ("Multiplication is %d",mul,mul=n2*n3) ;break;
        case 4:printf ("Division is %.2f",div=n2/n3) ; break;
        default:printf ("Invalid operator.");
    }
    printf("\n\n\n");//Ques03


 char l;
 printf("Enter a character ");
 scanf("%c",&l);
 switch(l)
 {
    case 'A':printf("%c is a vowel ",l);break;
    case 'a':printf("%c is a vowel ",l);break;
    case 'E':printf("%c is a vowel ",l);break;
    case 'e':printf("%c is a vowel ",l);break;
    case 'I':printf("%c is a vowel ",l);break;
    case 'i':printf("%c is a vowel ",l);break;
    case 'O':printf("%c is a vowel ",l);break;
    case 'o':printf("%c is a vowel ",l);break;
    case 'U':printf("%c is a vowel ",l);break;
    case 'u':printf("%c is a vowel ",l);break;
    default:printf("%c is not a vowel ",l);break;
 }
     printf("\n\n\n");//Ques04

    int m_no;
    printf("Enter a month number ");
    scanf("%d",&m_no);
    switch(m_no)
    {
      case 5:printf("January has 31 days");break;
      case 6:printf("February has 28 days");break;
      case 7:printf("March has 31 days");break;
      case 8:printf("April has 30 days");break;
      case 9:printf("May has 31 days");break;
      case 10:printf("June has 30 days");break;
      case 11:printf("July has 31 days");break;
      case 12:printf("August has 31 days");break;
      case 13:printf("September has 30 days");break;
      case 14:printf("October has 31 days");break;
      case 15:printf("November has 30 days");break;
      case 116:printf("December has 31 days");break;
      default:printf("Invalid month number");break;//Ques05
     }
 }


