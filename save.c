#include <stdio.h>
int save() {
  FILE *fp;
  int number;
  char name[256], guraduated[256];
  printf("Please input Student Number.\n>>>");
  scanf("%d", &number);
  printf("Please input student's name.\n>>>");
  scanf("%s", name);
  printf("Please input student's guraduated junior high school.\n>>>");
  scanf("%s", guraduated);
  fp = fopen("rosters.csv", "a");
  if (fp == NULL) {
    printf("Cannot open rosters.csv.\nPlease check if it exist.");
    return 1;
  }
  printf("%d", number);
  fprintf(fp, "%d,%s,%s\n", number, name, guraduated);
  fclose(fp);

  return 0;
}

