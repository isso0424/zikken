#include <stdio.h>
#include <string.h>
void search_with_guraduated(
     int number[],
     char names[100][256], 
     char guraduated[100][256],
     int size)
{   char input;
    printf("Please enter your junior high school:");
    scanf("%s",&input);
     for ( int i = 0; i < size; i++)
     {    
          if (strcmp( guraduated[i], &input) == 0)
          printf("%d,%s", number[i], names[i]); 
     }
}
