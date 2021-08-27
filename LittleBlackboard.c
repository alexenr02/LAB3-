
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i;
	
		
	int limit= atoi(argv[2]);
	int counter=0;
	char nombre[10];
	char ID[10];
	char answer[1];
	FILE *f = fopen("file.txt","w");
	if(f == NULL)
	{
		fprintf(stderr, "Error opening file!\n");
		exit(1);
	}
	do{
		counter++;
	printf("Enter name: ");
	scanf("%s", nombre);
	const char *name = nombre;
	fprintf(f, "\nNombre: %s\n", name);
	
	printf("Enter ID: ");
	scanf("%s", ID);
	const char *ide = ID;
	fprintf(f, "ID: %s\n",ide);
	if(counter==limit){
			printf("Es todo!\n");
		}
	else{
			printf("Do you wish to add more [Y/n]: ");
			scanf("%s", answer);
		}
	
	const char *ans = answer;
	}while(counter<limit && answer[0]=='y'  );

	fclose(f);
	
}
