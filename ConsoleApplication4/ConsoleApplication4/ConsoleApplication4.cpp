#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Задание 1. Введите стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b <= c ||  a + c <= b || b + c <= a)
        cout << "Не треугольник\n";
    else if (a == b && b == c)
        cout << "Равносторонний\n";
    else if (a == b || b == c || a == c)
        cout << "Равнобедренный\n";
    else
        cout << "Разносторонний\n";

    double x, y, z;
    cout << "\nЗадание 2. Введите a, b, c для квадратного уравнения: ";
    cin >> x >> y >> z;

    double D = y * y - 4 * x * z;

    if (D < 0)
        cout << "Нет действительных корней\n";
    else if (D == 0)
        cout << "Один корень: " << -y / (2 * x) << "\n";
    else {
        double x1 = (-y + sqrt(D)) / (2 * x);
        double x2 = (-y - sqrt(D)) / (2 * x);
        cout << "Два корня: " << x1 << " и " << x2 << "\n";
    }

    int m, d;
    cout << "\nЗадание 4. Введите месяц и день: ";
    cin >> m >> d;

    string season;
    if (m == 12 ||m == 1||m == 2) season = "Зима";
    else if (m >= 3 && m <= 5) season = "Весна";
    else if (m >= 6 && m <= 8) season = "Лето";
    else season = "Осень";

    int days = 31;
    if (m == 4||m == 6||m == 9 || m == 11) days = 30;
    if (m == 2) days = 28;

    cout << season << ". ";
    if (d == days) cout << "Это последний день месяца.\n";
    else cout << "Это не последний день месяца.\n";

    return 0;
}