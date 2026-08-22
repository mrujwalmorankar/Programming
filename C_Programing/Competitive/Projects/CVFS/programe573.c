#include<stdio.h>
#include<fcntl.h>//file control 

int main()
{
    //fd =file discripter//fd mhnje UArea mdhe asleli UDEFT mdhlya aaray chi Index  
    int fd=0;
    
    fd =creat("Marvellous.txt",0777);

    if(fd==-1)
    {
        printf("Unable to Create File");

    }
    else
    {
        printf("File gets Successfully Created with fd : %d\n",fd);
    }
    return 0;
}

