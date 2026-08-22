#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024 //User Defined Macro

int main()
{
  char BUFFER[BUFFER_SIZE]={'\0'};//char array 

  int fd=0;
  int iRet=0;

  fd =open("Programe594.c",O_RDONLY);

  if(fd==-1)
  {
    printf("Unable to open file\n");
    return -1;
  }
  
  while((iRet=read(fd,BUFFER,sizeof(BUFFER)))!=0)
  {
    write(1,BUFFER,iRet);
    memset(BUFFER,'\0',sizeof(BUFFER));

  }
 close(fd);

     return 0;
}