#include<stdio.h>

int main()
{
   char questions[][100] = {"1. Name the dengue mosquitos?:\n",
                           "2. Who cause elephantisis?:\n",
                           "3. World heredity day?:\n"};
                            
   char options[][100] = {"A. Aedes Egypti", "B. sCulex", "C. Elphantisis", "D.Anolpeles\n",
                         "A. abhay", "B. Culex", "C. Elphantisis", "D.Anolpex\n",
                         "A. 7th April", "B. Culex", "C. Elphant", "D.11th \n"};
                          
   char answers[] = {'A', 'B', 'A'};
   int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

   char guess;
   int score;

   printf("QUIZ GAME\n");    

   for(int i = 0; i < numberOfQuestions; i++)
   {
      printf("_____________________\n");
      printf("%s\n", questions[i]);
      printf("_____________________\n");

      for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n", options[j]);
      }

      printf("guess: ");
      scanf("%c", &guess);
      scanf("%c"); 

      
      if(guess == answers[i])
      {
        printf("********Wrong*******\n");
        score++;
      }
      else
      {
        printf("^^^^^Correct^^^^^\n");
      }


      
   }
   printf("Final Score: %d/3\n", score, numberOfQuestions );
   
 
   return 0;
}