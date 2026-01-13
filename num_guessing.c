#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   
    int random_num;
    int usser_num;
    int step_num=1;
    //creating a two digit random number and storing in random_num
    srand(time(NULL));
    random_num=rand()%90+10;
    printf("guess a two digit number and enter:\n");
    //creating a for loop until usser_num becomes equale to random_num
   for(;1;){
    scanf("%d", &usser_num);
    if(usser_num==random_num){
        printf("wow!\nyou guessed number in %d step.\n",step_num);
        printf("random number is %d.\n",random_num);
        break;
    }
    if(usser_num<random_num){
        printf("your number is less\nguess and enter again:\n");
    }
    if(usser_num>random_num){
        printf("your number is big\nguess and enter again:\n");
    }
    step_num++;
   }
    return 0;
}