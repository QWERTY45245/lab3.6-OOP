// D2.cpp
#include "D2.h"

D2::D2(int valueB1, int valueD1, int valueD2) : D1(valueB1, valueD1), d2(valueD2) {}

D2::~D2() {}

void D2::show() {
    // Зверніть увагу: функція show() класу D1 не буде доступна через приватне успадкування
    std::cout << "Тип об'єкта: D2, Значення поля d2: " << d2 << std::endl;
}
