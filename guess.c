#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rand_n, user_n;
    const int guess_lmt = 5;
    rand_n = rand() % 100 + 1;

    printf("Guess a number between 1 and 100. You have 5 guesses.\n");

    for (int i = 0; i < guess_lmt; i++)
    {
        printf("Enter your number: ");
        scanf("%d", &user_n);

        if (user_n == rand_n)
        {
            printf("Yay! You guessed right!\n");
            return 0;
        }
        else if (user_n > rand_n)
        {
            printf("Your number is greater than mine.\n\n");
        }
        else
        {
            printf("Your number is smaller than mine.\n\n");
        }
    }

    printf("----------------------\n");
    printf("Out of guesses.\n%d was the number you were looking for.\n", rand_n);
    return 0;
}
