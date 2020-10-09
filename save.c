#include <stdio.h>
#include <string.h>

#define INPUT_INFOMATION(description, value) \
printf(description);\
scanf("%s", value);

int save() {
  FILE *fp;
  char raw_number[8], name[256], guraduated[256];
  INPUT_INFOMATION("Please input Student Number.\n>>>", raw_number);
  INPUT_INFOMATION("Please input student's name.\n>>>", name);
  INPUT_INFOMATION("Please input student's guraduated junior high school.\n>>>", guraduated);
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

