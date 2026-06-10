//Accept  character from user and check whether that charater is vowel (a,e,i,o,u) or not .

#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char Cvalue)
{
    if((Cvalue=='a'||Cvalue=='A') ||
       (Cvalue=='e'||Cvalue=='E') ||
       (Cvalue=='i'||Cvalue=='I') ||
       (Cvalue=='o'||Cvalue=='O') ||
       (Cvalue=='u'||Cvalue=='U')) 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    char Cvalue='\0';
    BOOL bRet=FALSE;

    printf("Enter A Character :");
    scanf("%c",&Cvalue);

     

    bRet=CheckVowel(Cvalue);


    if(bRet==TRUE)
    {
        printf("Character is Vowel");
    }
    else
    {
        printf("Character is not Vowel");
    }
    return 0;
}