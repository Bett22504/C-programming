#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char name[50];
	int marks;
}student;
void writeFiveStudents(){
	FILE *file = fopen("students.txt","W");
	if (file == NULL){
		printf("Error opening file\n");
		return;
	}
	student students[5];
	for(int i=0;i<5;i++){
		printf("Enter name of student%d:",i+1);
		scanf("%s",students[i].name);
		printf("Enter marks of students name%d:");
		scanf("%d",&students[i].marks);
		fprintf(file,"%s%d\n",students[i].name,students[i].marks);
		}
		fclose(file);
		printf("Details of 5 students written to students.txt.\n");
}
void writenStudents(int n){
	FILE *file = fopen("students.txt","a");
	if(file == NULL){
		printf("Error opening file\n");
		return;
	}
	student *students = (student *)malloc(n*sizeof(student));
	fread(students,sizeof(student),n,file);
	printf("student details from students.dat:\n");
	for(int i=0;i<n;i++){
		printf("Name:%s,marks:%d\n",students[i].name,students[i].marks);
	}
	fclose(file);
	free(students);
}
int main(){
	int n;
	writeFiveStudents();
	printf("Enter the number of students to add:");
	scanf("%d",&n);
	
	printf("Enter the number of students for binary file:");
	scanf("%d",&n);

	return 0;
}