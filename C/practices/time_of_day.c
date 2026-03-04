// RH time of day

#include <stdio.h>
#include <string.h>

int main() {
   int time;  
    printf("What time of day is it in military time?:  ");
    scanf("%d", &time);

   if ( time > 0000 && time <= 1100){
    printf("Good Morning!" , time);

}else if ( time > 1200 && time <= 1600){
    printf(" Good afternoon, time to go play" , time);
    }else{
        printf("It's getting late. Good Night." , time);
   }








    return 0;
}