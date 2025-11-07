#include <stdio.h>
int main(){
float principal_amount, rate, time;
printf("Enter principal amount: \n");
scanf("%d", &principal_amount);
printf("Enter rate: \n");
scanf("%d", &rate);
printf("Enter time: \n");
scanf("%d", &time);
int simple_intrest = principal_amount * time * rate/ 100;
printf("simple Intrest= %d", simple_intrest);
return 0;
}
