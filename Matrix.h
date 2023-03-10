#pragma once
#include <iostream>

class Matrix {
private:
	int rows;
	int columns;
	float** matrix;
public:
	void Multiplication(Matrix matrix) {
		float** matrixNew = Matrix::GetZeroMatrix(this->GetRows(), this->GetColumns());
		for (int x = 0; x < this->GetColumns(); x++) {
			for (int y = 0; y < matrix.GetColumns(); y++) {
				for (int z = 0; z < matrix.GetRows(); z++) {
					matrixNew[x][y] += matrix.GetMatrix()[x][z] * this->GetMatrix()[z][y];
				}
			}
		}
		this->SetMatrix(matrixNew);
	}
	static Matrix Multiplication(Matrix *matrix, Matrix *matrixSecond) {
		 float** matrixNew = Matrix::GetZeroMatrix(matrixSecond->GetRows(), matrixSecond->GetColumns());
		 for (int x = 0; x < matrixSecond->GetColumns(); x++) {
			 for (int y = 0; y < matrix->GetColumns(); y++) {
				 for (int z = 0; z < matrix->GetRows(); z++) {
					 matrixNew[x][y] += matrix->GetMatrix()[x][z] * matrixSecond->GetMatrix()[z][y];
				 }
			 }
		 }
		 return Matrix(matrix->GetRows(), matrix->GetColumns(), matrixNew);
	 }
	void Print()
	{
		for (int b = 0; b < this->GetRows(); b++)
		{
			std::cout << "" << std::endl;
			for (int i = 0; i < this->GetColumns(); i++)
			{
				std::cout << this->GetMatrix()[b][i] << " ";
			}
		}
	}
	void MultiplyByNumber(int number)
	{
		for (int b = 0; b < rows; b++)
		{
			for (int i = 0; i < columns; i++)
			{
				this->matrix[b][i] = this->matrix[b][i] * number;
			}
		}
	}
	static Matrix MultiplyByNumber(int number, Matrix* matrix)
	{
		float** matrixNew = Matrix::GetZeroMatrix(matrix->GetRows(), matrix->GetColumns());
		for (int b = 0; b < matrix->GetRows(); b++)
		{
			for (int i = 0; i < matrix->GetColumns(); i++)
			{
				matrixNew[b][i] = matrix->GetMatrix()[b][i] * number;
			}
		}
		return Matrix(matrix->GetRows(), matrix->GetColumns(), matrixNew);
	}
	void Addition(Matrix matrix)
	{
		for (int b = 0; b < rows; b++)
		{
			for (int i = 0; i < columns; i++)
			{
				this->matrix[b][i] += matrix.GetMatrix()[b][i];
			}
		}
	}
	static Matrix Addition(Matrix* matrix, Matrix* matrixSecond)
	{
		float** matrixNew = Matrix::GetZeroMatrix(matrix->GetRows(), matrix->GetColumns());
		for (int b = 0; b < matrix->GetRows(); b++)
		{
			for (int i = 0; i < matrix->GetColumns(); i++)
			{
				matrixNew[b][i] = matrix->GetMatrix()[b][i] + matrixSecond->GetMatrix()[b][i];
			}
		}
		return Matrix(matrix->GetRows(), matrix->GetColumns(), matrixNew);
	}
	static float** GetZeroMatrix(int rows, int columns)
	{
		float** matrix = new float* [rows];
		for (int b = 0; b < rows; b++)
		{
			matrix[b] = new float[rows];
			for (int i = 0; i < columns; i++)
			{
				matrix[b][i] = { 0 };
			}
		}
		return matrix;
	}
	float** GetMatrix() 
	{
		return this->matrix;
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
	Matrix(int rows, int columns, float** matrix)
	{
		this->rows = rows;
		this->columns = columns;
		this->matrix = matrix;
	}
	int GetRows() 
	{
		return rows;
	}
	int GetColumns()
	{
		return columns;
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