//write a c program to creat memory for int char and float variable at run time and print the value in decending order by {shifting mehtod}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *p = (int *)malloc(sizeof(int)*10);
for(int i=1;i<=10;i++){
printf("enter the value at %u adress=",p);
scanf("%d",p);
p++;
} 
p--;
for(int i=10;i>=0;i--){
printf("\nthe value of %u adress =%d",p,*p);
p--;
}
}