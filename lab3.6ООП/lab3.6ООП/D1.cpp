// D1.cpp
#include "D1.h"

D1::D1(int valueB1, int valueD1) : B1(valueB1), d1(valueD1) {}

D1::~D1() {}

void D1::show() {
    B1::show();
    std::cout << "Тип об'єкта: D1, Значення поля d1: " << d1 << std::endl;
}
