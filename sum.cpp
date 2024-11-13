#include <stdio.h>
int main (void) {
	int sum=0;
	
	for(int i=1; i<=50; i++) {
  	
	  if(i%4 != 0){
  		sum += i;
  		
	  }

  }
    printf("%d", sum);
    return 0;
}
