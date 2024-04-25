#include "Computer.h"

int main()
{
    int N = 5;
    Computer* arr = new Computer[N]
    {
        {"HP", 1.2, 6, false, 20'000},
        {"Acer", 3.2, 8, true, 15'000},
        {"Asus", 2.4, 16, false, 45'000},
        {"Dell", 3.2, 8, true, 17'000},
        {"Apple", 3.2, 32, false, 78'000}
    };

    for (int i = 0; i < N; i++)
    {
        arr[i].showInfo();
    }

    cout << "=====================================\n\n";
    int amount = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i].RAM >= 10) {
            arr[i].showInfo();
            amount++;
        }
    }
    cout << "Amount: " << amount << endl;

}


