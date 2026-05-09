/*//break 
#include<stdio.h>
int main(){
    int n,i;
    for(i=0;i<=10;i++){
        printf("value of i :%d\n",n);
        if(i==5){
            break;
        }
    }
}*/


//
/*#include<stdio.h>
int main(){
    int number[5]={1,2,3,4,5};
    printf("%d",number[0]);
        printf("%d",number[1]);
            printf("%d",number[2]);
                printf("%d",number[3]);
                    printf("%d",number[4]);
}*/


/*//read marks of 5 subjects and print total average 
#include<stdio.h>
int main(){
    float subject[5],total=0,average;
    int i;
    for(i=0;i<5;i++){
        printf("enter marks:");
        scanf("%f",&subject[i]);
        total=total+subject[i];
    }
    average=total/5;
    printf("total marks:%.2f",total);
    printf("average marks:%.2f",average);

}*/



/*// program to input age of 10 persons and display the age btn 166 to 19
//conditional array
 #include<stdio.h>
 int main(){
int i,age[10],c,sum=0;
float average;
for(i=0;i<10;i++){
    printf("enter age:");
    scanf("%d",&age[i]);

}
for(i=0;i<10;i++){
    if(age[i]>=16 && age[i]<=19){
        c++;
    }
}
average=(float)sum/10;

printf("total number of people :%d",c);
printf("average age of people :%.2f",average);
 }*/


 /*//max number among 5 numbers 
 #include<stdio.h>
 int main(){
    int i,num[5],max;
    for(i=0;i<5;i++){
        printf("enter a number:");
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(i=0;i<5;i++){
        if(max<num[i]){
        max =num[i];
        }
    }
    printf("largest number is :%d",max);
    
 }*/


 //string(3x3 matrix)
 #include<stdio.h>
 int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("enter first matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
 printf("enter second matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
for(i=0;i<3;i++){
for(j=0;j<3;j++){
    c[i][j]=0;
    for(k=0;k<3;k++){
        c[i][j]=c[i][j]+a[i][j]*b[i][j];
    }
}
}
printf("the resultant matrix is:");
for(i=0;i<3;i++){
for(j=0;j<3;j++)
printf("%d",c[i][j]);
}

 }

   