#pragma once
class Matrix {
private:
	int rows;
	int columns;
	float** matrix; // придётся делать массив указателей на массив указателей типа float :( dq
public:
	float** GetMatrix() 
	{
		return matrix;
	}
	void SetMatrix(float** matrix) 
	{
		this->matrix = matrix;
	}
	float GetMatrixNumber(int row, int column)
	{
		return this->matrix[row - 1][column - 1];
	}
	void SetMatrixNumber(float number, int row, int column)
	{
		this->matrix[row-1][column-1] = number;
	}
	Matrix(int rows, int columns) 
	{
		this->rows = rows;
		this->columns = columns;
		matrix = new float*[rows];
		for (int b = 0; b < rows; b++)
		{
			matrix[b] = new float[rows];
			for (int i = 0; i < columns; i++)
			{
				matrix[b][i] = {0};
			}
		}
	}
	~Matrix()
	{
		for (int i = 0; i < rows; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;
	}
};