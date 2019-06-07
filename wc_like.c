#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int main()
{
  typedef unsigned long count_t;

  count_t ccount = 0;
  count_t wcount = 0;
  count_t lcount = 0;

  FILE *fptr;

  char filename[100], c;

  printf("Enter file:\n");
  scanf("%s", filename);

  fptr = fopen(filename, "r");
  if (fptr == NULL)
  {
    printf("Cannot open %s file.", filename);
    exit(0);
  }

  c = fgetc(fptr);
  while (c != EOF)
  {
    ccount++;

    if (c == ' ' || c == '\n')
    {
      wcount++;
    }

    if (c == '\n')
    {
      lcount++;
    }

    c = fgetc(fptr);
  }

  printf("%ld %ld %ld %s \n", lcount, wcount, ccount, filename);

  fclose(fptr);

  return 0;
}
