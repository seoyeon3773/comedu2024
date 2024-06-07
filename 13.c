#include <stdio.h>

int main() {
    int k=0, ch=0;
    char a[6];
    while(1) {
        ch=getchar();
        if(ch == '\n') continue; 
        a[k]=ch;
        k++;
    }
    a[k]='\0';
    k=0;
    while(a[k] != '\0') {
        putchar(a[k]);
        k++;
    }
}