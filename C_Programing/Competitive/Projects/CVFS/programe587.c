#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
 
 //BUFFER mhnje rikama bhand
 
#define BUFFER_SIZE 100

int main()
{
    int fd=0;
    int iRet=0;
 
    char Data[ BUFFER_SIZE ]={'\0'};
 

                         
    fd =open("Marvellous.txt",O_RDONLY );

    if(fd==-1)
    {
        printf("Unable to Open File");

    }
    else
    {
        //0=starting //1 =Current//2=end
        lseek(fd,5,0);
        iRet=(Data,10);
        printf("\n %d Bytes gets Successfully Read\n",iRet);
        printf("Data from file is %s\n",Data);
         
        close(fd);

    }
    return 0;
}

