#include <stdio.h>

void search_name(int num[],char name[100][256], int size){
    int a,b;
    printf("Please input search target number\n>>>");
    scanf("%d",&a);
    for(b=0;b<size;b++){
        if(num[b] == a){
            break;
        }
    }
    printf("%s\n", name[b]);
}
