#include <stdio.h>
#include <ctype.h> 
int main()
{
    char str[100]; 
    char *ptr = str; 
    int vowels = 0, consonants = 0; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    while (*ptr != '\0')
    {
        char ch = tolower(*ptr); 

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            } 
            else
            {
                consonants++;
            }
        }
        ptr++; 
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants - 1); 

    return 0;
}