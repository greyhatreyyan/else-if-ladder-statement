#include<stdio.h>
int main(){
    int score;
    printf("enter your score: ");
    scanf("%d",&score);
    if(score>=90&&score<=100){
        printf("your grade is A\n");
    }
    else if(score>=80&&score<=89){
        printf("your grade is B\n");
    }
    else if(score>=70&&score<=79){
        printf("your grade is C\n");

    }
    else if(score>=60&&score<=69){
        printf("your grade is D \n");
    }
    else if(score<=60){
        printf("your grade is F \n");
    }
    else{
        printf("you have put wrong scores");

    }
    return 0;
}
