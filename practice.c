//program for pre and post increment 
/*#include<stdio.h>
void main()
{
    int x = 5,a;
    a = ++x; //x = 1+x

printf("%d",a);
getch();
}
//program for increment and decrement 
#include<stdio.h>
void main()
{
    int x = 5,a,b;
    a = --x; //x++ means x = x+1
    b = x--;

printf("%d , %d",a,b);
printf("%d",x);
getch();
}
//program to find area of circle 
#include<stdio.h>
void main()
{
    float r,c;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    c = 2 * 3.14 * r;
    printf("circumference of the circle having radius r %.2f is %.2f",r,c);
    getch();



}*/

//program to swap to two vaiables using third variable
/*#include<stdio.h>
void main()
{
    int a = 3, b = 2, c;
    printf("value of a and b before swapping: %d and %d",a,b);
    c = a;
    a =b;
    b = c;
    printf("value of a and b after swapping: %d and %d",a,b);
getch();
    }*/
    //program to swap to two vaiables using third variable
   /* #include<stdio.h>
void main()
{
    int a , b;
  printf("enter value of a ");
  scanf("%d", &a);
  printf("enter value of b");
  scanf("%d", &b);
    printf("value of a and b before swapping: %d and %d",a,b);
a = a*b;
b = a/b;
a = a/b;
 printf("value of a and b after swapping: %d and %d",a,b);

getch();
    }*/
    //program to convert fahernheit to degree celsius 
    #include<stdio.h>
    void main()
    {
       float f,c;
       printf("enter the temp in fahernheit:");
       scanf("%f",&f);
       c = f-32 * 5/9;
       printf("/ntemperature in celsius:%.2f",c);
getch();

    }