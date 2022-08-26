#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Project- Number guessing game

int main(){
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100+1 ; // Generates a random number between 1 and 100
    
    printf("Guess the number between 1 to 100\n");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Wrong!\n");
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Wrong!\n");
            printf("Higher number please\n");
        }
        else
        {
            printf("Correct!\n");
            printf("The number is %d.\n", number);
            printf("You guessed in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}
