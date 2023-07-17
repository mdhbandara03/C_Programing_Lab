#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Dineth Hasaranga Bandara \n");
    printf("Wayamba Royal Collage \n\n\n");//(first Quiz)

    printf("*\n**\n***\n****\n*****\n\n\n");//(second Quiz)



    int no1;
    float no2;
    char name[15];
    double no3;

    printf("Enter an integer number ");
    scanf("%d",&no1);
    printf("integer is %d\n\n",no1);

    printf("Enter decimal number ");
    scanf("%f",&no2);
    printf("decimal number is %.2f\n\n",no2);

    printf("Enter name ");
    scanf("%s",&name);
    printf("Name is %s\n\n",name);

    printf("Enter decimal value ");
    scanf("%lf",&no3);
    printf("decimal number is %.2f\n\n\n\n\n",no3);//(third Quiz)



    int no4,no5,total;

    printf("First number");
    scanf("%d",&no4);
    printf("Second number");
    scanf("%d",&no5);

    total=no4+no5;
    printf("total is %d\n\n\n",total);//(fourth Quiz)



    float no6,no7,average;

    printf("Enter first decimal number ");
    scanf("%f",&no6);
    printf("Enetr second decimal number ");
    scanf("%f",&no7);

    average=(no6+no7)/2;
    printf("average is %.2f\n\n\n",average); //(fifth Quiz)



    char stname[20];
    int byear,age;
    printf("Enter student name ");
    scanf("%s",&stname);
    printf("Enter birth year ");
    scanf("%d",&byear);

    age=2023-byear;

    printf("Name :%s\n",stname);
    printf("Age  :%d\n\n\n\n",age); //(sixth Quiz)




    int x, y, z;
    printf("Enter two integers");
    scanf("%d%d", &x, &y);
    printf("Before Swapping\n First variable = %d \nSecond variable = %d \n", x, y);
    z = x;
    x = y;
    y = z;
    printf("After Swapping\nFirst variable = %d \nSecond variable = %d\n\n\n\n", x, y); //(seventh Quiz)




    printf("The color: %s\n", "blue");
    printf("First number: %d\n", 12345);
    printf("Second number: %04d\n",25);
    printf("Third number: %i\n", 1234);
    printf("Float number: %3.2f\n", 3.14159);
    printf("Hexadecimal: %x\n", 255);
    printf("Octal: %\n", 255);
    printf("Unsigned value: %u\n", 150);
    printf("Just print the percentage sign %% \n", 10);//(8th Quiz)


}
