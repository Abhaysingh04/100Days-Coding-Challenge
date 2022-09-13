#include <stdio.h>
void correctAnswer(int num)
{
    switch (num)
    {
    case 1:
        printf("\nwrong answer");
        printf("\ncorrect answer is 3.char data type.\n\n");
        break;
    case 2:
        printf("\nwrong answer");
        printf("\ncorrect answer is 3.char data type.\n\n");
        break;
    case 3:
        printf("\ncorrect answer\n\n");
        break;
    case 4:
        printf("\nwrong answer");
        printf("\ncorrect answer is 3.char data type.\n\n");
        break;    
    }
}
void main()
{
    int choose;
    printf("\n A. Which Store charactor ?\n\n\n\n");
    printf("____________________________________________________________");
    printf("\n|   1. int data type     |\t|  2. float data type    |\n");
    printf("____________________________________________________________");
    printf("\n|   3. char data type    |\t|  4. double data type   |\n");
    printf("____________________________________________________________");   
    again: 
    printf("\n\nChoose correct answer:");
    fflush(stdin);
    scanf("%d",&choose);
    if(choose==1||choose==2||choose==3||choose==4)
    {
        correctAnswer(choose);
    }else
    {
        printf("invalid answer Please try again");
        goto again;
    }
 }



















