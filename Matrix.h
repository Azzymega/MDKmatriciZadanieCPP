#pragma once
class Matrix {
private:
	int rows;
	int columns;
	float* matrix; // ������� ������ ������ ���������� �� ������ ���� float :(
public:
	Matrix(int rows, int columns) {
		this->rows = rows;
		this->columns = columns;
	}
};