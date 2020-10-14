#include <stdio.h>

void search_name(int num[],char name[100][256], int size){
    int a,b,c;
    scanf("%d",&a);
    c=100;
    for(b=0;b<size;b++){
        if(num[b] == a){
            break;
        }
    }
    printf("%s", name[b]);
}
