// B1.cpp
#include "B1.h"

B1::B1(int value) : b1(value) {}

B1::~B1() {}

void B1::show() {
    std::cout << "Тип об'єкта: B1, Значення поля: " << b1 << std::endl;
}
