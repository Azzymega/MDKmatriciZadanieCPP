
#include "Matrix.h"
#include <iostream>
using namespace std;

int main()
{
    Matrix* matrix = new Matrix(2, 2);
    matrix->SetMatrixNumber(2,1,1);
    matrix->Print();
}

