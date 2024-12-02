
/*Program to remove duplicate letters from word*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i=0,j=1,flag=0,k,l;
    scanf("%s",str);                           //reading the word from user
    l=strlen(str);                             //getting length of string
    while(str[i]!='\0')
    {
        while(str[j+i]!='\0')
        {
            if(str[i]==str[j+i])                  //comparing each character in string
            {
                for(k=j+i;k<=l;k++)                            
                {
                    str[k]=str[k+1];           //shifting every letter towards left from the duplicate letter
                }
                l--;                           //reducing length
                j--;                           //decrementing j
            }
            j++;                                   //incrementing j
        }
       
        i++;                                      //incrementing i
        j=1;                                      //resetting j
    }
    printf("%s",str);                              //printing the string
    return 0;
}