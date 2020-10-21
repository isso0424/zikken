#include <stdio.h>
#include "string.h"
#include "command_sorting.c"

void interprinter() {
  while (1) {
    printf("\nPlease Enter Command\nIf you don't know about commands, you can use `help`.\n>>>");
    char command[256];
    scanf("%s", command);
    if (!strcmp(command, "exit")) return;
    else command_sorting(command);
  }
}

int main() {
  interprinter();
}

