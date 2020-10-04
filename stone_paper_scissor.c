#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int third(int resuult, int power);

int main()
{
    int maxo;

    srand(time(0));
    maxo = rand() % 3 + 1;
//printf("%d \n", maxo);
    int stone=1, paper=3, scissor=2;
    
    
    printf("Enter 1 for stone \n Enter 2 for scissor \n Enter 3 for paper \n");
 
      printf("Enter the value \n");
    scanf("%d", &stone, &paper, &scissor);
 
   

         third(maxo,stone);
   
   
  
    
    
   
  
  
    
   
    
    return 0;
}

int third(int resuult, int power)
{
   
    
     if (resuult==1 && power==1)
     {
         
        printf("Stone is equal to stone. \n");
     }
    else if (resuult==3 && power==3)
    {
        
        printf("paper is equal to paper. \n");
    }
    else if (resuult==2 && power==2)
    {
        
        printf("scissor is equal to scissor. \n");
    }
    else if (resuult==1 && power==2)
    {
        printf("Your scissor is crushed by the stone. \n");
    }
    else if (resuult==2 && power==1)
    {
        printf("Your stone crushed the scissor. \n");
    }
      else if (resuult==1 && power==3)
    {
        printf("Your paper crack the stone. \n");
    }
      else if (resuult==3 && power==1)
    {
        printf("Your stone is cracked by the paper. \n");
    }
    else if (resuult==2 && power==3)
    {
        printf("Your paper is cut by the scissor. \n");
    }
    else if (resuult==3 &&  power==2)
    {
        printf("Your scissor cut the paper. \n");
    }
}