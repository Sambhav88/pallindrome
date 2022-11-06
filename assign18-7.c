#include<stdio.h>

int palidrome(char[]); //declaration of palindrome function.
int main()
{
    char sti[200];

    printf("Enter any string\n");
    fgets(sti,200,stdin);

    int flag = palidrome(sti); //calling function
    if(flag == 1)
    {
        printf("Yes Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}

int palidrome(char str[])
{
   int i=0,j,flag=0; // declaration of variables.

    j = strlen(str); // calculating length of string.
    j = j-1;

    while(i<=j/2)
    {
       if(str[i] == str[j-1-i])
        {
            flag++;
        }
         i++;
    }

    if(i == flag)
       return 1;
    else
        return 0;
}

