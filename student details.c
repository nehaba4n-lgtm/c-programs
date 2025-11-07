#include <stdio.h>
int main (){
char name[20];
int age;
float marks;
printf("Enter name: ");
scanf("%s",name);
printf("Enter age: \n");
scanf("%d",&age);
printf("Enter marks: \n");
scanf("%f",&marks);
printf("\nStudent Details:\n");
printf("Name:%s\nAge:%d\nMarks:%.2f\n", name,age,marks);
return 0;
}



