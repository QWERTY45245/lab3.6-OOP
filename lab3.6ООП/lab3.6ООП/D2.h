// D2.h
#ifndef D2_H
#define D2_H
#include "D1.h"

class D2 : private D1 {
public:
    int d2;
    D2(int valueB1, int valueD1, int valueD2);
    ~D2();
    void show() override;
};

#endif // D2_H
