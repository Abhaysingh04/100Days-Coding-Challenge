#include <stdio.h>


int main() 
{
  char questions[][100] ={"1. Name the dengue mosquitos?:\n",
                           "2. Who cause elephantisis?:\n",
                           "3. World heredity day?:\n"};

  char answers[][100] ={"A. Aedes Egypti", "B. sCulex", "C. Elphantisis", "D.Anolpeles\n",
                         "A. abhay", "B. Culex", "C. Elphantisis", "D.Anolpex\n",
                         "A. 7th April", "B. Culex", "C. Elphant", "D.11th \n"};
                        
  char answer[3] = {'A', 'B', 'A'};
  int numberofQuestions = sizeof(questions)/sizeof(questions[0]);

  char guess;
  int score;
  
  printf("Quiz GAme\n") ;                                            

   for(int i = 0; i < numberofQuestions; i++);
   {
      
    printf("%s\n", questions[j]);
    
      
    for (int j = (i * 4); j < (i * 4) + 4; j++)
    {
    printf("%s", answer[j]);
    }
    printf("guess: \n");
    scanf("%c", &guess);
    
  
   }

    
  return 0;
}
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               












