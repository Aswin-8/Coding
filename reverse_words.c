
/*Program to reverse words in a sentance*/
#include <stdio.h>
#include <string.h>

void reverse(char *,int );

int main()
{
    int i,l=0;
    char str[30],temp;
    printf("Enter the sentance\n");
    scanf("%[^\n]",str);                               //reading input from user
    for(i=0;i<=strlen(str);i++)                        //getting each word from sentance
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            reverse(&str[i-l],l);                     //passing string position and word length
            l=0;                                      //updating length to zero
        }
        else
        {
            l++;                                      //incrementing length
        }
    } 
    printf("%s ",str);                                //printing reverse string
}


/*Function to reverse the word */
void reverse (char *s,int l)
{
    char temp;
    int i;
    for(i=0;i<l/2;i++)
    {
        temp=s[i];                                       //stroring first character in temp
        s[i]=s[l-i-1];                                   //stroring last character in first position
        s[l-i-1]=temp;                                   //storing first character in last position
    }
}

