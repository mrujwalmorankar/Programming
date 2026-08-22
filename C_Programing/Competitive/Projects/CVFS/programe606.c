#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024 // User Defined Macro

// Change in parameter
int CountCapital(char *Filename)
{
    char BUFFER[BUFFER_SIZE] = {'\0'};

    int fd = 0;
    int iCount = 0;
    int i = 0;
    int iRet = 0;

    fd = open(Filename, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd, BUFFER, sizeof(BUFFER))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(BUFFER[i] >= 'A' && BUFFER[i] <= 'Z')
            {
                iCount++;
            }
        }

        memset(BUFFER, '\0', sizeof(BUFFER));
    }

    close(fd);

    return iCount;
}

int main()
{
    char Fname[30] = {'\0'};
    int iRet = 0;

    printf("Enter the File Name :\n");
    scanf("%[^\n]s", Fname);

    iRet = CountCapital(Fname);

        {
        printf("Count of Capital Letters in File : %d\n", iRet);
        }

    return 0;
}