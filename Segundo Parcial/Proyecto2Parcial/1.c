#include <stdio.h>

int main(void) {
  int ch, spaces, x;
  while (1) {
    spaces = 0;
    while (((ch = getc(stdin)) != EOF) && (ch == ' ')) spaces++;
    if (ch == EOF) break;
    ungetc(ch, stdin);
    if (scanf("%d", &x) != 1) break;
    printf("%d was preceded by %d spaces\n", x, spaces);
  }
  return 0;
}