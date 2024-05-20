// main.cpp
#include "B1.h"
#include "B2.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include<Windows.h>
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    B1 b1_obj(10);
    B2 b2_obj(20);
    D1 d1_obj(30, 40);
    D2 d2_obj(50, 60, 70);
    D3 d3_obj(80, 90, 100, 110);

    b1_obj.show();
    b2_obj.show();
    // d1_obj.show(); // Недоступно через приватне успадкування
    // d2_obj.show(); // Недоступно через приватне успадкування
    d3_obj.show();

    std::cout << "Розмір об'єкта b1_obj: " << sizeof(b1_obj) << std::endl;
    std::cout << "Розмір об'єкта b2_obj: " << sizeof(b2_obj) << std::endl;
    std::cout << "Розмір об'єкта d1_obj: " << sizeof(d1_obj) << std::endl;
    std::cout << "Розмір об'єкта d2_obj: " << sizeof(d2_obj) << std::endl;
    std::cout << "Розмір об'єкта d3_obj: " << sizeof(d3_obj) << std::endl;

    return 0;
}
