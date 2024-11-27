
/*Program to reverse words in a sentance*/
#include <stdio.h>
#include <string.h>

void reverse(char *s);                      //function prototype

int main()
{
    int i,j=0,k=0;
    char word[20][20],str[30];
    printf("Enter the sentance\n");
    scanf("%[^\n]",str);                               //reading input from user
    for(i=0;i<=strlen(str);i++)                        //getting each word from sentance
    {
        if(str[i]==' ' || str[i]=='\0')               //checking if the character is space or null character
        {
            word[j][k]='\0';                            //storing null at the end to conver to a word
            j++;
            k=0;
        }
        else
        {
            word[j][k]=str[i];                        //storing characters
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        reverse(word[i]);                            //calling function to reverse
    }
}

/*function to reverse a string */

void reverse(char *s)              
{
    int l=strlen(s),i=0;
    char temp;
    for(i=0;i<l/2;i++)
    {
        temp=s[i];                       //storing first character in temp
        s[i]=s[l-i-1];                   //storing last character in first index
        s[l-i-1]=temp;                   //storing first character in last index
    }
    printf("%s ",s);
}
