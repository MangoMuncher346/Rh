#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int grades[] = {78,18,99,87,94,86,88,90};
    printf("%d\n", grades[1]);
    grades[1] = 70;
    printf("%d\n", grades[1]);


    float measurments[10];
    measurments[0] = 5.25;
    measurments[1] = 0.34;
    measurments[2] = 1.99;
    measurments[3] = 3.48;

    printf(" %.2f %.2f %.2f %.2f %.2f \n", measurments[0], measurments[1], measurments[2],measurments[3], 
    measurments[4]);

    char names[][20] = {"Alex", "Bob", " Jeff", "Israel", "Jack", "Luke", "Jaquavus"};
    printf("%s\n", names[6]);

// for loops example 2
     int names_len = sizeof(names)/ sizeof(names[0]);
    for(int x = 0; x < names_len; x++){
        printf("%s Hines\n", names[x]);
    }

    //for loops example 3
    srand(time(NULL));
    
    int number = rand() % 10 +1;
    int count = 0;

    for(count; count < number; count++){
        printf("duck\n");
    }
    printf("GOOSE!\n");




    return 0;
}