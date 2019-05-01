#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady." << endl;
    Sleep(3000); // czekaj 3 s

    cout << endl;
    srand(time(NULL)); // inicjowanie randomizera

    for (int i=1; i<=6; i++) // petla for dla 6 liczb
    {
        liczba = rand()%49+1;
        Sleep(1000);
        cout << liczba << "\a" << endl;
    }

    return 0;
}
