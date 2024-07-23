#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    char s[10000]; bool status = false;
    scanf("%s",s);

    if((short)s[0]<96){status = true;}

    for (short i=0;i<strlen(s);i++) {
        if ((short)s[i]<96&status==true){}
        else if((short)s[i]>96&status==false){}
        else{printf("Mix");return 0;}
    }

    if(status){printf("All Capital Letter");}else{printf("All Small Letter");}
    return 0;
}