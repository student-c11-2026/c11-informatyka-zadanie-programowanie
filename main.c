#include <stdio.h>
#include <string.h>
#include "funkcje.h"

#define MAX_TEXT 200
#define MAX_NUMBERS 100

const struct Student student = {
    "Filip",
    "Sałek",
    "I1N 1.2/3"
};

int main(void)
{
    int n, i;
    int tab[MAX_NUMBERS];
    char tekst[MAX_TEXT];
    int licznik[ALPHABET] = {0};

    printf("Imie: %s\n", student.imie);
    printf("Nazwisko: %s\n", student.nazwisko);
    printf("Grupa: %s\n\n", student.grupa);

    printf("Podaj ilosc liczb: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_NUMBERS)
    {
        printf("Bledna ilosc liczb.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Podaj liczbe %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    sortuj_liczby(tab, n);

    printf("\nPosortowane liczby:\n");
    for (i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");

    getchar();
    printf("\nPodaj tekst: ");
    fgets(tekst, MAX_TEXT, stdin);

    tekst[strcspn(tekst, "\n")] = '\0';

    policz_litery(tekst, licznik);

    printf("\nIlosc wystapien liter:\n");
    for (i = 0; i < ALPHABET; i++)
    {
        if (licznik[i] > 0)
            printf("%c : %d\n", 'a' + i, licznik[i]);
    }

    return 0;
}
