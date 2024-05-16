#include <stdio.h>
#include <stdlib.h>

int main() {


	float nota1, nota2, nota3 ,nota4, media;
	
	printf("digite primeira nota");
	scanf("%f", nota1);
	
	printf("digite segunda nota");
	scanf("%f", nota2);
	
	printf("digite terceira nota");
	scanf("%f", nota3);
	
	printf("digite quarta nota");
	scanf("%f", nota4);
	
	media = nota1 + nota2 + nota3 + nota4  / 4;

	
	printf("a media e = %.1f", media);
	 return 0;
	
	
}
