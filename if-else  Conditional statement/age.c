/* Using if else condition  
*/

#include<stdio.h>

int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);

    if(age>18){
        printf("adult\n");
        printf("you can vote\n");
    }
    else{
        printf("you are not adult\n");
        printf("you can't vote\n");
    }
    printf("thankyou");
}