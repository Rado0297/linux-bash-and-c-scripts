#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>

#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
  FILE *fptr1, *fptr2;
  char filename[100], c;

  printf("Enter the file1:\n");
  scanf("%s", filename);

  fptr1 = fopen(filename, "r");
  if (fptr1 == NULL)
  {
    printf("Cannot open the file %s \n", filename);
    exit(0);
  }

  printf("Enter file2:\n");
  scanf("%s", filename);

  fptr2 = fopen(filename, "w");
  if (fptr2 == NULL)
  {
    printf("Cannot open file %s \n", filename);
    exit(0);
  }

  c = fgetc(fptr1);
  while (c != EOF)
  {
    fputc(c, fptr2);
    c = fgetc(fptr1);
  }

  printf("Content had been copied\n");
  fclose(fptr1);
  fclose(fptr2);

  return 0;
}
