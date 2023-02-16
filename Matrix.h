#pragma once
class Matrix {
private:
	int rows;
	int columns;
	float* matrix; // придётся делать массив указателей на массив типа float :(
public:
	Matrix(int rows, int columns) {
		this->rows = rows;
		this->columns = columns;
	}
};