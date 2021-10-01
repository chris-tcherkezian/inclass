#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
Write a program that computes the tax and tip on a restaurant bill for a patron.
The program should accept the tax and tip both as percentages from the command line.
Display the meal cost, tax amount, tip amount, and total bill on the screen.
he meal cost should be randomly chosen between the following four:
Salad: $9.95
Soup: $4.55
Sandwich: $13.25
Pizza: $22.35
*/

//each delcration will be a floating point value
float Salad, Soup, Sandwich, Pizza;
float tax, tip, mealcost, total, taxTotal, tipTotal;


// Double allows main to use high precision floating points
double main(){

//declare number as an int
int num;

//declares all values of foods
Salad = 9.95;
Soup = 4.55;
Sandwich = 13.25;
Pizza = 22.35;

//random number generator timing
srand(time(NULL));

//sets number to random number between 0 and 3
num = rand()%3;

//if else block that sets the meal cost to its proper foodgroup based on random number
if (num == 0){
    mealcost = Salad;
} else if (num == 1){
    mealcost = Soup;
} else if (num == 2){
    mealcost = Sandwich;
} else{
    mealcost = Pizza;
}

//print all mmenu items
printf("Menu\n");
printf("-------------\n");
printf("a) Salad\nb) Soup\nc) Sandwich\nd) Pizza\n");
printf("-------------\n");
//asks user for tax as a percentage
printf("Please enter Tax as a percent: ");
scanf("%f", &tax);
//asks user for tip as a percentage
printf("Please enter tip as a percent: ");
scanf("%f", &tip);

//displays mealcost as a 2 decimal floating point
printf("\nYour meal cost is: $%.2f ", mealcost);

//calculates the total tax for the meal choosen at random
taxTotal = ((tax/100) * mealcost);
printf("\nYou were taxed: $%.2f ",taxTotal);

//calculates the total tip for the meal choosen at random
tipTotal = ((tip/100) * mealcost);
printf("\nYou tipped: $%.2f", tipTotal);

//calculates total price of meal by adding the total tax, total tip, and the mealcost
total = taxTotal + tipTotal + mealcost;
printf("\nYour total cost is: $%.2f ", total);

return 0;
}