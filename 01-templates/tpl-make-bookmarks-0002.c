/*
####################################
#
# --- TPL-MAKE-BOOKMARKS-0002.C ---
#
# This program makes an HTML5 Bookmark file.
#
# Example usage:
#
# gcc tpl-make-bookmarks-0002.c; ./a.out 5 10 > tpl-bookmarks-5x10.html
#
####################################
*/

#include <stdio.h>
#include <stdlib.h>

/* --- Function Prototypes go here --- */
int main(int argc, char *argv[]);

/* --- Global variables go here --- */

int main(int argc, char *argv[])
{
  int num1, num2, subhead, entries;
  
  subhead=atoi(argv[1]);
  entries=atoi(argv[2]);
  
  printf("<!DOCTYPE html>\n");
  printf("<html lang=\"en\">\n");
  printf("<head>\n");
  printf("<meta charset=\"utf-8\" >\n");
  printf("<title>HTML5 Bookmarks</title>\n");
  printf("<style>\n");
  printf("body {\n");
  printf("  background-color: #000000;\n");
  printf("  color: #FFFFFF;\n");
  printf("  font-family: monospace;\n");
  printf("}\n");
  printf("h1 {\n");
  printf("  background-color: #585858;\n");
  printf("  color: #FFFFFF;\n");
  printf("}\n");
  printf("h2 {\n");
  printf("  background-color: #585858;\n");
  printf("  color: #FFFFFF;\n");
  printf("}\n");
  printf("a:link {\n");
  printf("  color: #FF0000;\n");
  printf("}\n");
  printf("a:visited {\n");
  printf("  color: #00FF00;\n");
  printf("}\n");
  printf("</style>\n");
  printf("</head>\n");
  printf("<body>\n");
  printf("<h1></h1>\n");
  for (num1=1; num1<=subhead; num1++)
  {
    printf("<h2></h2>\n");
    printf("<p>\n");
    for (num2=1; num2<=entries; num2++)
    {
      printf("<a href=\"\"></a><br>\n");
    }
    printf("</p>\n");
  }
  printf("</body>\n");
  printf("</html>\n");
}

