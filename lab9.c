#include <stdio.h>

int main(int argc, char **argv)
{
  do {
    printf("%s ",  argv[argc-1]);
    strrev(argv[argc-1]);
    printf("%s\n", argv[argc-1]);
  } while(--argc);

  return 0;
}