
#include <stdio.h>

int igual(char s1[], char s2[], int i)
{
    int j;
    for (j = 0; s1[i] != '\0'; i++, j++)
    {
        if (s1[i] != s2[j])
            return 0;
    }
    return 1;
}

int sufPref(char s1[], char s2[])
{
    int i, conta = 0;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == s2[0])
        {
            if (igual(s1, s2, i))
            {
                while (s1[i] != '\0')
                {
                    conta++;
                    i++;
                }
            }
        }
    }
    return conta;
}