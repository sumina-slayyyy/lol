/*#include<stdio.h>
int main()
{
    char c = 'a';//""vaye chai string vanera bujhxa tesaile ''single  
    printf("%c",c);
}*/
/*include<stdio.h>
int main()
{
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    printf("character %c = %lu ascii value",c,c);

}*/
/*#include<stdio.h>
int main()
{
 int a = 123;
 char b ='a';
 float c = 2.3;
 printf("%lu\n",sizeof (a));
  printf("%lu\n",sizeof (b));
     printf("%lu\n",sizeof (c));
    

}*/
//to find third angle of triangle
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two angles:");
    scanf("%d%d", &a,&b);
c = 180-(a+b);
printf("third side of the triangle is %d",c);
return 0;

}*/
//convert days into weeks into years 
#include<stdio.h>
int main()
{
    int y,d,w;
    printf("enter days:");
    scanf("%d", &d);
    y = (d/365);
    w=(d%365)/7;
    d= d-((y*365)+(w*7));

printf("years:%d",y);
printf("weeks:%d",w);
printf("days:%d",d);
return 0;

}