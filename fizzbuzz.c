#include <stdio.h>
#include <stdlib.h>

void fizzbuzz(int max){
	char num[15];
	for(int i = 1; i <= max; i++){
		sprintf(num, "%d", i);
		printf("%s%s%s\n",
				 i%3==0            ? "Fizz" : "",
				           i%5==0  ? "Buzz" : "",
				(i%3==0 || i%5==0) ? ""     : num);
	}
}

int main(int argc, char **argv) {
  int fizz = argc > 1 ? atoi(argv[1]) : 100;
  fizzbuzz(fizz);
	return 0;
}
