#include <stdio.h>
#include <string.h>
int searchnumber(int numbers[],char names[100][256],int size){
    int i;
    char ans;
    printf("Please input search target student name\n>>>");
    scanf("%s",&ans);
    for(i=0;i<size;i++){
        if(strcmp(names[i],&ans)==0){
            break;
        }
    }
    printf("%d\n",numbers[i]);
    
    return numbers[i];
    
}
