#include <stdio.h>
#include "matrix.h"

Matrix newMatrix(int a, int b, int c, int d) {
    Matrix mtrx;
    mtrx.a = a;
    mtrx.b = b;
    mtrx.c = c;
    mtrx.d = d;
    return mtrx;
}

void printMatrix(Matrix m) {
    printf("[%d %d]\n[%d %d]\n", m.a, m.b, m.c, m.d);
}

Matrix add(Matrix m1, Matrix m2) {
    Matrix mtrx = newMatrix(m1.a+m2.a, m1.b+m2.b, m1.c+m2.c, m1.d+m2.d);
    return mtrx;
}

Matrix subtract(Matrix m1, Matrix m2) {
    Matrix mtrx = newMatrix(m1.a-m2.a, m1.b-m2.b, m1.c-m2.c, m1.d-m2.d);
    return mtrx;
}

void transpose(Matrix *m) {
    int tmp = m->b;
    m->b = m->c;
    m->c = tmp;
}

int determinant(Matrix m) {
    return m.a*m.d - m.c*m.b;
}