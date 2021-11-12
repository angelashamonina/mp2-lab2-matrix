// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
 int  n, k;
	cout << "Testing programs to support the submission of triangular matrices" << endl;
	cout << "Enter the size of matrix" << endl;
	cin >> n;
	TMatrix<int> m1(n),m2(n);
	cout << "Choose the method of filling the matrix:" << endl;
	cout << "1) Random numbers" << endl;
	cout << "2) By keyboard" << endl;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				m1[i][j] = rand() ;
				m2[i][j] = rand() ;
			}
		}
		cout << m1 << endl;
		cout << m2 << endl;
		break;
	}
	case 2:
	{
		cout << "Enter matrix a" << endl;
		cin >> m1;
		cout << "Enter matrix b" << endl;
		cin >> m2;
		cout << m1 << endl;
		cout << m2 << endl;
		break;
	}

	default:
	{
		cout << "Wrong choice";
		cout << "1.Random numbers" << endl << "2.By keyboard" << endl;
		cin >> k;
	}
	}
	cout << "Choose the actions to perform " << endl;
	cout << "1) Addition of matrices a+b" << endl;
	cout << "2) Subtraction of matrices a-b" << endl;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		cout << m1 + m2 << endl;
		break;
	}
	case 2:
	{
		cout << m1 - m2 << endl;
		break;
	}

	default:
	{cout << "Wrong choice";
	cout << "1) Addition of matrices a+b" << endl << "2) Subtraction of matrices a-b" << endl;
	cin >> k;
	}
	}
}
//---------------------------------------------------------------------------
