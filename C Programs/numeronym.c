#include <stdio.h>
#include <string.h>
#include <ctype.h>

//#include "Numeronym.h"

void printNumeronym(char *str);
void printShortenedSentence(char *str);

void printNumeronym(char *str)
{
    int strLength = strlen(str);
    if (strLength >= 9)
    {
        printf("%s -> %c%d%c\n", str, str[0], strLength - 2, str[strLength-1]);
    }
    else
    {
        printf("%s (no change)\n", str);
    }
}

void printShortenedSentence(char *str)
{
    int strLength = strlen(str);
    int i, m = 0;
    int j = 0;
    for (i = 0; i <= strLength; i++)
    {
        while (isalpha(str[i]))
        {
            i++;
        }
        if (i - j >= 9)
        {
            printf("%c%d%c ", str[j], (i) - (j) - 2, str[i-1]);
        }
        else
        {
            for (j = m; j <= i; j++)
            {
                printf("%c", str[j]);
            }
        }
        i++;
        j = i;
        m = i;
        i--;
    }
    
}
//int argc, char **argx
int main()
{
    char *str = {"send this DATa to the iNtErNaTiOnAlIzAtIoN team for pRoCeSsInG"};

    printShortenedSentence(str);
}