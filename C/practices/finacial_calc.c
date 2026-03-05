// This is a comment
#include <stdio.h>


int main(){
  float income, rent, utilities, groceries, transportation, savings, remaining;

  printf("What's your monthy income: $");
 
  scanf("%f", &income);
 
  printf("rent: $");

  scanf("%f", rent);
 
  printf("utilities: $");
 
  scanf("%f", &utilities);
 
  printf("Your groceries: $");
 
  scanf("%f", &groceries);
 
  printf("transportatio: $");
 
  scanf("%f", &transportation);

  savings = income *0.10;
  
  remaining = income-(rent+utilities+groceries+transportation+savings);

  printf("\n---monthly summary---\n");
   
    printf("savings(10%%):$ %.2f\n", savings);
  
    printf("remaining to apend: $%.2f\n", remaining);
   
    printf("\n---percent of income---\n");
   
    printf("rent:%.1%\n", (rent/income)*100);
   
    printf("utillites: %.1%\n", (utilities/income)*100);
   
    printf("groceries: %.1%\n", (groceries/income)*100);
    
    printf("transportation: %.1%\n", (transportation/income)*100);
    
    printf("savings: %.1%\n", (savings/income));







    return 0;
}