#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int largo; 
	int ancho;
	int area;
	int perimetro;
	for (i=0; i < argc; i++){
		
		largo=atoi(argv[3]);
		ancho=atoi(argv[5]);
	}
	
	if((strcmp(argv[1], "-a") == 0))
			{
				area= largo*ancho;
				printf("area= %d\n", area);
			}
	else 
	        {
				perimetro= (largo*2)+(ancho*2);
	            printf("perimetro= %d\n", perimetro);
	        }
		return 0;
}

