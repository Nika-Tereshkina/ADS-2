// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double res = 1.0;
    for (uint16_t i = 0; i < n; i++) {
        res *= value;
        }
    return res;
}

uint64_t fact(uint16_t n) {
    uint64_t res = 1;
    for (uint16_t i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double summa = 1.0;
    for (uint16_t n = 1; n <= count; n++) {
        summa += pown(x, n) / fact(n);
    }
    return summa;
}

double sinn(double x, uint16_t count) {
    double summa = 0.0;
    for (uint16_t n = 0; n < count; n ++) {
        summa += ((n % 2 == 0) ? 1 : -1) * pown(x, 2 * n + 1) / fact(2 * n + 1);
    }
    return summa;
}

double cosn(double x, uint16_t count) {
    double summa = 1.0;
    double suw = -1.0;
    for (uint16_t n = 1; n <= count; n++) {
    double res = suw * pown(x, 2 * n) / fact(2 * n);
    summa += res;
    suw *= -1.0;
    }
    return summa;
}
