// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <conio.h>
#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  TMatrix<int> a(3), b(3), c(3);
  int i, j;

  setlocale(LC_ALL, "Russian");
  cout << "Тестирование программ поддержки представления треугольных матриц"
    << endl;
  for (i = 0; i < 3; i++)
    for (j = i; j < 3; j++ )
    {
      a[i][j] =  i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  c = a + b;
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;


  cout<<"введите матрицу a(3):\n";
  cin>>a;
  cout<<"\nвведите матрицу b(3):\n";
  cin>>b;
  cout<<"\nматрица a:\n"<<a<<"\nматрица b:\n"<<b<<"\nпроизведение матриц a и b:\n"<<a*b<<"\n";
  if (a==b) cout<<"\nматрицы a и b равны\n";
  else cout<<"\nматрицы a и b не равны\n";
  
  _getch();
}
//---------------------------------------------------------------------------
