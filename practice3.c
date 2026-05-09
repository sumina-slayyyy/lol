/*//sum of first 10 natural numbers 
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    
    for(i=0;i<=10;i++){
        sum=sum+i;
    }
    printf("sum of first 10 natural number is %d",sum);
}*/


//while loop 
/*#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter a  number:");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of %d natural number is %d",sum,n);

    
}*/


/*//do while loop
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("enter a  number:");
    scanf("%d",&n);
    do{
        sum=sum+i;
        i++;
    }
    while(i<=n);
     printf("sum of %d natural number = %d",n,sum);
}*/


/*//fibonacci series
#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("enter nth term:");
    scanf("%d",&n);
    printf("fibonacci series :%d%d",a,b);
    for(i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
*/


/*//read marks of 5 subjects and print total average 
#include<stdio.h>
int main(){
    int subject[5],average,total=0;
    int i;
    for(i=0;i<5;i++){
        printf("enter marks:");
        scanf("%f",&subject[i]);
        total=total + subject[i];
    }
    average=total/5;
    printf("total marks:%.2f",total);
    printf("average:%.2f",average);
}*/



// program to input age of 500 persons and display the following:Average age, Age between 25 to 30
#include<stdio.h>
int main(){
    int age[500],i,sum=0,c;
    float average;
    for(i=0;i<500;i++){
        printf("enter age:");
        scanf("%d",&age[i]);
    }
     for(i=0;i<500;i++){
        if(age[i]>=25 && age[i]<=30){
            c++;
        }
     }
     average = sum/500;
     printf("age between 25 to 30 :%d",c);
     printf("average people:%.2f",average);
}

 