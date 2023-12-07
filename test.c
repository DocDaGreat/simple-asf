#include <stdio.h>

int main()
{
   //vars 
   char Useranswer;
   char CorrectAnswer = '2';
  // ask
  printf("Whats 1 plus 1");
  scanf(" %c", &Useranswer);
  // check if answer correct
  if (Useranswer == CorrectAnswer)
  {
    printf("Correct\n");
  }
  else
  {
    printf("Not Correct\n");
  }
  return(0);
}