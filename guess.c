#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
 int random,guess;
  int no_of_guess=0;
  srand(time(NULL));

printf("welcome to the world of guessing game");
random= rand()% 100 +1;

do{
    printf("please enter your guess between(1 to 100)\n");
    scanf("%d", &guess);
   no_of_guess ++;
    if (guess < random){
        printf("guess a larger number \n");

    }else if("guess> random"){
        printf("guess a smaller number \n");
    } else{
        printf("congrats!!!you successfully guess the correct number in %d attempts\n", no_of_guess);
    }
    }while(guess != random);
 printf("bye thanks for playing\n");
 return 0;
}
 
 