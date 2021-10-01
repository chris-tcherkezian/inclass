#include <stdio.h>
#include <time.h>
#include <stdlib.h>


float Salad, Soup, Sandwich, Pizza;
float tax, tip, mealcost, total, taxTotal, tipTotal;



double main(){

int num;
Salad = 9.95;
Soup = 4.55;
Sandwich = 13.25;
Pizza = 22.35;

srand(time(NULL));

num = rand()%3;

if (num == 0){
    mealcost = Salad;
} else if (num == 1){
    mealcost = Soup;
} else if (num == 2){
    mealcost = Sandwich;
} else{
    mealcost = Pizza;
}

printf("Menu\n");
printf("-------------\n");
printf("a) Salad\nb) Soup\nc) Sandwich\nd) Pizza\n");
printf("-------------\n");
printf("Please enter Tax as a percent: ");
scanf("%f", &tax);
printf("Please enter tip as a percent: ");
scanf("%f", &tip);

printf("\nYour meal cost is: $%.2f ", mealcost);

taxTotal = ((tax/100) * mealcost);
printf("\nYou were taxed: $%.2f ",taxTotal);

tipTotal = ((tip/100) * mealcost);
printf("\nYou tipped: $%.2f", tipTotal);

total = taxTotal + tipTotal + mealcost;
printf("\nYour total cost is: $%.2f ", total);

return 0;
}