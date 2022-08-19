#include<stdio.h>

void swap(int a, int b);
void _swap(int *a,int *b);

int main(){
    int x = 3, y = 5;
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x ,y);

}

void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
