#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024 // User Defined Macro

int CalculateFileSize(char Filename[])
{
    struct stat sobj;

    stat(Filename, &sobj);

    return sobj.st_size;
}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the File Name :\n");
    scanf("%[^\n]s", Fname);

    iRet = CalculateFileSize(Fname);

    printf("File Size is %d bytes\n", iRet);

    return 0;
}