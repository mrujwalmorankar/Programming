#include<stdio.h>
#include<fcntl.h>//file control 
#include<unistd.h>//only linux based OS 
#include<string.h>


int main()
{
    //fd =file discripter//fd mhnje UArea mdhe asleli UDEFT mdhlya aaray chi Index  
    int fd=0;
    int iRet=0;
 
    char Data[100]={'\0'};


     


                     //Append mule  data maghe jail
    fd =open("Marvellous.txt",O_RDONLY );

    if(fd==-1)
    {
        printf("Unable to Open File");

    }
    else
    {
        printf("File gets Successfully Opened with fd : %d\n",fd);
      
        iRet=read(fd,Data,13);
        printf(" %d bytes gets successfully read\n",iRet);
        printf("Data from file is :%s",Data);
      
       close(fd);

    }
    return 0;
}

