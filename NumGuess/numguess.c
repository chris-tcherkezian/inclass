#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mainMenu(){

    int num, random, numPicked, i, n;
    
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
    case 3: {
        printf("Game will exit. Thanks for playing!");
        exit(0);
        break;
    }

return;
    }
}
 
    int main(){
        mainMenu();
    }



