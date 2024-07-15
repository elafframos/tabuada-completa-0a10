#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	for (int numero = 0; numero <= 10; numero++) {
		printf("Tabuada do %d:\n", numero);
		
		for (int i = 1; i <= 10; i++) {
			printf("%d X %d = %d\n", numero, i, numero * i);
		}
		
		printf("\n");
	}
	
	return 0;
}
