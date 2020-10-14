#include <stdio.h>
#include <string.h>
#include "sort/sorting.c"

void sort(ROSTER rosters[], int size) {
  char target;
  printf("Please select sort target\nName StudentNumber\nSelect:");
  scanf("%s", &target);
  if (!strcmp(&target, "Name")) {
    sort_with_name(rosters, size);
  } else if (!strcmp(&target, "StudentNumber")) {
    sort_with_number(rosters, size);
  }
}
