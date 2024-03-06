#include <stdio.h>
#include <string.h>

void insertSubstring(char str[], char substr[], int index) 
{
    int len_str = strlen(str);
    int len_substr = strlen(substr);

    for (int i = len_str - 1; i >= index; i--) 
    {
        str[i + len_substr] = str[i];
    }

    for (int i = 0; i < len_substr; i++) 
    {
        str[index + i] = substr[i];
    }
}

int main() 
{
    char str[100], substr[100];
    int index;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a substring: ");
    scanf("%s", substr);

    printf("Enter the index to insert the substring: ");
    scanf("%d", &index);

    insertSubstring(str, substr, index);

    printf("Resulting string: %s\n", str);

    return 0;
}