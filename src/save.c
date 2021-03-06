#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INPUT_INFOMATION(description, value) \
printf(description);\
scanf("%s", value);

int save() {
  FILE *fp;
  char raw_number[8], name[256], guraduated[256];
  INPUT_INFOMATION("Please input Student Number.\nInput:", raw_number);
  INPUT_INFOMATION("Please input student's name.\nInput:", name);
  INPUT_INFOMATION("Please input student's guraduated junior high school.\nInput:", guraduated);
  int number = atoi(raw_number);
  fp = fopen("rosters.csv", "a");
  if (fp == NULL) {
    printf("Cannot open rosters.csv.\nPlease check if it exist.");
    return 1;
  }
  fprintf(fp, "%d,%s,%s\n", number, name, guraduated);
  fclose(fp);

  printf("\nRoster created!!!\n");
  printf("Student number|Name|Guraduated JHS\n");
  printf("%d|%s|%s\n", number, name, guraduated);

  return 0;
}

