#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024 // User Defined Macro

void DisplayFileInformation(char Filename[])
{
    struct stat sobj;

    stat(Filename, &sobj);

    printf("Filename : %s\n", Filename);
    printf("Inode no : %lld\n", sobj.st_ino);
    printf("File Size : %d bytes\n", sobj.st_size);
  
  

    return;
}

int main()
{
    char Fname[30] = {'\0'};

    printf("Enter the File Name :\n");
    scanf("%[^\n]s", Fname);

    DisplayFileInformation(Fname);

    return 0;
}