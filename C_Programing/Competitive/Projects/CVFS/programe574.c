#include<stdio.h>
#include<fcntl.h>//file control 

int main()
{
    //fd =file discripter//fd mhnje UArea mdhe asleli UDEFT mdhlya aaray chi Index  
    int fd=0;
    
    fd =open("Marvellous.txt",O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to Open File");

    }
    else
    {
        printf("File gets Successfully Open with fd : %d\n",fd);
    }
    return 0;
}

