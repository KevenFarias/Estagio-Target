#include <stdio.h>
#include <string.h>


main(){
	char string[100];
	int tamanho, i;
	
	printf("Digite alguma palavra: \n");
	gets(string);
	tamanho = strlen(string);
	
	for(i = tamanho ; i >= 0 ; i--){
		printf("%c", string[i]);
	}
		
}
