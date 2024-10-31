#include <stdio.h>
#include <stdlib.h>
void writeSentence(){
	FILE *file = fopen("data.txt","W");
	if(file == NULL){
		printf("Error opening file!\n");
		return;
	}
	char sentence[100];
	printf("Enter a sentence (up to 100 characters):");
	fgets(sentence, sizeof(sentence),stdin);
	fprintf(file,"%s",sentence);
	fclose(file);
	printf("Sentence written to data.txt.\n");
}
void readContent(){
	FILE *file = fopen("data.txt","r");
	if(file == NULL){
		printf("Error opening file!\n");
		return;
	}
	char ch;
	printf("content of data.txt:\n");
	while((ch = fgetc(file)) != EOF){
		putchar(ch);
	}
	fclose(file);
}
void appendSentence(){
	FILE *file = fopen("data.txt","a");
	if(file == NULL){
		printf("Error opening file!\n");
		return;
	}
	char sentence[101];
	printf("Enter a second sentence to append:");
	fgets(sentence, sizeof(sentence), stdin);
	fprintf(file, "%s",sentence);
	fclose(file);
	printf("Sentence append to data.txt.\n");
}
int main(){
	writeSentence();
	readContent();
	appendSentence();
	readContent();
	return 0;
}