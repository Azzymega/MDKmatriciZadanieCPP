
#include "Matrix.h"
#include <iostream>
using namespace std;

int main()
{
    Matrix* matrix = new Matrix(2, 2);
    Matrix* matrixSecond = new Matrix(2, 2);
    matrix->SetMatrixNumber(1, 1, 1);
    matrix->SetMatrixNumber(2, 1, 2);
    matrix->SetMatrixNumber(3, 2, 1);
    matrix->SetMatrixNumber(4, 2, 2);
    matrixSecond->SetMatrixNumber(5, 1, 1);
    matrixSecond->SetMatrixNumber(7, 1, 2);
    matrixSecond->SetMatrixNumber(9, 2, 1);
    matrixSecond->SetMatrixNumber(11, 2, 2);
    matrix->Print();
}

