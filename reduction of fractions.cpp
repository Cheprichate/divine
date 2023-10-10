#include <iostream>
int lower = 0;
int height = 63;
int middle;
char ans;

int main()
{
    setlocale(LC_ALL, "Russian");

    while (lower < height)
    {
        middle = (height + lower) / 2;
        do
        {
            std::cout << "Число меньше или равно " << middle << " ? (y/n)";
            std::cin >> ans;
        } while (ans != 'y' && ans != 'n');

        if (ans == 'y')
            height = middle;
        else
            lower = middle + 1;
        std::cout << "(" << lower << " : " << height << ")\n";
    }

    std::cout << "Это ваш номер  " << height << "\n";
}