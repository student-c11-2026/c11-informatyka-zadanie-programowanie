#ifndef FUNKCJE_H
#define FUNKCJE_H

#define ALPHABET 26

struct Student
{
    const char *imie;
    const char *nazwisko;
    const char *grupa;
};

void sortuj_liczby(int *tab, int n);
void policz_litery(const char *tekst, int licznik[]);

#endif
