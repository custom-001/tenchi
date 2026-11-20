#include <stdio.h>
#include <dirent.h>

int main(int argc, char** argv) {
  char* dir = (argc == 2) ? argv[1] : ".";
  
  if (argc > 2) {
    fprintf(stderr, "ls: too many arguments!\n");
    return 1;
  }

  /* open the directory given */
  DIR* dirp = opendir(dir);

  /* if the directory or file doesn't exist */
  if (!dirp) {
    perror("opendir");
    return 1;
  }

  struct dirent* entry;

  while ((entry = readdir(dirp)) != (void*)0) { /* loop until no more contents to output */
    printf("%s\n", entry->d_name);
  }
  
  /* close the directory given */
  closedir(dirp);
  return 0;
}
