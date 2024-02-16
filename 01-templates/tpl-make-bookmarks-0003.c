/*
####################################
#
# --- TPL-MAKE-BOOKMARKS-0003.C ---
#
# This program makes an HTML5 Bookmark file, and this version allows you
# to create customised colours for background, text, and website links.
#
# Example usage:
#
# gcc tpl-make-bookmarks-0003.c; ./a.out 3 7 000000 FFFFFF FF0000 00FF00 > tpl-bookmarks-3x7.html
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
  printf("  background-color: #%s;\n", argv[3]);
  printf("  color: #%s;\n", argv[4]);
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
  printf("  color: #%s;\n", argv[5]);
  printf("}\n");
  printf("a:visited {\n");
  printf("  color: #%s;\n", argv[6]);
  printf("}\n");
  printf("</style>\n");
  printf("</head>\n");
  printf("<body>\n");
  printf("<h1>HTML5 Bookmarks</h1>\n");
  for (num1=1; num1<=subhead; num1++)
  {
    printf("<h2>Sub Heading #%02d</h2>\n", num1);
    printf("<p>\n");
    for (num2=1; num2<=entries; num2++)
    {
      printf("<a href=\"-\">-</a><br>\n");
    }
    printf("</p>\n");
  }
  printf("</body>\n");
  printf("</html>\n");
}

