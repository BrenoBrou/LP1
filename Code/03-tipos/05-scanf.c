#include <stdio.h>

/*
 * $ man scanf
 * <...>
 *     d      Matches  an  optionally signed decimal integer; the next pointer must
 *            be a pointer to int.
 */


int main (void) {
    char a = 0;
    char b = 0;
    char c = 0;
    char d = 0;
    scanf("%d", &a);
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}

#if 0
int main (void) {
    int  v;
    char a=0, b=0, c=0, d=0;
    scanf("%d", &v);
    a = v;
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}
#endif
