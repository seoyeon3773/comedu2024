#include <stdio.h>

int main() {
    char str[20];
    printf("gets 리턴값 = %d \n\n", fgets(str,100,stdin));
    puts(str);
    printf("배열 str의 시작위치 주소값 = %d \n\n",str);
    printf("puts 반환값 = %s \n", puts(str));
}