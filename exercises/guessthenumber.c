#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int guess = 0;
  int i = 0;
  int number = 0;
  time_t t;

  srand((unsigned) time(&t));
  number = rand() % 21;

  printf("this is a guessing game.\ni have chosen a number between 0 and 20 which you must guess.");

  for (i = 5; i > 0; --i){
    printf("\n\nyou have %d tr%s left.\nenter a guess: ", i, i == 1 ? "y" : "ies");
    scanf("%d", &guess);
    
    if (guess == number){
      printf("\ncongratulations. you guessed it!");
      return 0;
    }
    else if (guess < 0 || guess > 20){
      printf("\nthat's not a valid number! try again.\n");
    }
    else if (guess > number){
      printf("\nsorry, %d is wrong. my number is less than that.", guess);
    }
    else {
      printf("\nsorry, %d is wrong. my number is greater than that.", guess);
    }
  }

  printf("\nyou had five tries and failed. the number was %d\n", number);

  return 0;
}
