#include <iostream>
using namespace std;

int main() {
    int broj = 3415;  // Deklaracija i inicijalizacija varijable "num" sa vrijednoscu 3415
    broj += 123;     // Dodavanje vrijednosti 123 varijabli "num"
    //broj = broj + 123; ---> isto
    broj -= 33;      // Oduzimanje vrijednosti 33 od varijable "num"
    //broj = broj - 33;
    broj *= 31;      // Množenje varijable "num" sa 31
    broj /= 74;      // Djeljenje varijable "num" sa 74
    broj %= 14;      // Racunanje ostataka (modula) pri djeljenju varijable "num" sa 14
    broj += (broj % 2 == 0) ? 100 : 50;  // Dodavanje 100 ili 50 zavisno od toga da li je "num" paran ili neparan
    broj *= 43;      // Množenje varijable "num" sa 43
    broj /= 23;      // Djeljenje varijable "num" sa 23
    broj %= (broj % 2 == 0) ? 10 : 20;  // Racunanje ostataka (modula) pri djeljenju varijable "num" sa 10 ili 20, zavisno od parnosti "num"
    cout << broj << endl;  // Ispis vrijednosti varijable "num" na ekran

    system("pause>0");
    return 0;
}
