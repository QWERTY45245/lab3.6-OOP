// D3.h
#ifndef D3_H
#define D3_H
#include "D2.h"

class D3 : public D2 {
public:
    int d3;
    D3(int valueB1, int valueD1, int valueD2, int valueD3);
    ~D3();
    void show() override;
};

#endif // D3_H
