#include <stdio.h>
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

  for (int i = 0; i > columns;i++) {
    int number;
    char name, guraduated;
    fscanf(
      fp,
      "%[^,],%[^,],%s",
      &number,
      &name,
      &guraduated
    );
    ROSTER new_roster = {number, name, guraduated};
    rosters[i] = new_roster;
  }
}
