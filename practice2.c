//greater number among three
/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greater",a);
    }
    else if(b>c && b>a){
         printf("%d is greater",b);
    }
    else{
        printf("%d is greater",c);
    }
}*/


//greater small middle numbers 
/*#include<stdio.h>
int main()
{
    int a,b,c, greater, small, middle;
    printf("enter any three numbers:");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b && a>c){
        greater=a;
        if(b>c){
            middle = b;
            small=c;
        }
        else{
             middle = c;
            small=b; 
        }
    }
    else if(b>a && b>c){
        greater=b;
        if(a>c){
              middle = a;
            small=c;
        }
        else{
              middle = c;
            small=a;
        }
    }
    else{
        greater = c;
        if(b>a){
              middle = b;
            small=a;
        }
        else{
              middle = a;
            small=b;
        }
    }
    printf("greater number is %d",greater);
    printf("small number is %d",small);
    printf("middle number is %d",middle);
}*/

//for voting

/*#include<stdio.h>
int main(){
    int age;
    printf("enter yourr age:");
    scanf("%d",&age);
    if(age >= 18){
        printf("you are eligible for voting");
        
    }
    else{
        printf("you are not eligible");
    }
}*/


//multiplication of the numbers
/*#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d=%d",n,i,n*i);
    }
}*/


/*//prime or not
#include<stdio.h>
int main(){
    int i,n,c=0;
     printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
    if(n%i==0){
        c++;
    }
    if(c==2){
        printf("%d is prime number",n);
    }
    else{
        printf("%dis not a prime number",n);
    }
}}*/


//reverse a number 
/*#include<stdio.h>
int main()
{
    int i,n,rem,reverse=0,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0);
    {
        rem = n%10;
        reverse= reverse*10+rem;
        n=n/10;

    }
    printf("reverse of %d is %d",temp,reverse);
}*/



//plaindrome or not 
#include<stdio.h>
int main()
{
    int n,temp,reverse=0,rem;
    printf("enter any number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(temp==reverse){
        printf("%d is plaindrome",temp);
    }
    else{
                printf("%d is not plaindrome",temp);
    }
}