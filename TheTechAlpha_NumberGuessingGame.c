#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int guess;
    int attempts;
    char choice;

    srand(time(0));

    printf("Number Guessing Game\n");
    printf("I have selected a number between 1 and 50.\n");
    printf("You have 7 chances to guess it.\n");

    do
    {
        number = rand() % 50 + 1;
        attempts = 0;
        guess = 0;

        while (attempts < 7)
        {
            printf("\nEnter your guess: ");
            scanf("%d", &guess);

            attempts++;

            if (guess == number)
            {
                printf("Congratulations! Your guess is correct.\n");
                printf("You guessed the number in %d attempts.\n", attempts);
                break;
            }
            else if (guess > number)
            {
                printf("Too high! Try a smaller number.\n");
            }
            else
            {
                printf("Too low! Try a bigger number.\n");
            }

            printf("Attempts left: %d\n", 7 - attempts);
        }

        if (guess != number)
        {
            printf("\nYou have used all 7 attempts.\n");
            printf("The correct number was %d.\n", number);
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThanks for playing!\n");

    return 0;
}