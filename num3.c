#include<stdio.h>

int main(){
    int n;
    printf("enter your number:");
    scanf("%d",&n);

    //using for loop
    // for(int i=0;i<=n;i++){
    //     printf("%d\n",i);
    // }

    //using while loop
    // int i=0;
    // while(i<=n){
    //     printf("%d\n",i);
    //     i++;
    // }

    //using do while loop
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
}