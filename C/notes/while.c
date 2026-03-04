#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int main(){
  int i = 1;
    while(i <= 10){
        printf("%d\n", i);
        i++; //increases variable i by 1
    }

    // set a random number
    srand(time(NULL));

    printf("%d\n", rand() % 11); // random number between 0 and 10
    printf("%d\n", (rand() % 10)+1);
    printf("%d\n", (rand() % 5) +5 );

    int goose = (rand () % 20) +1;
    int count = 1;
    while (count < goose){
        printf("duck\n");
        count ++;
    }
printf("GOOSE!");


    int number = (rand() % 30) + 1;

    while (true){
        int guess;
        printf("Guess a number between 1 and 30: ");
        scanf("%d", &guess);

        if (guess == number){
            printf("You won! The number was %d.\n", number);
            break;
        }else if (guess < number){
        printf("Guess higher.");
        }else{
            printf("Guess lower."); 
        }

    }

    // for loops

    for(int i = 20; i > 0; i--){
        printf("%d ", i);
    }
     printf("\n"); // makes ne wline


    return 0;
}