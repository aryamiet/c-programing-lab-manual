//title of program 
//program  to demonstrate the use of malloc(),calloc(),realloc() and free() functions
//header file 
#include <stdio.h>
//header file for using functions like:-realloc,calloc,..etc.
#include <stdlib.h>
//main function heading
int main()
{
    //variable initialization
    int n,i;
    //input statement from user
    printf("Enter the size of an array:");
    scanf("%d", &n);
    //use of malloc,calloc  functions
    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)calloc(n,sizeof(int));
    //if else statement
    if(arr1 == NULL||arr2 == NULL)
    {
    //output statement
    printf("Memory Error!\n");
    }
    else
    {
    //nested loop statememt
        for(i=0;i<n;i++)
        {
        *(arr1+i) = i;
        printf("%d",*(arr1+i));
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
        *(arr2+i) = n-i;
        printf("%d",*(arr2+i));
        }
        printf("\n");
        //use of realloc function
    int *arr3 = (int*)realloc(arr1,n*sizeof(int));
    int *arr4 = (int*)realloc(arr2,n*sizeof(int)); 
    //if else statement
    if(arr3==NULL||arr4==NULL)
    {
        //output statement
        printf("Reallocation Failed!\n");
    }
    else
    {
        //nested loop statement
        for(i=0;i<n;i++)
        {
        printf("%d\n",*(arr3+i));
        }
        printf("\n");
        for(i=0;i<2*n;i++)
        {
        printf("%d",*(arr4+i));
        }
    }
    }
    //use of free function
    free(arr1);
    free(arr2);
    //return statement
    return 0;
}
