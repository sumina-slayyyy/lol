//10 even number  using for  loop
/*#include <stdio.h>
int main(){
    int i;
    for(i=2;i<20;i=i+2){
        printf("even number:%d\n",i);
    }
}*/


/*#include <stdio.h>
int main()
{
    int i=2;
    while(i<20){
        printf("even number:%d",i);
        i=i+2;
    }

}*/


/*#include <stdio.h>
int main(){
    int i=2;
    do{
        printf("%d\n",i);
        i=i+2;
    }
    while(i<20);
}*/


//multiplication table of numbers 

/*#include <stdio.h>
int main()
{
  int n,i;
  printf("enter a number:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    printf("%d x %d=%d\n",n,i,n*i);
  }  
}*/

//prime or not
/*#include <stdio.h>
int main()
{
  int n,i, c=0;
   printf("enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(n%i==0){
        c++;
    }
    if(c==2){
        printf("%d is prime number",n);
    }
    else{
         printf("%d is not prime number",n);
    }
  }
}*/


//factorpal of numbers
/*#include <stdio.h>
int main(){
    int i, n,fact=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      fact = fact*i;
    }
      printf("factorial of %d is%d",n,fact);
return 0;
}*/


//reverse a number
#include<stdio.h>
int main()
{
    int
}