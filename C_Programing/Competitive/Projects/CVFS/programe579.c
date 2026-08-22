#include<stdio.h>
#include<fcntl.h>//file control 
#include<unistd.h>//only linux based OS 

int main()
{
    //fd =file discripter//fd mhnje UArea mdhe asleli UDEFT mdhlya aaray chi Index  
    int fd=0;
    int iRet=0;
 
    char Data[]="Marvellous Infosystems";
     


                     //Append mule  data maghe jail
    fd =open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd==-1)
    {
        printf("Unable to Open File");

    }
    else
    {
        printf("File gets Successfully Opened with fd : %d\n",fd);
      
        iRet=write(fd,Data,10);
        printf(" %d bytes gets successfully returns\n",iRet);
      
       close(fd);

    }
    return 0;
}

