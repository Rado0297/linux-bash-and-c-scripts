#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fptr;

  char filename[100], c;

  printf("Enter file name:\n");
  scanf("%s", filename);

  fptr = fopen(filename, "r");
  if (fptr == NULL)
  {
    printf("Cannot open %s", filename);
    exit(0);
  }

  c = fgetc(fptr);
  while (c != EOF)
  {
    printf("%c", c);
        
    c = fgetc(fptr);
  }

  return 0;
}
