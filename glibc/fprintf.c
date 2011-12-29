#include <stdio.h>
int main() {
  // a FILE* is a stream
  // (versus a file-descriptor which is an int)
  FILE *fp;
  fp = fopen( "data.txt", "a" );
  fprintf ( fp, "%s\n", "Hello, World!" );
  fclose ( fp );
}
