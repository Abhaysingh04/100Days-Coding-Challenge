#include<stdio.h>

void namaste();
void good_morining();

int main(){
    printf("enter f or enter s:");
    char ch;
    scanf("%c",&ch);
    if(ch == 's'){
        namaste();
    }
    else{
        good_morning();
    }
}

void namaste(){
    printf("namaste\n");
}

void good_morning(){
    printf("good_morning\n");
}