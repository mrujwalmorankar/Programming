#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 100

int main()
{
    char Buffer[BUFFER_SIZE] = {'\0'};

    int iRet = 0;
    int fd = 0;

    fd = open("Marvellous.txt", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        printf("%s", Buffer);

        memset(Buffer, '\0', sizeof(Buffer));
    }

    close(fd);

    return 0;
}