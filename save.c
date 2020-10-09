#include <stdio.h>
#include "type.c"

ROSTER input_file_info() {
  int number;
  char name, guraduated;
  printf("Please input Student Number.\n>>>");
  scanf("%d", &number);
  printf("Please input student's name.\n>>>");
  scanf("%s", &name);
  printf("Please input student's guraduated junior high school.\n>>>");
  scanf("%s", &guraduated);
  ROSTER roster = {number, name, guraduated};

  return roster;
}

int save() {
  FILE *fp;
  ROSTER new_roster = input_file_info();
  fp = fopen("rosters.csv", "a");
  if (fp == NULL) {
    printf("Cannot open rosters.csv.\nPlease check if it exist.");
    return 1;
  }
  fprintf(fp, "%d,%s,%s\n", new_roster.number, &new_roster.name, &new_roster.guraduated);

  return 0;
}

