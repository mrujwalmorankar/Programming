#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024 // User Defined Macro


int CalculateFileSize(char Filename[])
{
    char BUFFER[BUFFER_SIZE] = {'\0'};
    int fd = 0;
    int iRet = 0;
    int iSize=0;

    fd = open(Filename, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return iSize;
    }

    while((iRet = read(fd, BUFFER, sizeof(BUFFER))) != 0)
    {
      iSize=iSize+iRet;

    }

    close(fd);
    return iSize;
}

int main()
{
    char Fname[30] = {'\0'};
     int iRet=0;
    printf("Enter the File Name :\n");
    scanf("%[^\n]s", Fname);

    iRet=CalculateFileSize(Fname);

    printf(" File Size is  %d bytes\n",iRet);

    return 0;
}