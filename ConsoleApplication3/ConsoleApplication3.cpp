#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Введите любое число: ";
    cin >> number;
    if (number % 2 != 0 and number > 99 and number < 999) {
        cout << "Истина";
    }
    else {
        cout << "Ложь";
    }
}
