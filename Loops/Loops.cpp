// Jan Wolski 23.10.2021
//

#include <iostream>

using namespace std;

int zadanie1(int n)// 1 + (1+2) + (1+2+3)+ ... (1+2+...+n) itp
{
    int wynik = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            wynik += j;
        }
    }
    return wynik;
}

void zadanie2()
{
    int a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;

    cout << "A = " << a << "B= " << b << endl;
    cout << "------------Prostokat-------------------" << endl;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "------------Obramowanie-------------------" << endl;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if((j==1)||(j==a)||(i==1)||(i==b)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void zadanie3()
{
    short m;
    cout << "Wybierz miesiac(1-12): ";
    cin >> m;
    switch (m)
    {
    case 1: cout << "Styczen ma 31 dni."; break;
    case 2: cout << "Luty ma 28 dni."; break;
    case 3: cout << "Marzec ma 31 dni."; break;
    case 4: cout << "Kwiecien ma 30 dni."; break;
    case 5: cout << "Maj ma 31 dni."; break;
    case 6: cout << "Czerwiec ma 30 dni."; break;
    case 7: cout << "Lipiec ma 31 dni."; break;
    case 8: cout << "Sierpien ma 31 dni."; break;
    case 9: cout << "Wrzesien ma 30 dni."; break;
    case 10: cout << "Pazdziernik ma 31 dni."; break;
    case 11: cout << "Listopad ma 30 dni."; break;
    case 12: cout << "Grudzien ma 31 dni."; break;
    default: cout << "Niepoprawna liczba! Sprobuj inna."; break;
    }
    switch (m)
    {
    case 1:
    case 2: 
    case 3: cout << "W tym miesiacu jest pochmurnie!"; break;
    case 4: 
    case 5:
    case 6: 
    case 7: 
    case 8: 
    case 9: cout << "W tym miesiacu jest slonecznie!"; break;
    case 10: 
    case 11: 
    case 12: cout << "W tym miesiacu jest pochmurnie!"; break;
    default: cout << "Niepoprawna liczba! Sprobuj inna."; break;
    }
}

int main()
{
    cout << "------- zadanie 1 -------------" << endl;
    int n;
    cout << "Podaj n: ";
    cin >> n;
    cout << zadanie1(n) << endl;
    cout << "------- zadanie 2 -------------" << endl;
    zadanie2();
    cout << "------- zadanie 3 -------------" << endl;
    zadanie3();
}


