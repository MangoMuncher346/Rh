// VL Strings Notes
#include <stdio.h>
#include <string.h>

int main(){
    char subject[] = "computer science priciples";
    char school[] = "UCAS";
    char book[50];
    
    printf("whta is your fsvoritr book: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);
    printf("Thisis %s at %s, It is awesome!\n", subject, school);
printf("%s is a cool book!\n", book);

//concatenation
char first[] = "rohann";
char last[] = "Hines";
char full_name[20];

first[0] = 'b';
first[1] = 'r';
first[2] = 'a';
first[3] = 'i';
first[4] = 'n';

strcat(full_name, first);
strcat(full_name, " ");
strcat(full_name, last);

printf("%s\n", full_name);

//length of string
printf("%lu\n", strlen(full_name));




    return 0;
}