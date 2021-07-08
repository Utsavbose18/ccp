#include <stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[50];
    int i=0,l=0;
    printf("\n Enter the  string one: ");
    gets(str1);
    printf("\n Enter the string two: ");
    gets(str2);
    while(str1[l] != '\0')
    {
        l++;
    }
    while(str2[i]!='\0'){
        str1[l]=str2[i];
        i++;
        l++;
    }
    str1[l]='\0';
    printf("\n After appending, the destination string is : ");
    puts(str1);
    printf("\n Length of the concatenated string = %d",l);
    return 0;
}
