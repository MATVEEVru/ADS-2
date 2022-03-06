// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  if (n == 1) {
    return value;
  } else if (n == 0) {
    return 1;
  }
  return value * pown(value, --n);
}

uint64_t fact(uint16_t n) {
   if (n <= 1) {
    return 1;
  }
  return n * fact(n - 1);
}

double calcItem(double x, uint16_t n) {
 return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
double sum = 0;
  for (uint16_t i = 0, n = 0; i <= count; ++i, ++n) {
    sum += calcItem(x, n);
  }
  return sum;
}

double sinn(double x, uint16_t count) {
long double sin = 0;
    int n = 1;
    for (uint64_t i = 1; i <= count; i++) {
        if (i % 2 != 0) {
            sin = sin + (pown(x, n) / fact(n));
        }
        else {
            sin = sin - (pown(x, n) / fact(n);
        }
        n = n + 2;
    }
}

double cosn(double x, uint16_t count) {
double cos = 1;
    int n = 2;
    for (uint64_t i = 1; i <= count; i++) {
        for (uint64_t i = 1; i < count; i++) {
            if (i % 2 != 0) {
                cos = cos - (pown(x, n) / fact(n));
            }
            else {
                cos = cos + (pown(x, n) / fact(n));
            }
            n = n + 2;
        }
        return cos;
    }
}
