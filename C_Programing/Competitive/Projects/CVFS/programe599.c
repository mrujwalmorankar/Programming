#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024 // User Defined Macro

//change in parameter
void DisplayFile(char *Filename)
{
    char BUFFER[BUFFER_SIZE] = {'\0'};
    int fd = 0;
    int iRet = 0;

    fd = open(Filename, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    while((iRet = read(fd, BUFFER, sizeof(BUFFER))) != 0)
    {
        write(1, BUFFER, iRet);

        memset(BUFFER, '\0', sizeof(BUFFER));
    }

    close(fd);
}

int main()
{
    char Fname[30] = {'\0'};

    printf("Enter the File Name :\n");
    scanf("%[^\n]s", Fname);

    DisplayFile(Fname);

    return 0;
}