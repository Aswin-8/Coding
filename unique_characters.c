
/*program to check the characters are unique in a word*/

#include <stdio.h>

int main()
{
    char str[20];
    int i=0,j=0,flag=0;
    scanf("%s",str);                               //reading the word from user
    while(str[i]!='\0')
    {
        while(str[j+i+1]!='\0')
        {
            if(str[i]==str[j+i+1])                  //comparing each character in string
            {
                flag=1;                            //if found repeating updating flag
                break;                             //exiting from inner loop if characters are repeating
            }
            j++;                                   //incrementing j
        }
        if(flag)                                  //if flag is true exiting from outer loop
            break;
        i++;                                      //incrementing i
        j=0;                                      //resetting j
    }
    flag?printf("False"):printf("True");
    return 0;
}
