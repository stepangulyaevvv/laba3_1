#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите число: ";
    int _number;
    cin >> _number;
    if ((_number % 2 == 0) and (_number > 99 and _number < 1000)) {
        cout << "Истина";
    }
    else {
        cout << "Ложь";
    }
}
