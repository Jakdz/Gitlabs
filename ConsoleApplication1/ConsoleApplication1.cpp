// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>

void przyklad1()
{
    int x, y;

    std::cout << "Program zamieniajacy ulamki zwykle na dziesietne" << std::endl;

    std::cout << "Podaj licznik ulamka: ";
    std::cin >> x;
    std::cout << "Podaj mianownik ulamka: ";
    std::cin >> y;

    std::cout << x << " / " << y << " = " << std::setprecision(5) << 1.00000 * x / y;
}

void przykladlekcyjny()
{
    std::cout << "Program pobierajacy z klawiatury dwie liczby calkowite i wyswietlajacy na ekranie wynik pieciu " << std::endl;

    /*int x, y;
    std::cout << " x = ";
    std::cin >> x;
    std::cout << " y = ";
    std::cin >> y;

    std::cout << "x + y = " << x + y << std::endl;
    if (y = 0)
    {
        std::cout << "x / y = " << x / y << std::endl;
        std::cout << "x / y = " << 1.0 * x / y << std::endl;
    }
    else
    {
        std::cout << "Nie mozna dzielic przez zero";
    }
    /*

    //Czestym bledem jest

    /*
     if (y = 0) <---- tu blad powinno być (y == 0 )
    {
        std::cout << "x / y = " << x / y << std::endl;
        std::cout << "x / y = " << 1.0 * x / y << std::endl;
    }
    else
    {
        std::cout << "Nie mozna dzielic przez zero";
    }

    Kompiluje sie ale jako ze wartosc y

    */
    //f10 aby rozpoczac
    //f9 break point
    //set precision, setw  
    //std::cout << " " << std::endl;
}

void przyklad2()
{
    std::cout << "Program pobierajacy z klawiatury dwie liczby calkowite i wyswietlajacy na ekranie wynik pieciu " << std::endl;

    int a, b;
    std::cout << "Podaj pierwsza liczbe calkowita a: ";
    std::cin >> a;
    std::cout << "Podaj druga liczbe calkowita b: ";
    std::cin >> b;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    std::cout << a << " % " << b << " = " << a % b << std::endl;


}

int main()
{
    przyklad2();

}
