#include <stdio.h>
#include<stdlib.h>

char user;
int age=0;

int main(){ 

    printf("Insert a username: \n"); scanf("%s", &user);

    printf("Insert your age: \n"); scanf("%d", &age);

    if (age<18){
        printf("You do not have access to this page\n");
    }
    else{
        printf("Welcome!!\n");
    }

    return 0;
}
