// D3.cpp
#include "D3.h"

D3::D3(int valueB1, int valueD1, int valueD2, int valueD3) : D2(valueB1, valueD1, valueD2), d3(valueD3) {}

D3::~D3() {}

void D3::show() {
    // Зверніть увагу: функції show() класів D1 та D2 не будуть доступні через приватне успадкування
    std::cout << "Тип об'єкта: D3, Значення поля d3: " << d3 << std::endl;
}
