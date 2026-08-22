#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024 // User Defined Macro

void FileCopy(char FilenameSrc[], char FilenameDest[])
{
    char BUFFER[BUFFER_SIZE] = {'\0'};

    int iRet = 0;
    int fdSrc = 0;
    int fdDest = 0;

    fdSrc = open(FilenameSrc, O_RDONLY);

    if(fdSrc == -1)
    {
        printf("Unable to open Source file\n");
        return;
    }

    fdDest = creat(FilenameDest, 0777);

    if(fdDest == -1)
    {
        printf("Unable to Create Destination file\n");
        close(fdSrc);
        return;
    }

    while((iRet = read(fdSrc, BUFFER, sizeof(BUFFER))) != 0)
    {
        write(fdDest, BUFFER, iRet);

        memset(BUFFER, '\0', sizeof(BUFFER));
    }

    close(fdSrc);
    close(fdDest);
}

int main()
{
    char FnameSrc[30] = {'\0'};
    char FnameDest[30] = {'\0'};

    printf("Enter the Source File Name :\n");
    scanf("%[^\n]s", FnameSrc);

    printf("Enter the Destination File Name :\n");
    scanf(" %[^\n]s", FnameDest);

    FileCopy(FnameSrc, FnameDest);

    return 0;
}