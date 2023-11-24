#include <iostream>
#include <cmath>
using namespace std;

// Функция для сравнения двух чисел
void compareNumbers(int first_number, int second_number) {
    cout << "Result: ";
    if (first_number > second_number) {
        cout << first_number << ", " << second_number;
    } else if (first_number < second_number) {
        cout << second_number << ", " << first_number;
    } else {
        cout << "first number = second number = " << first_number;
    }
    cout << endl << endl;
}

// Функция для проверки принадлежности точки к указанной области
void checkPointInArea(double x, double y) {
    double radius_squared = 8.0;  // Радиус окружности в квадрате

    if ((0 <= x && x <= y && 0 <= y && y <= (-x + 4) && pow(x - 2, 2) + pow(y - 2, 2) <= radius_squared) ||
        (0 <= x && y <= 0 && x <= 4 && pow(x - 2, 2) + pow(y - 2, 2) <= radius_squared)) {
        cout << "The point belongs to the specified area." << endl;
    } else {
        cout << "The point does not belong to the specified area." << endl;
    }
}

int main() {
    cout << "TASK #8" << endl;
    int first_number, second_number;
    cout << "Enter first number: ";
    cin >> first_number;
    cout << "Enter second number: ";
    cin >> second_number;

    // Вызов функции для сравнения чисел
    compareNumbers(first_number, second_number);

    // Координаты точки
    double x, y;

    // Ввод координат точки
    cout << "TASK #36" << endl << "Enter point coordinates (x y): ";
    cin >> x >> y;

    // Вызов функции для проверки принадлежности точки к области
    checkPointInArea(x, y);

    return 0;
}