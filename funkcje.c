#include "funkcje.h"
#include <ctype.h>

void sortuj_liczby(int *tab, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

void policz_litery(const char *tekst, int licznik[])
{
    int i;
    char c;

    for (i = 0; tekst[i] != '\0'; i++)
    {
        if (isalpha((unsigned char)tekst[i]))
        {
            c = tolower((unsigned char)tekst[i]);
            licznik[c - 'a']++;
        }
    }
}
