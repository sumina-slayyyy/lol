//to check the entered number is even
/*#include<stdio.h>
int main()
{
int n;
printf("enter a number:");
scanf("%d",&n);
if(n%2 == 0){
    printf("%d is even number",n);

}
else{
    printf("%d is odd number",n);
}
return 0;

}*/


//eligeble for voting
/*#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age >= 18){
        printf("your are eligible for voting");

    }
    else{
        printf("your are not eligible for voting");
    }
    return 0;

    
}*/


//to find greatest number among three numbers 
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greatest among three numbers",a);

    }
    else if(b>a && b>c){//b>c 
         printf("%d is greatest among three numbers",b);

    }
    else{
         printf("%d is greatest among three number",c);
    }
}*/


//smallest middle greatest number
/*#include<stdio.h>
int main(){
    int a,b,c,greater,smaller,middle;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
   if(a>b && a>c){
    greater = a;
    if(b>c){
        middle = b;
        smaller =c;
    }
    else{
         middle = c;
        smaller =b;
    }
   } 
   else if(b>c && b>a){
    greater = b;
    if(a>c){
       middle = a;
        smaller =c;  
    }
    else{
         middle = c;
        smaller =a;
    }
   }
   else{
    greater=c;
    if(a>b){
         middle = a;
        smaller =b;
    }else{
         middle = b;
        smaller =a;
    }
   }
   printf("\ngreater number is %d",greater);
 printf("\nsmaller number is %d",smaller);
  printf("\nmiddle number is %d",middle);
}*/

//
