#include<stdio.h>

void calculateprice(float value);

int main(){
    float value = 100.0;
    calculateprice(value);
    printf("value is: %f\n", value);
}

void calculateprice(float value){
    value = value + (0.18 * value);
    printf("final prce is : %f", value);
}