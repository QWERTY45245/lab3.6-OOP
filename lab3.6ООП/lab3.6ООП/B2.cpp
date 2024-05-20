// B2.cpp
#include "B2.h"

B2::B2(int value) : b2(value) {}

B2::~B2() {}

void B2::show() {
    std::cout << "Тип об'єкта: B2, Значення поля: " << b2 << std::endl;
}
