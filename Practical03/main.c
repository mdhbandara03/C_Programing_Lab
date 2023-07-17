#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
int main()
{

   int n1,n2,max;
   printf("Enter two numbers");
   scanf("%d%d",&n1,&n2);

   if(n1>n2)
   max=n1;
   else
    max=n2;

   printf("The higest is %d\n\n\n\n",max);//Ques01




   int n3, n4, n5,largest, smalle;

   printf("Enter three numbers: ");
   scanf("%d%d%d", &n3, &n4, &n5);

   largest = n3;
   smalle = n3;

   if (n4 >largest)
      largest = n4;

   if (n5 > largest)
      largest = n5;

   if (n5 < smalle)
      smalle = n5;

   printf("The largest is %d\n", largest);
   printf("The smallest is %d\n\n\n", smalle);//Ques02


   char empname[20];
   float bs,inc,ns;

   printf("Enter employee name");
   scanf("%s",&empname);
   printf("Enter basic salary");
   scanf("%f",&bs);

   if(bs<=5000)
   inc=0.05*bs;
   else if (5000<=bs<10000)
   inc=0.15*bs;


   else
   {
       inc=0.15*bs;
   }

   ns=bs+inc;
   printf("Employee name %s\n",empname);
   printf("New salary%.2f\n\n\n",ns);//Ques03



    double radius, diameter, circumference, area;

      printf("Enter the radius of the circle: ");
      scanf("%lf", &radius);

      diameter = 2 * radius;
      circumference = 2 *PI * radius;
      area = PI * radius * radius;

      printf("Diameter: %.2f\n", diameter);
      printf("Circumference: %.2f\n", circumference);
      printf("Area: %.2f\n\n\n", area);//Ques04

    int num1,num2;
    printf("Enter two numbers ");
    scanf("%d %d",&num1,&num2);

        if(num1!=0 && num1%num2==0)
            printf("%d is a multiple of %d \n",num1,num2);
        else
           printf("%d is not a multiple of %d \n\n\n",num1,num2);//Ques05


      printf("%d\n",'A');
      printf("%d\n",'B');
      printf("%d\n",'C');
      printf("%d\n",'a');
      printf("%d\n",'b');
      printf("%d\n",'c');
      printf("%d\n",'0');
      printf("%d\n",'1');
      printf("%d\n",'2');
      printf("%d\n",'$');
      printf("%d\n",'*');
      printf("%d\n",'+');
      printf("%d\n",'/');//Ques06



 char name[20],city;
 float basic_salary,service_years,main_sales,additional_allowance,bonus,gross_remuneration ;
 printf("Enter the sales persons name: ");
 scanf("%s",&name);
 printf("Enter the basic salary: ");
 scanf("%f",&basic_salary);
 printf("service years: ");
 scanf("%f",&service_years);
 printf("Enter the city: ");
 scanf("%s",&city);
 printf("Enter the monthly sales: ");
 scanf("%f",&main_sales);
    if(main_sales>=50000)
    {
        bonus = 0.15* main_sales;
    }
    else if (main_sales<=25000)
    {
        bonus = 0.1* main_sales;
    }
    else
    {
        bonus = 0.12* main_sales;
    }
switch(city)
    {
        case'c':additional_allowance = 2500;break;
        default:additional_allowance = 0;
    }
    service_years=5;
    if(service_years>5)
    {
    additional_allowance = 0.1*basic_salary;
    }
    gross_remuneration = basic_salary + additional_allowance + bonus;
    printf("gross remuneration : %.2f" ,gross_remuneration);//Ques07

}


