#define SWAP_PARAMS(condition) \
ROSTER tmp = rosters[0];\
for (int i = 1; i < rosters_size; i++) {\
  if (condition) {\
    rosters[i - 1] = rosters[i];\
    rosters[i] = tmp;\
  }\
  tmp = rosters[i];\
}

#define CHECK_SORT(condition) \
for (int i = 0; i < rosters_size - 1; i++) {\
  if (condition) return 1;\
}
