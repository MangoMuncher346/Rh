#include <stdio.h>
int sqr(int num){
    return num * num;
}

// example 2 qiht no pararmeters and no return
int count = 0;
void add(){
    count++;

}
// example 3
void hello(char* name){
    printf("Hello %s! Welcome to my porgram!\n", name);
}



int main(){
    int number = sqr(12);
    printf("%d\n", number);
    printf("%d\n",sqr(8));
    

    //example 2 continued
    printf("%d\n", count);
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    add();
   




    printf("%d\n", count);


//example 3 continue
    hello("Alexis");
    hello("Alexander");
    hello("AlAKAI  ");
    hello("bob");
    hello("trevor");
    hello("brian");
    hello("robb");
    hello("tyson");
    hello("johann");
    hello("israel");
    hello("isaac");
    hello("john");
    hello("brianna");
    hello("kenny");
    hello("cartmen");
    hello("stan");
    hello("danny");
    hello("kim");
    hello("johnny");
    hello("trey");
    






    return 0;
}