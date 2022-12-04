// Tablicowanie.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    
    int tabFunkcji[63][6];
    unsigned short wspolczynnikA = 0;
    signed short wspolczynnikB = 0;
    signed short wspolczynnikC = 0;
    unsigned short krok = 3;
    int wartosFunkcji = 0;
    unsigned short tabIndex = 0;
    
    srand(time(0));
    
    cout << "Program oblicza wartosci funkcji: a*x*x+b*x+c\n";
    cout << "argument zmienia sie w zakresie -10..10\n";
    cout << "a liczba loslwa z zakresu 1..5\n";
    cout << "b liczba loslwa z zakresu -7..7\n";
    cout << "c liczba loslwa z zakresu -10..10\n";
    cout << "Ilosc krokow " << krok << "\n";

    for (unsigned short i = 0; i < krok; i++)
    {
        // Zakres 1...5
        wspolczynnikA = rand() % 5 + 1;

        // Zakres -7...7
        wspolczynnikB = (rand() % 14 + 1) - 7;
        
        // Zakres -10...10
        wspolczynnikC = (rand() % 20 + 1) - 10;

        cout << "Krok: " << i + 1 << "\n";
        cout << "Wylosowane wspolczynniki a: " << wspolczynnikA << " b: " << wspolczynnikB << " c: " << wspolczynnikC << "\n";

        for (short x = - 10; x <= 10; x++)
        {
            wartosFunkcji = wspolczynnikA * x * x + wspolczynnikB * x + wspolczynnikC;
            //cout << "x: " << x << " wartosc funkcji: " << wartosFunkcji << "\n";
  
            tabFunkcji[tabIndex][0] = i + 1; // numer kroku
            tabFunkcji[tabIndex][1] = x; // wartosc argumentu
            tabFunkcji[tabIndex][2] = wspolczynnikA; // wartosc wspolczynnika A
            tabFunkcji[tabIndex][3] = wspolczynnikB; // wartosc wspolczynnika B
            tabFunkcji[tabIndex][4] = wspolczynnikC; // wartosc wspolczynnika C
            tabFunkcji[tabIndex][5] = wartosFunkcji; // wartosc wspolczynnika C

            tabIndex++;
          
        }
    }

    cout << "Wyswietlenie tablicy zawierajacej wartosci funkcji dla odpowiednich krokow, argumentow oraz wspolczynnikow \n";
    // Wyświetlenie wynikow
    for (unsigned short r = 0; r < tabIndex; r++)
    {
        cout
            << "Krok: " << tabFunkcji[r][0]
            << " Argument x: " << tabFunkcji[r][1]
            << " Wspolczynnik a: " << tabFunkcji[r][2]
            << " Wspolczynnik b: " << tabFunkcji[r][3]
            << " Wspolczynnik c " << tabFunkcji[r][4]
            << " Wartosc funkcji: " << tabFunkcji[r][5]
            << "\n";
    }
    

}

