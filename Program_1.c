#include<stdio.h>
#include<stdlib.h>
int swap(int *p, int *q); 
int main()
{
    int a,b;

printf("Enter two numbers:\n");
scanf("%d%d", &a, &b);
printf("\n");
printf("\na = %d b = %d",a,b);

swap(&a, &b);
// In order to make changes in the main funtion
// we pass the reference value of a & b to the swap function

printf("\nNumbers after swapping:\n");
printf("\na = %d b = %d",a,b);
return 0;
}

int swap(int *p , int *q){
int temp;

temp = *p;
*p = *q;
*q = temp;





}
