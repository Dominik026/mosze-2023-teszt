#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; /*Helytelen változónév: NELEMENTS -> N_ELEMENTS*/ /*Hiányzó memóriadeallokálás: Az int *b = new int[N_ELEMENTS]; használatakor a delete[] b; sor hiányzik, amely felszabadítaná a lefoglalt memóriát. Javítás: A végén hozzáadjuk a delete[] b; sort a kód végére.*/
    std::cout << '1-100 ertekek duplazasa' << std::endl; /*Hiányzó pontosvesszők: std::cout << '1-100 ertekek duplazasa'*/
    for (int i = 0; i < N_ELEMENTS; i++) /*Hiányzó feltételek: Az első for ciklusban (int i = 0;) helytelen, mivel nem tartalmaz ciklusfeltételt és léptetést (i < N_ELEMENTS; i++).*/
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) /*A második for ciklusban a feltétel for (int i = 0; i; i++) hibás, mivel i; logikailag hamis, ezért a ciklus nem fut le. Helyes feltétel: (int i = 0; i < N_ELEMENTS; i++)*/
    {
        std::cout << "Ertek:" << b[i] << std::endl; /*Hiányzó pontosvesszők: std::cout << "Ertek:"*/
    }    
    std::cout << "Atlag szamitasa: " << std::endl; 
    int atlag = 0; /*Inicializálatlan változó: Az int atlag; változó nincs inicializálva, de később számításoknál használjuk. atlag értékét 0-ra kellene állítani kezdetben. Javítás: int atlag = 0;*/
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] ; /*Hiányzó pontosvesszők:   atlag += b[i]*/
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;
    return 0;

    std::cout << "Itt járt a Cserók" << std:endl;
}
