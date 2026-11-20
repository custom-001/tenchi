#include <stdio.h>

int main(int argc, char** argv) {
  if (argc < 3) {
    fprintf(stderr, "cp: too little arguments!\n");
    return 1;
  }

  FILE* in  = fopen(argv[1], "rb");
  FILE* out = fopen(argv[2], "wb");

  if (!in || !out) {
    perror("fopen");
    return 1;
  }

  char buf[4096];
  size_t bt; 

  while ((bt = fread(buf, 1, sizeof(buf), in)) > 0) {
    fwrite(buf, 1, bt, out);
  }

  fclose(in);
  fclose(out);
  return 0;
}
