#include <string.h>
#include "save.c"

int command_sorting(char command[]) {
  if (!strcmp(command, "help"))
    printf("print help!!!");
  if (!strcmp(command, "save"))
    return save();

  return 0;
}
