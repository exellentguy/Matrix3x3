// Matrix3x3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include <stdlib.h> 
#include <string>
#include <iostream>
#include "Matrix3x3.h"

using namespace std;

int main()
{
    Matrix3x3 Matrix(4);
	Matrix.fillRandomElements(0, 15);
	Matrix.elements();
	cout << Matrix.sumRow(1) << '\n';
	cout << Matrix.productPrincipalDiag() << '\n';
	cout << Matrix.sumPrincipalDiag() << '\n';
	cout << Matrix.sumSecondaryDiag() << '\n';
}


