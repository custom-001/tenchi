#include <stdio.h>

int main(int argc, char** argv) {
  if (argc < 2) {
    fprintf(stderr, "cat: No input arguments!\n");
    return 1;
  }

  for (int i = 1; i < argc; ++i) {
    FILE* out = fopen(argv[i], "rb");

    if (!out) {
      perror("fopen");
      return 1;
    }

    char buf[4096];
    size_t bt;

    while ((bt = fread(buf, 1, sizeof(buf), out)) > 0) {
      fwrite(buf, 1, bt, stdout);
    }

    fclose(out);
  }

  return 0;
}
