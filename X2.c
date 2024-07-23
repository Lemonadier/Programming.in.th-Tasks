#include <stdio.h>

short main(void) {
    short x,y;
    scanf("%hd %hd", &x, &y);
    printf("%hd", y+y-x);

    return 0;
}