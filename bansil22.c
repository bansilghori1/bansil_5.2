/*Q.2 Write a Program to find the maximum number from the given 4 numbers using nested if else. 
Also, draw a Flowchart in your book.*/

#include<stdio.h>
 #include<conio.h>

 int main() {
int a,b,c,d;

printf("enter the value of first number  :  ");
scanf("%d",&a);
printf("enter the value of second number :  ");
scanf("%d",&b);
printf("enter the value of third number :  ");
scanf("%d",&c);
printf("enter the value of fourth number :  ");
scanf("%d",&d);



if(a>b){
    if(a>c){
        if(a>d){
            printf("the maximum value is %d ",a);
        }else{
            printf("the maximum value is %d ",d);
        }
    }
    else{
        if(c>d){
            printf("the maximum value is %d ",c);
        }else{
            printf("the maximum value is %d ",d);
        }
    }}
    else{
        if(b>c){
            if(b>d){
                printf("the maximum value is %d ",b);
        
            }else{
                printf("the maximum value is %d ",d);
            }
        }else{
            if(c>d){
                printf("the maximum  value is %d ",c);
            }else{
                printf("the maximum value is %d ",d);
            }
        }
    
}

return 0;
}








 




