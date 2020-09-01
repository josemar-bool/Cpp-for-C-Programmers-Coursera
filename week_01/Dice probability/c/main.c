#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIDES               6
#define NUMBER_OF_DICES     2
#define R_SIDE  ((rand() % SIDES) + 1)

int main(void)
{
    int trials = 0;
    int j;
    int n_dice = NUMBER_OF_DICES;
    int d1 = 0, d2 = 0;
    int outcome[(NUMBER_OF_DICES * SIDES) + 1];

    memset(outcome, 0, sizeof(outcome));

    srand(clock());
    printf("\nEnter number of trials: ");
    scanf("%d", &trials);

    for (j = 0; j < trials; ++j)
    {
        outcome[(d1 = R_SIDE) + (d2 = R_SIDE)]++;
    }

    printf("Probability:\n");

    for (j = 2; j < (n_dice * SIDES) + 1; ++j)
    {
        printf("j = %03d - p = %.3lf\n", j, (double) outcome[j]/trials);
    }
    
    return(0);
}

