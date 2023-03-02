#include "main.h"
char *cap_string(char *s)
{
    int i;
    char prev = ' ';

    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            if (prev == ' ' || prev == '\t' || prev == '\n' ||
                prev == ',' || prev == ';' || prev == '.' ||
                prev == '!' || prev == '?' || prev == '"' ||
                prev == '(' || prev == ')' || prev == '{' || prev == '}')
            {
                s[i] -= 32;
            }
        }
        prev = s[i];
    }
    return s;
}

