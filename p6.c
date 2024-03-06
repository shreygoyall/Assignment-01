#include <stdio.h>

int main() 
{
    char str[1000];
    printf("Enter a string: ");
    gets(str);

    int i = 0, j = 0;
    while (str[i]) 
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') 
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';

    printf("String after removing whitespaces: %s\n", str);
    
    return 0;
}