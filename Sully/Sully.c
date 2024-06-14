#include <stdio.h>
#include <stdlib.h>
#define COMPILATION(s) system(s);
#define F(x) int main() { \
    if(x <= 0) return 0; \
    char x_name[] = "./Sully_X"; \
    x_name[8] = x + '0'; \
    char src_name[] = "./Sully_X.c"; \
    src_name[8] = x + '0'; \
    FILE *fp = fopen(src_name, "w"); \
    if (fp == NULL) return 1; \
    char *c = "#include <stdio.h>%c#include <stdlib.h>%c#define COMPILATION(s) system(s);%c#define F(x) int main() { if(x <= 0) return 0; char x_name[] = %c./Sully_X%c; x_name[8] = x + %c0%c; char src_name[] = %c./Sully_X.c%c; src_name[8] = x + %c0%c; FILE *fp = fopen(src_name,%cw%c); if (fp == NULL) return 1; char *c=%c%s%c; fprintf(fp,c,10,10,10,34,34,39,39,34,34,39,39,34,34,34,c,34,34,34,39,39,39,39,10,(x-1),10); fclose(fp); char s_compil[] = %cclang -Wall -Werror -Wextra Sully_X.c -o Sully_X%c; s_compil[34] = x + %c0%c; s_compil[47] = x + %c0%c; COMPILATION(s_compil); system(x_name); }%cF(%d)%c"; \
    fprintf(fp, c, 10, 10, 10, 34, 34, 39, 39, 34, 34, 39, 39, 34, 34, 34, c, 34, 34, 34, 39, 39, 39, 39, 10, (x-1), 10); \
    fclose(fp); \
    char s_compil[] = "clang -Wall -Werror -Wextra Sully_X.c -o Sully_X"; \
    s_compil[34] = x + '0'; \
    s_compil[47] = x + '0'; \
    COMPILATION(s_compil); \
    system(x_name); \
}

F(5)
