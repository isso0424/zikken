#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "type.c"

int get_file_columns(FILE *fp) {
  char buffer[256];
  int line = 0;
  while (fgets(buffer, 256, fp) != NULL) line++;

  return line;
}

int load(ROSTER rosters[]) {
  const char *file_name = "rosters.csv";
  FILE *fp;
  fp = fopen(file_name, "r");
  if (fp == NULL) {
    printf("Cannot open rosters.csv.\nPlease check if it exist.");
    return 1;
  }
  int columns = get_file_columns(fp);
  fp = fopen(file_name, "r");

  for (int i = 0; i < columns;i++) {
    int number;
    char name[256], guraduated[256];
    fscanf(
      fp,
      "%d,%[^,],%s",
      &number,
      name,
      guraduated
    );
    printf("%s\n", name);
    ROSTER new_roster;
    new_roster.number = number;
    strcpy(new_roster.name, name);
    strcpy(new_roster.guraduated, guraduated);
    rosters[i] = new_roster;
  }
  fclose(fp);

  return 0;
}
