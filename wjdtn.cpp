#include <stdio.h>
int main(){
	
	int K;
	scanf("%d", &K);
	printf("입력 받은 정수는 %d 입니다. \n", K);
	printf("첫째, 8진수로는 %o 이고, \n", K);
	printf("둘째, 10진수로는 %u 이고, \n", K);
	printf("셋째, 16진수로는 %x 이다.", K);
	return 0;
}
