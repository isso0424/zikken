#include <stdio.h>
#include <string.h>
void search_with_guraduated(
     int number[],
     char names[100][256], 
     char guraduated[100][256],
     int size)
{
    char input[256];
    printf("\nPlease enter your junior high school\n>>>");
    scanf("%s",input);
    printf("number|name\n");
    for (int i = 0; i < size; i++) {    
        if (guraduated[i] == NULL) return;
        if (strcmp(guraduated[i], input) == 0)
            printf("%d|%s\n", number[i], names[i]); 
    }
}
