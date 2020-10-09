#include <string.h>
#include "save.c"
#include "load.c"

#define CREATE_ROSTERS \
const char *file_name = "rosters.csv";\
int columns = get_file_columns(file_name);\
if (columns == 0) return 0;\
ROSTER rosters[columns];\
load(rosters);\
int size = sizeof(rosters) / sizeof(*rosters);

#define CHECK_SORT(condition) \
for (int i = 0; i < rosters_size - 1; i++) {\
  if (condition) return 1;\
}

#define SWAP_PARAMS(condition) \
ROSTER tmp = rosters[0];\
for (int i = 1; i < rosters_size; i++) {\
  if (condition) {\
    rosters[i - 1] = rosters[i];\
    rosters[i] = tmp;\
  }\
  tmp = rosters[i];\
}

void listed_rosters(ROSTER rosters[], int rosters_size) {
  printf("No.|Name|Guraduated\n");
  for (int i = 0; i < rosters_size; i++) {
    printf(
      "%d|%s|%s\n",
      rosters[i].number,
      rosters[i].name,
      rosters[i].guraduated
    );
  }
}

int check_sorted_with_name(ROSTER rosters[], int rosters_size) {
  CHECK_SORT(strcmp(rosters[i].name, rosters[i + 1].name) > 0)
  return 0;
}

int sort_with_name(ROSTER rosters[], int rosters_size) {
  while(check_sorted_with_name(rosters, rosters_size)) {
    SWAP_PARAMS(strcmp(tmp.name, rosters[i].name) > 0)
  }

  listed_rosters(rosters, rosters_size);

  return 0;
}

int check_sorted_with_number(ROSTER rosters[], int rosters_size) {
  CHECK_SORT(rosters[i].number > rosters[i + 1].number)

  return 0;
}

int sort_with_number(ROSTER rosters[], int rosters_size) {
  while(check_sorted_with_number(rosters, rosters_size)) {
    SWAP_PARAMS(tmp.number > rosters[i].number)
  }

  listed_rosters(rosters, rosters_size);

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
    CREATE_ROSTERS
    sort_with_number(rosters, size);
  }
  if (!strcmp(command, "sort_with_name")) {
    CREATE_ROSTERS
    sort_with_name(rosters, size);
  }

  return 0;
}
