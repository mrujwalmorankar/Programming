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
        printf("\n->File gets Successfully Opened with fd : %d\n",fd);
      
        iRet=read(fd,Data,13);
        printf("\n-> %d bytes gets successfully read\n",iRet);
        printf("\n->Data from file is :%s\n",Data);
    
        /*-Buffer clean*///memset function is used for cleaning buffer 
        memset(Data,'\0',sizeof(Data));
        
        iRet=read(fd,Data,3);
        printf("\n-> %d bytes gets successfully read\n",iRet);
        printf("\n->Data from file is :%s\n",Data);
      
       close(fd);

    }
    return 0;
}

