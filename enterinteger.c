//write a c program to creat memory for int char and float variable at run time

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int *p = (int *) malloc(sizeof(int)*10);
for(int i=0;i<=9;i++){
printf("Enter the value at %u adress =",p+i);
scanf("%d",p+i);

}
for(int i=0;i<=9;i++){
printf("\nthe value at %u address =%d",p+i,*(p+i));


}






}





