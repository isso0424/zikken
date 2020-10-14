#include <string.h>
#include "save.c"
#include "search.c"
#include "sort.c"

#define CREATE_ROSTERS \
const char *file_name = "rosters.csv";\
int columns = get_file_columns(file_name);\
if (columns == 0) return 0;\
ROSTER rosters[columns];\
load(rosters);\
int size = sizeof(rosters) / sizeof(*rosters);

#define CREATE_ARRAIES_FROM_ROSTERS \
int numbers[100] = {};\
char names[100][256] = {};\
char guraduated[100][256] = {};\
for (int i = 0; i < size; i++) {\
  numbers[i] = rosters[i].number;\
  strcpy(names[i], rosters[i].name);\
  strcpy(guraduated[i], rosters[i].guraduated);\
}

int command_sorting(char command[]) {
  if (!strcmp(command, "help"))
    printf("print help!!!\n");
  if (!strcmp(command, "save"))
    return save();
  if (!strcmp(command, "sort")) {
    CREATE_ROSTERS
    sort_with_name(rosters, size);
  }
  if (!strcmp(command, "search")) {
    CREATE_ROSTERS
    CREATE_ARRAIES_FROM_ROSTERS
    search(numbers, names, guraduated, size);
  }

  return 0;
}
