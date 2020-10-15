#define SEARCH_NAME \
printf("%s\n", names[i]);

#define SEARCH_NUMBER \
printf("%d\n", numbers[i]);

#define SEARCH_GURADUATED \
printf("%s\n", guraduated[i]);

#define SEARCH_INFOMATION_FOR_ALL \
if (!strcmp(target, "All"))\
  printf("StudentNumber|Name|GuraduatedJHS\n");

#define SEARCH_ALL \
printf("%d|%s|%s\n", numbers[i], names[i], guraduated[i]);

#define SEARCH(condition) \
for (i = 0;i < size;i++) {\
  if (condition) {\
    if (!strcmp(target, "GuraduatedJHS")) {\
      SEARCH_GURADUATED\
    } else if (!strcmp(target, "All")) {\
      SEARCH_ALL\
    } else if (!strcmp(target, "Number")) {\
      SEARCH_NUMBER\
    } else if (!strcmp(target, "Name")) {\
      SEARCH_NAME\
    } else {\
      printf("Target is invalid!!!\n");\
    }\
  }\
}
