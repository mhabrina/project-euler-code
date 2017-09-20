//project euler problem 1

#include <stdio.h>

int main(void){
	int i=0;
	int x;

	for(x=0; x<1000; x++){
		if(x%3==0||x%5==0){
			i=i+x;
		}
	}

	printf("%d\n", i);

	return 0;
}
