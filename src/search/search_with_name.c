#include <stdio.h>
#include <string.h>
void searchnumber(int numbers[],char names[100][256],int size){
    int i;
    char ans[256];
    int result = 0;
    printf("Please input search target student name\n>>>");
    scanf("%s",ans);
    for(i=0;i<size;i++){
        if(!strcmp(names[i],ans)){
            printf("%d\n", numbers[i]);
            break;
        }
    }
}
