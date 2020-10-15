#include <string.h>
#include "search/guraduated.c"
#include "search/search_with_number.c"
#include "search/search_with_name.c"
#include "search/searching.c"

void search(int numbers[], char names[100][256], char guraduated[100][256], int size) {
  char command[256];
  char target[256];
  printf("Which is parameter which use to search?\nName StudentNumber GuraduatedJHS\nSelect:");
  scanf("%s", command);
  printf("Please select target parameter\nAll Name StudentNumber GuraduatedJHS\nSelect:");
  scanf("%s", target);

  if (!strcmp(command, "GuraduatedJHS")) {
    if (!strcmp(target, "All")) {
      search_with_guraduated(numbers, names, guraduated, size);

      return;
    }

    search_with_guraduated_for_else(numbers, names, guraduated, size, target);
  } else if (!strcmp(command, "Name")) {
    if (!strcmp(target, "StudentNumber")) {
      searchnumber(numbers, names, size);

      return;
    }
    search_with_name(numbers, names, guraduated, size, target);
  } else if (!strcmp(command, "StudentNumber")) {
    if (!strcmp(target, "Name")) {
      search_name(numbers, names, size);

      return;
    }

    search_with_number(numbers, names, guraduated, size, target);
  }
}
