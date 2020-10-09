#include <stdio.h>
#include "string.h"
#include "command_sorting.c"

void interprinter() {
  while (1) {
    printf("Please Enter Command\nIf you don't know about commands, you can use `help`.\n>>>");
    char command[256];
    scanf("%s", command);
    command_sorting(command);
    if (!strcmp(command, "exit")) return;
  }
}

int main() {
  interprinter();
}

