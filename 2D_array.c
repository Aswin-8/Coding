/*Replacing each element of 2D array with 5th prime number starting from the corresponding array element*/

#include <stdio.h>

void replace (int m, int n, int a[m][n]);          //function prototype
int main()
{
    int row,col,i,j;
    printf("Enter number of rows\n");
    scanf("%d",&row);               
    printf("Enter number of cols\n");                //reading input from user
    scanf("%d",&col);
    int a[row][col];                                //array declaration
    printf("Enter the elements\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);                        //reading array elements from user
        }
    }
    replace(row,col,a);                                  //calling the function
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);                         //printing updated array value
        }
        printf("\n");
    }
}


void replace (int m, int n, int (*a)[n])
{
    int i,j,count=0,k,num,flag=0,val;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            count=0;
            val=a[i][j];
           while(count!=5)
           {
                num=2;
                flag=0;
                val++;
                for(k=val;num<=k/2;num++)
                {
                    if(k%num==0)                       //checking if the number is having factors
                    {
                            flag=1;
                            break;
                    }
                }
                if(flag==0 && val!=1)
                {
                    count++;                          //incrementing count
                }
                if(count==5)
                {
                    a[i][j]=k;  
                    break;  
                } 
           }      
        }
    }
}

