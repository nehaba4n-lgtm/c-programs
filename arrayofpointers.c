#include<stdio.h> 
#include<string.h>
struct Book {
    int id;
    char title[50];
    char author[50];
}
int main(){
    struct Book b1 = {101,"C Programming","Dennis Richie"};
    struct Book b2 = {102,"Data Structres","Mark Weiss"};
    struct Book b3 = {103,"Operating Systems","Silberschatz"};

struct Book *books[3]= { &b1, &b2, &b3 };


int searchID , i , found = 0;
printf("Enter Book ID to search: ");
scanf("%d", &searchID);

for(i = 0; i < 3; i++) {
    if(books[i]->id == searchID) {
        printf("\nBook Found\n");
        printf("id: %d\n", books[i]->id);
        printf("title: %s\n", books[i]->title);
        printf("author: %s\n", books[i]->author);
        found = 1;
        break;
    }
}
if (!found){
    printf("Book not found.\n");
}
return 0;
}