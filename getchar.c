#include <stdio.h>
int main(void) {
    int k=0, ch=0;
    char a[6];
    for(k=0; k<5; k++) {
        ch=getchar();
        a[k]=ch;
    }
    a[k]='\0';
    k=0;
    while(a[k] != '\0') {
        putchar(a[k]);
        k++;
    }
}