#include <string.h>
#include "search/guraduated.c"
#include "search/search_with_number.c"
#include "search/search_with_name.c"

void search(int numbers[], char names[100][256], char guraduated[100][256], int size) {
  char command;
  char target;
  printf("Which is parameter which use to search?\nName StudentNumber GuraduatedJHS\nSelect:");
  scanf("%s", &command);
  if (!strcmp(&command, "GuraduatedJHS")) {
    printf("Please select target parameter\nAll\nSelect:");
    scanf("%s", &target);
    if (!strcmp(&target, "All"))
      search_with_guraduated(numbers, names, guraduated, size);
  } else if (!strcmp(&command, "Name")) {
    printf("Please select target parameter\nStudentNumber\nSelect:");
    scanf("%s", &target);
    if (!strcmp(&target, "StudentNumber"))
      search_name(numbers, names, size);
  } else if (!strcmp(&command, "StudentNumber")) {
    printf("Please select target parameter\nName\nSelect:");
    scanf("%s", &target);
    if (!strcmp(&target, "Name"))
      searchnumber(numbers, names, size);
  }
}
