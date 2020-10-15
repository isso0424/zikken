#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "macros.c"

void search_with_name(
    int numbers[],
    char names[100][256],
    char guraduated[100][256],
    int size,
    char target[]
) {
  char name[256];
  printf("Please input search target student name\nInput:");
  scanf("%s", name);

  int i;
  printf("Search Result\n");
  SEARCH_INFOMATION_FOR_ALL
  for (i = 0;i < size;i++) {
    SEARCH(!strcmp(name, names[i]))
  }
}

void search_with_number(
    int numbers[],
    char names[100][256],
    char guraduated[100][256],
    int size,
    char target[]
) {
  char raw_number[256];
  int number;
  printf("Please input search target student name\nInput:");
  scanf("%s", raw_number);
  number = atoi(raw_number);

  int i;
  printf("Search Result\n");
  SEARCH_INFOMATION_FOR_ALL
  for (i = 0;i < size;i++) {
    SEARCH(number == numbers[i])
  }
}

void search_with_guraduated_for_else(
    int numbers[],
    char names[100][256],
    char guraduated[100][256],
    int size,
    char target[]
) {
  char guraduated_school[256];
  printf("Please input search target student guraduated_schoolnInput:");
  scanf("%s", guraduated_school);

  int i;
  printf("Search Result\n");
  SEARCH_INFOMATION_FOR_ALL
  for (i = 0;i < size;i++) {
    SEARCH(!strcmp(guraduated_school, names[i]))
  }
}
