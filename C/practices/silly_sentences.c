// comment
#include <stdio.h>
#include <string.h>

int main(){
char user4[50];
char user3[50];
char user2[50];
char user1[50];
char user[50];



    printf("give me an adjective\n ");
    scanf("%s", user);

    printf("Give me another adjective\n ");
    scanf("%s", user1);

    printf("Whats a noun\n ");
     scanf("%s", user2);

    printf("Whats a third adjective\n ");
    scanf("%s", user3);

    printf("Whats a second noun\n ");
    scanf("%s", user4);

    printf("The %s %s %s %s down the winding %s\n", user, user1 , user2, user3, user4 );








return 0;
}