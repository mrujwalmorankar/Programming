#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
 

 
#define BUFFER_SIZE 100

int main()
{

   char Buffer[BUFFER_SIZE]={'\0'};

  int iRet=0,fd=0;

   fd=open("Marvellous.txt",O_RDONLY);
  while((iRet=read(fd,Buffer,size_of(Buffer)))!=0)
  {
     printf("%s\n",Buffer);
     memset(Buffer,'\0',sizeof(Buffer));
    
  }



    return 0;
}

