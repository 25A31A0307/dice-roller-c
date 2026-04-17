#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice;
    char choice;

    // Seed random number generator
    srand(time(0));

    printf("🎲 Dice Roller Simulator 🎲\n");

    do {
        dice = (rand() % 6) + 1;
        printf("You rolled: %d\n", dice);

        printf("Roll again? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}
