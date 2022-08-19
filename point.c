#include<stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int age1 = *ptr ;

    printf("%d",age1);

}