#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("HI,HOW OLD AYE YOU? ");
    scanf("%d",&age);


    printf("\n\nWLCOME %d\n",&age);
    printf("LET'S BE FRIENDS! \n");//First Quiz
    printf("\n\n\n");


    printf("%5d%5d%5d\n",2,4,8);
    printf("%5d%5d%5d\n",3,9,27);
    printf("%5d%5d%5d\n",4,16,64);//Second Quiz
    printf("\n\n\n");


    float distance,time,speed;
    printf("Enter the distance traveled:");
    scanf("%f",&distance);
    printf("Enter the time:");
    scanf("%f",&time);
    speed=distance/time;
    printf("Average speed:%.2fms-1\n",speed);//Third Quiz
    printf("\n\n\n");



    float fahren,celsi;
    printf("Enter the fahrenheit valuve :");
    scanf("%f",&fahren);

    celsi=(fahren-32)*5/9;
    printf("The Celsius speed is :%.2f\n",celsi);//Forth Quiz


    return 0;




}
