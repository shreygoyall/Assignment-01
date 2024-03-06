#include <stdio.h>

int main() 
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(i == 0 || (str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z')) 
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
    }

    printf("Capitalized string: %s", str);

    return 0;
}