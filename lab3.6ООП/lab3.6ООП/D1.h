// D1.h
#ifndef D1_H
#define D1_H
#include "B1.h"

class D1 : public B1 {
public:
    int d1;
    D1(int valueB1, int valueD1);
    ~D1();
    void show() override;
};

#endif // D1_H
