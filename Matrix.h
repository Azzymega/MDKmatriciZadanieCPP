#pragma once
class Matrix {
private:
	int rows;
	int columns;
	float* matrix; // придётся делать массив указателей на массив указателей типа float :( d
public:
	Matrix(int rows, int columns) {
		this->rows = rows;
		this->columns = columns;
	}
};