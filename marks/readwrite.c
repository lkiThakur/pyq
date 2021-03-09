#include<stdio.h>
#include<string.h>
int main(void){

FILE *filepointer;
FILE *outputfilepointer;
char readStudent[50];
filepointer=fopen("input.txt","r");
outputfilepointer=fopen("student.txt","a");
if (filepointer ==NULL||outputfilepointer==NULL)
{
    printf("file could not be read successfully");
}else{
while (fgets(readStudent,50,filepointer)!=NULL)
{
    fputs(readStudent,outputfilepointer);
    printf("%s",readStudent);
}
fclose(filepointer);
fclose(outputfilepointer);
}

return 0;}