#include <string.h>
#include "macros.c"
#include "../load.c"

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

int check_sorted_with_guraduated(ROSTER rosters[], int rosters_size) {
  CHECK_SORT(strcmp(rosters[i].guraduated, rosters[i + 1].guraduated) > 0)

  return 0;
}

int sort_with_guraduated(ROSTER rosters[], int rosters_size) {
  while (check_sorted_with_guraduated(rosters, rosters_size)) {
    SWAP_PARAMS(strcmp(tmp.guraduated, rosters[i].guraduated) > 0)
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

int check_sorted_with_name(ROSTER rosters[], int rosters_size) {
  CHECK_SORT(rosters[i].name[0] > rosters[i + 1].name[0])

  return 0;
}

int sort_with_name(ROSTER rosters[], int rosters_size) {
  while (check_sorted_with_name(rosters, rosters_size)) {
    SWAP_PARAMS(tmp.name[0] > rosters[i].name[0])
  }
  listed_rosters(rosters,rosters_size);

  return 0;
}
