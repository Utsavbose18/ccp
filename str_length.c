
#include <stdio.h>
int main()
{
    char str1[100], str2[50];
    int i=0, j=0;
    printf("\n Enter the  string : ");
    gets(str1);
    printf("\n Entered string = ");
    puts(str1);
    while(str1[i] != '\0')
    {   str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    printf("\n String after copying = ");
    puts(str2);
    printf("\n Length of the string = %d",i);
    return 0;
}
