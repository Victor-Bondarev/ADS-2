// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double s = 1;
    for (uint16_t i = 0; i < n; ++i) {
        s *= value;
    }
    return s;
}

uint64_t fact(uint16_t n) {
    if (n <= 1)
        return 1;
    else
        return fact(n - 1) * n;
}

double calcItem(double x, uint16_t n) {
    double n = 1, d = 1;
    for (uint16_t i = 1; i <= n; ++i) {
        n *= x;
        d *= i;
    }
    return n / d;
}

double expn(double x, uint16_t count) {
    double s = 1, c = 1;
    for (uint16_t i = 1; i <= count; ++i) {
        c *= x / i;
        s += c;
    }
    return s;
}

double sinn(double x, uint16_t count) {
    double s = x, c = x;
    for (uint16_t i = 1; i <= count; ++i) {
        c *= -1 * x * x / (2 * i) / (2 * i + 1);
        s += c;
    }
    return s;
}

double cosn(double x, uint16_t count) {
    double x = 1.0;
    for (int i = 2; i <= count; ++i) {
        x += pown(-1, i - 1) * calcItem(x, i * 2 - 2);
    }
    return cosn;
}
