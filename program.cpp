#include <cstdio>       // std::printf
#include <iostream>     // std::cout
#include <new>          // std::nothrow
//#include <string>

//using namespace std;

int main(int argc,char **argv)
{
    /*	for(int i=0;i<argc;++i)
            puts(argv[i]);

        int x = 2, y = 3, z;
        z = (x, x += y, y = ++x + y++);
        std::printf("Zmienne x,y,z wynosza %d, %d, %d",x,y,z);

        int* wskaznik = new(std::nothrow) int;
        *wskaznik = 15;
        std::printf("\nAdres   &wskaznik wynosi %x",&wskaznik);
        std::printf("\nAdres    wskaznik wynosi %x",wskaznik);
        std::printf("\nZmienna *wskaznik wynosi %d\n",*wskaznik);
    //    delete wskaznik;

        int* wskaznik1 = new(std::nothrow) int;
        *wskaznik1 = 100;
        std::printf("\nAdres   &wskaznik1 wynosi %x",&wskaznik1);
        std::printf("\nAdres    wskaznik1 wynosi %x",wskaznik1);
        std::printf("\nZmienna *wskaznik1 wynosi %d\n",*wskaznik1);
     //   delete wskaznik1;

        float* wskaznik2 = new(std::nothrow) float;
        *wskaznik2 = 19.99;
        std::printf("\nAdres   &wskaznik2 wynosi %x",&wskaznik2);
        std::printf("\nAdres    wskaznik2 wynosi %x",wskaznik2);
        std::printf("\nZmienna *wskaznik2 wynosi %f\n",*wskaznik2);

        delete wskaznik;
        delete wskaznik1;
        delete wskaznik2;

     */
    const size_t rozmiar = 1000 * 10000000;
    std::cout << "Attempting to allocate " << rozmiar << " Bytes...";
    char* p = new (std::nothrow) char [rozmiar];    // wersja bez zglaszania wyjatku - zwraca w przypadku bledu null
//    char* p = new () char [rozmiar];                // wersja z wyjatkiem

    if (!p) std::cout << "Failed!\n";
    else
    {
        std::cout << "Succeeded!\n";
        delete[] p;
    }
    return 0;
}
