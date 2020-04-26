#pragma once
using namespace std;
class Matrix3x3
{
	public:
		int** matrix;
		int size;
		int element(const int i, const int j) {
			return matrix[i][j];
		}
		void elements() {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					cout << matrix[i][j] << ' ';
				}
				cout << '\n';
			}
		}
		void setElement(const int i, const int j, const int value) {
			matrix[i][j] = value;
		}
		void fillRandomElements(const int minVal, const int maxVal) {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					matrix[i][j] = rand() % maxVal + minVal;
				}
			}
		}
		void FillNullElements() {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					matrix[i][j] = 0;
				}
			}
		}
		int sumPrincipalDiag() {
			int result = 0;
			for (int i = 0; i < size; i++)
				result += matrix[i][i];
			return result;
		}
		int sumSecondaryDiag() {
			int result = 0;
			for (int i = 0; i < size; i++)
				result += matrix[i][size - 1 - i];
			return result;
		}
		int productPrincipalDiag() {
			int result = 1;
			for (int i = 0; i < size; i++)
				result *= matrix[i][i];
			return result;
		}
		int productSecondaryDiag() {
			int result = 1;
			for (int i = 0; i < size; i++)
				result *= matrix[i][size - 1 - i];
			return result;
		}
		int sumRow(const int iRow) {
			int result = 0;
			for (int i = 0; i < size; i++)
				result += matrix[iRow][i];
			return result;
		}
		int minColumn(const int iCol) {
			int min = matrix[0][iCol];
			for (int j = 0; j < size; j++) {
				if (matrix[j][iCol] < min) min = matrix[j][iCol];
			}
			return min;
		}
		int maxColumn(const int iCol) {
			int max = matrix[0][iCol];
			for (int j = 0; j < size; j++) {
				if (matrix[j][iCol] > max) max = matrix[j][iCol];
			}
			return max;
		}
		

		Matrix3x3();
		Matrix3x3(int n);
		~Matrix3x3();
};
	Matrix3x3::Matrix3x3() {
		size = 3;
		matrix = new int* [size];
		for (int count = 0; count < size; count++)
			matrix[count] = new int[size];
		FillNullElements();
	}
	Matrix3x3::Matrix3x3(int n) {
		size = n;
		matrix = new int* [size];
		for (int count = 0; count < size; count++)
			matrix[count] = new int[size];
		FillNullElements();
	}
	Matrix3x3::~Matrix3x3()
	{
		delete[] matrix; 
	}

