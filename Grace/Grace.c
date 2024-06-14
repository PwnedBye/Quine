#include <stdio.h>
#define FIRST(y) void F_FIRST() {}
/*
  myComment
*/
#define SECOND(z) void F_SECOND() {}
#define F(x) int main() { \
    FILE *fp = fopen("Grace_kid.c", "w"); \
    if (fp == NULL) return 1; \
    char *c = "#include <stdio.h>%c#define FIRST(y) void F_FIRST() {}%c/*%c  myComment%c*/%c#define SECOND(z) void F_SECOND() {}%c#define F(x) int main() { FILE *fp = fopen(%cGrace_kid.c%c,%cw%c); if (fp == NULL) return 1; char *c=%c%s%c;fprintf(fp,c,10,10,10,10,10,10,34,34,34,34,34,c,34,10,10); fclose(fp); }%cF()%c"; \
    fprintf(fp, c, 10, 10, 10, 10, 10, 10, 34, 34, 34, 34, 34, c, 34, 10, 10); \
    fclose(fp); \
    return 0; \
}
F()
