/*Q.1 Write a Program to find the minimum number from the given 3 numbers using nested if else.
 Also, draw a Flowchart in your book.*/
 #include<stdio.h>
 #include<conio.h>

 int main(){

int a,b,c;

printf("enter the value of first number  :  ");
scanf("%d",&a);
printf("enter the value of second number :  ");
scanf("%d",&b);
printf("enter the value of third number :  ");
scanf("%d",&c);

if(a<b){
    if(a<c){
        printf("the minimum value is %d\n ",a);
    }else{
        printf("the minimum value is %d\n ",c);
    }
}else{
    if(b<c){
        printf("the minimum value is %d\n ",b );
    }else{
        printf("the minimum value is %d\n ",c);
    }
}
return 0;
getch();

 }