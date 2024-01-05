//title of program
//program to read and write in a file
//header file
#include<stdio.h>
//header file for using functions like:-malloc,calloc,etc
#include<stdlib.h>
//main function heading
int main()
{
//writing to a file
FILE *file_write=fopen("file.txt","w");
//if statemnet
if(file_write==NULL)
{
//output statement
printf("Error opening file for writing");
//return statement
return 0;
}
//fprintf for writing the content to the file
fprintf(file_write,"Hello,this is a stadium");
//fclose for closing the file after finishing operators
fclose(file_write);
//output statement
printf("Successfully wrote to the file.\n");
//Reading from a file
FILE*file_read=fopen("file.txt","r");
//if else statemnt
if(file_read==NULL)
{
//output statement
printf("Error opening file for reading");
//return statement
return 0;
}
else
{
//output statement
printf("Content read from the file.\n");
}
//character variable declaration
char ch;
//while loop statement
while(fscanf(file_read,"%c",&ch)==1)
{
//write the char to the file
putchar(ch);
}
//fclose for closing the file after finishing operators
fclose(file_read);
//return statement
return 0;
}