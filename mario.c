#include <stdio.h>


int main(void)
{
    int height; 
    
    do 
    {
      printf("Enter a height: "); 
      scanf("%i", &height); 
    }while(height < 1 || height > 8 );
    
    for(int x=1; x<=height; x++)
    {
      //print spaces 
      for (int s = height - x; s > 0; s--){printf(" ");}

      //print first wall 
      for(int y=1; y<=x; y++){printf("#");}
 
      //print second wall  
      printf("  "); 
      for(int a=1; a<=x; a++){printf("#");}

      //print a new line in each iteration 
      printf("\n");
      
    }
}