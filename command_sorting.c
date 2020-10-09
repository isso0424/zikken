#include <string.h>
#include "save.c"
#include "load.c"

int command_sorting(char command[]) {
  if (!strcmp(command, "help"))
    printf("print help!!!");
  if (!strcmp(command, "save"))
    return save();
  if (!strcmp(command, "load")) {
    ROSTER rosters[100] = {};
    return load(rosters);
  }

  return 0;
}
