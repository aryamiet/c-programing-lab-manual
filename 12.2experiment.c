//title of prpgram
//program to store information of a student using union
//header file
#include<stdio.h>
//main function heading
int main()
{
//union declaration (user defined name)
union student{
//variable declaration
int rollno;
// character array declaration
char name[50];
//variable declaration
float avg; 
};
//initialization of variables
int n,i;
//union declaration
union student s;
//input statement from user
printf("Enter  the student RollNo\n");
scanf("%d",&s.rollno);
//output statement
printf("Student RollNo:%d\n",s.rollno);
//input statement from user
printf("Enter the student name\n");
scanf("%s",s.name);
//output statement
printf("Student name:%s\n",s.name);
//input statement from user
printf("Enter the student average\n");
scanf("%f",&s.avg);
//output statement
printf("Average:%f\n",s.avg);
//return statement
return 0;
}