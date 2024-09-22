#include <iostream>

int main() {
    // Объявление переменных для основания и высоты
    double base, height, area;

    // Запрос у пользователя ввести основание треугольника
    std::cout << "Введите основание треугольника: ";
    while (!(std::cin >> base) || base <= 0) {
        std::cout << "Ошибка ввода! Пожалуйста, введите положительное число для основания: ";
        std::cin.clear(); // Очищаем буфер ввода
        std::cin.ignore(10000, '\n'); // Игнорируем некорректные данные в буфере
    }

    // Запрос у пользователя ввести высоту треугольника
    std::cout << "Введите высоту треугольника: ";
    while (!(std::cin >> height) || height <= 0) {
        std::cout << "Ошибка ввода! Пожалуйста, введите положительное число для высоты: ";
        std::cin.clear(); // Очищаем буфер ввода
        std::cin.ignore(10000, '\n'); // Игнорируем некорректные данные в буфере
    }

    // Вычисление площади треугольника
    area = 0.5 * base * height;

    // Вывод результата
    std::cout << "Площадь треугольника составляет: " << area << std::endl;

    return 0;
}