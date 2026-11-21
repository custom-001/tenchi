#include <stdio.h>

int main(int argc, char** argv) {
  if (argc < 2) {
    fprintf(stderr, "rm: No input arguments!\n");
    return 1;
  }

  for (int i = 1; i < argc; ++i) {
    if (remove(argv[i]) != 0) { /* check whether or not why remove failed (i.e. no such file or directory) */
      perror("remove");
    }
  }

  return 0;
}
