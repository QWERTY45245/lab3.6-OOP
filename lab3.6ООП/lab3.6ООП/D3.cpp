// D3.cpp
#include "D3.h"

D3::D3(int valueB1, int valueD1, int valueD2, int valueD3) : D2(valueB1, valueD1, valueD2), d3(valueD3) {}

D3::~D3() {}

void D3::show() {
    // ������� �����: ������� show() ����� D1 �� D2 �� ������ ������� ����� �������� ������������
    std::cout << "��� ��'����: D3, �������� ���� d3: " << d3 << std::endl;
}
