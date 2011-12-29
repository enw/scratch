#include <stdio.h>

int main() {
  // a FILE* is a stream
  // (versus a file-descriptor which is an int)
  FILE *fp;
  int c,i=0;
  fp = fopen( "data.txt", "r" );
  do {
    c=fgetc(fp);
    printf ("%i\t%c\n",i, c);
    i++;
  } while ( c != EOF);
  fclose ( fp );
}
