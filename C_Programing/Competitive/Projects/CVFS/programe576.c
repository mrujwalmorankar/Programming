#include<stdio.h>
#include<fcntl.h>//file control 
#include<unistd.h>//only linux based OS 

int main()
{
    //fd =file discripter//fd mhnje UArea mdhe asleli UDEFT mdhlya aaray chi Index  
    int fd=0;
    
    fd =open("Marvellous.txt",O_RDWR);

    if(fd==-1)
    {
        printf("Unable to Open File");

    }
    else
    {
        printf("File gets Successfully Opened with fd : %d\n",fd);
        write(fd,"Jay Ganesh....",13);
        close(fd);
    }
    return 0;
}

