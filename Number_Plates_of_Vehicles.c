
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool Validate_the_number(char registartion[]){
    if(strlen(registartion) != 10){
        return false;
    }

    for(int i = 0; i < 2; i++){
        if(!isalpha(registartion[i])){
            return false;
        }
    }

    for(int i = 2; i < 4; i++){
        if(!isdigit(registartion[i])){
            return false;
        }
    }

    for(int i = 4; i < 6; i++){
        if(!isalpha(registartion[i])){
            return false;
        }
    }

    for(int i = 6; i <10; i++){
        if(!isdigit(registartion[i])){
            return false;
        }
    }
    return true;
}


int main(){
    char registration[11];
    printf("Enter your registration number: ");
    scanf("%s", registration);

    if (Validate_the_number(registration)){
        printf("ACCEPT");
    }else{
        printf("REJECT");
    }
}

