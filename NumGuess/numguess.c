#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Create an interactive program that allows a user to guess a number between 1-10.
//If option 1 is selected the program should prompt the user to enter a number. 
// If option 2 is chosen, then tell them the max value they can set the number. Make sure they do not enter a negative number or go above the max value.
// If option 3 is chosen thank the user for playing and end the game.
void mainMenu(){

    //declare the int variables
    int num, random, numPicked, i, n;
    
    //initialize the max value at start
    int max = 10;

   
    printf("\nPress 1 to play a game");
    printf("\nPress 2 to change the max number");
    printf("\nPress 3 to quit\n\n");
    scanf("%d", &numPicked);
    i=0;
    //Switch statement allows user to enter selected value of 1, 2, or 3
    switch(numPicked){
    case 1: {
     
         mainMenu();  
    }
    //If 2 is selected, case 2 is entered and allows you to change the max value
    case 2: {
        printf("Enter a max value: ");
        scanf("%d", &max);
        if(max < 1){
            printf("Invalid number");
        } else {
        printf("Max Value changed to: %d\n", max);
        mainMenu();
        }
        break;
    }
    //If 3 is selected, case 3 is entered and exits the game
    case 3: {
        printf("Game will exit. Thanks for playing!");
        exit(0);
        break;
    }

return;
    }
}
    //main calls the main game recursively until user exits game
    int main(){
        mainMenu();
    }



