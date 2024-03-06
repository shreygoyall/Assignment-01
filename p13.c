#include <stdio.h>
#include <string.h>

int areAnagrams(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) 
    {
        return 0; 
    }

    for (int i = 0; i < len1; i++) {
        int found = 0;
        for (int j = 0; j < len2; j++) 
        {
            if (str1[i] == str2[j]) 
            {
                found = 1;
                str2[j] = ' '; 
                break;
            }
        }
        
        if (!found)
        {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
    {
        printf("The strings are anagrams.\n");
    } 
    else 
    {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}