#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum , average;
    sum = a + b;
    average = sum / 2;
    printf("The sum %d and average value %d",sum , average);


return 0;
}

