#include <string.h>
#include "save.c"
#include "load.c"

int check_sorted(ROSTER rosters[], int rosters_size) {
  for (int i = 0; i < rosters_size - 1; i++) {
    if (rosters[i].number > rosters[i + 1].number) return 1;
  }

  return 0;
}
int sort_with_number(ROSTER rosters[], int rosters_size) {
  while(check_sorted(rosters, rosters_size)) {
    ROSTER tmp = rosters[0];
    for (int i = 1; i < rosters_size; i++) {
      if (tmp.number > rosters[i].number) {
        rosters[i - 1] = rosters[i];
        rosters[i] = tmp;
      }
      tmp = rosters[i];
    }
  }

  printf("No.|Name|Guraduated\n");
  for (int i = 0; i < rosters_size; i++) {
    printf(
      "%d|%s|%s\n",
      rosters[i].number,
      rosters[i].name,
      rosters[i].guraduated
    );
  }

  return 0;
}

int command_sorting(char command[]) {
  if (!strcmp(command, "help"))
    printf("print help!!!");
  if (!strcmp(command, "save"))
    return save();
  if (!strcmp(command, "load")) {
    ROSTER rosters[100] = {};
    return load(rosters);
  }
  if (!strcmp(command, "sort_with_number")) {
    const char *file_name = "rosters.csv";
    FILE *fp;
    fp = fopen(file_name, "r");
    if (fp == NULL) {
      printf("Cannot open rosters.csv.\nPlease check if it exist.");
      return 1;
    }
    int columns = get_file_columns(fp);
    ROSTER rosters[columns];
    load(rosters);
    int size = sizeof(rosters) / sizeof(*rosters);
    sort_with_number(rosters, size);
  }

  return 0;
}
