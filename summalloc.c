//write a c program to calculate sum and averege in dyanamic memory allocation
#include<stdio.h>
#include<stdlib.h>

void main()
{
int sum =0;
int *p = (int *) malloc(sizeof(int)*5);
for(int i=0;i<=4;i++){
printf("Enter the value at %u adress =",p+i);
scanf("%d",p+i);
sum = *(p+i)+sum;
}
printf("sum = %d",sum);
float avg =sum/5.0;
printf("averege =%f",avg);






}

