//write a program to creat memory for 10 integer using malloc and enter 5 value using keyboard by skip one block of memory and display then on same order{shifting pointer}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *p = (int *)malloc(sizeof(int)*10);
for(int i=0;i<=9;i=i+2){
printf("enter the value at %u adress=",p);
scanf("%d",p);
p=p+2;
} 
p=p-10;
for(int i=0;i<=9;i++){
printf("\nthe value of %u adress =%d",p,*p);
p++;
}
}