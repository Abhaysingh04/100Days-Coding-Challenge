


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

void guess(int N)
{
    int number, guess, numberofguess = 0;
 
    
    srand(time(NULL));
 
    
    number = rand() % N;
 
    printf("Guess a number between"
           " 1 and %d\n",
           N);
 
    
    do {
 
        if (numberofguess > 9) {
            printf("\nYou Loose!\n");
            break;
        }
 
        
        scanf("%d", &guess);
 
        
        if (guess > number)
 
        {
            printf("Lower number "
                   "!\n");
            numberofguess++;
        }
 
        
        else if (number > guess)
 
        {
            printf("Higher number"
                   "!\n");
            numberofguess++;
        }
 
        
        else
            printf("You guessed the"
                   " number in %d "
                   "attempts!\n",
                   numberofguess);
 
    } while (guess != number);
}
 

int main()
{
    int N = 1000;
 
   
    guess(N);
 
    return 0;
}