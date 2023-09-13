#include<stdio.h>
int main(){
    int age;
    printf("enter your age: \n");
    scanf("%d",&age);
    if(age>=70&&age<=100){
    printf("you are very very old");
    }
    else if(age>=50&&age<=69){
    printf("you are old but not much");
    }
    else if(age>=30&&age<=49){
        printf("you are very very strong");
    }
    else if(age>=20&&age<=29){
        printf("you have started growing");
    }
    else if(age>=10&&age<=19){
        printf("you are a teenager");
    }
    else if(age>=0&&age<=9){
        printf("you are a toddler");
    }
    else{
        printf("you have put the wrong age");
    }
    return 0;

}
