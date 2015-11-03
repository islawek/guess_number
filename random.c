
/* Random number guessing game */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getrandom();

int main(int argc, char *argv[]) {
    int random_number;
    int guess;
    int i;
    char history[] = {0, 0, 0};
    random_number = getrandom();
    printf("Guess a number from 0 to 10. You have 3 shots:  \n");
    scanf("%d", &guess);
    history[0] = guess;
    for (i = 1; i <= 2; i++) {
        if (guess != random_number) {
            printf("Sorry, it's not this number. Try again: \n");
            scanf("%d", &guess);
            history[i] = guess;
        }
    }
    if (guess == random_number)
        printf("Correct!\n");

    else
        printf("Sorry, the game is over.\n");
    printf("Your guesses were: %d, %d, %d, and the number was: %d.\n.", history[0], history[1], history[2], random_number);

    int a;
    for (a = 0; a < argc; a++) {
        printf("%s\n", argv[a]);
    }
    printf("You have wrote %d  words.\n", argc - 1);


}

/*getrandom : return pseudo-random integer x */
int getrandom() {
    int x;
    srand(time(NULL));
    x = random() % 11;
    return x;
}
