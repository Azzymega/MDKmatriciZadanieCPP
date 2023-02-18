// MDKmatriciZadanieCPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Matrix.h"
#include <iostream>
using namespace std;

int main()
{
    Matrix* matrix = new Matrix(2, 2);
    matrix->SetMatrixNumber(2,1,1);
    cout << matrix->GetMatrixNumber(1, 1);
}

