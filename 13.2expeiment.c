//title of program
//program for reading and writing the student marks data to files
//header file
#include<stdio.h>
//header file for using functions like malloc,calloc,etc
#include<stdlib.h>
//main function heading
int main()
{
// variable initialization
int q1,q2,q3;
// character array declaration
char fname[30];
// input,output file pointer statement
FILE *ifp,*ofp;
// statement for reading the input.txt file
ifp=fopen("input.txt","r");
//statement for writing it to the output file
ofp=fopen("output.txt","w");
//if else statement
if(ifp==NULL||ofp==NULL)
{
//output statement
printf("Error while opening the file\n");
//exit statement
exit(0);
}
//while loop statement
while(!feof(ifp))
{
//fscanf for getting the content from the file
fscanf(ifp,"%s%d%d%d",fname,&q1,&q2,&q3);
//output statement
printf("%s %d %d  %d\n",fname,q1,q2,q3);
//fprintf for writing the content to the file
fprintf(ofp,"%s %d %d %d\n",fname,q1,q2,q3);
}
//output statments
printf("Copied the file\n");
printf("\n");
//fclose for closing the file after finishing operators
fclose(ifp);
//return statement
return 0;
}