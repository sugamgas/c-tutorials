#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, num_guesses = 0;
    srand(time(NULL)); // Seed the random number generator with the current time
    number = rand() % 100 + 1; // Generate a random number between 1 and 100
    printf("Guess a number between 1 and 100\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        num_guesses++;
        if (guess < number) {
            printf("Too low, try again.\n");
        } else if (guess > number) {
            printf("Too high, try again.\n");
        }
    } while (guess != number);
    
    printf("Congratulations! You guessed the number in %d guesses.\n", num_guesses);
    return 0;
}
