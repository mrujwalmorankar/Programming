#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

// BUFFER म्हणजे रिकामे भांडे

#define BUFFER_SIZE 100

int main()
{
    int fd = 0;
    int iRet = 0;

    char Data[BUFFER_SIZE] = {'\0'};

    fd = open("Marvellous.txt", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        // 0 = Starting
        // 1 = Current
        // 2 = End

        lseek(fd, 5, 0);

        iRet = read(fd, Data, 10);

        Data[iRet] = '\0';

        printf("\n%d Bytes gets Successfully Read\n", iRet);
        printf("Data from file is : %s\n", Data);

        ////////////////////////////////////////////////////////////////

        lseek(fd, 5, 1);

        iRet = read(fd, Data, 10);

        Data[iRet] = '\0';

        printf("\n%d Bytes gets Successfully Read\n", iRet);
        printf("Data from file is : %s\n", Data);

        close(fd);
    }

    return 0;
}