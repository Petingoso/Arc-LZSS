#include <stdio.h>
#include <string.h>
 
#define SIZE 40
 
int main(void)
{
  char buf[SIZE] = "computer program";
  char * ptr;
  int    ch = 'p';
 
  /* This illustrates strchr */
  ptr = strchr( buf, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
 
  /* This illustrates strrchr */
  ptr = strrchr( buf, ch );
  printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
}
 
/*****************  Output should be similar to:  *****************
 
The first occurrence of p in 'computer program' is 'puter program'
The last occurrence of p in 'computer program' is 'program'
*/
