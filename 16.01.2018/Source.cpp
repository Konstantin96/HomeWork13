#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <algorithm>
#include <time.h>
#include <Windows.h>
#include<ctime>

using namespace std;

unsigned short int nz;

void main()

{

	setlocale(LC_ALL, ".1251");

	while (true)

	{

		srand(time(0));

		cout << "Enter number zadanie ili enter 0 chtoby vyiti : ";

		cin >> nz;

		if (nz == 0)

		{
			break;
		}

		else if (nz == 1)

		{
			/*Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1. Составить программу перевода этого числа в восьмеричную систему счисления.*/
			system("cls");
			char *a = "10010000000001110001110101";
			int s = 0;
			for (char *p = a; *p; p++)
			{
				s <<= 1;
				s += *p - '0';
			}
			cout << s;
		}
		else if (nz == 2)
		{
			/* Ввести два массива действительных чисел, состоящих из 7 и  9 элементов. Сформировать третий массив из упорядоченных по убыванию значений обоих массивов.*/
			system("cls");
			int mas1[7], mas2[9], mas3[16];
			cout << "Массив длинною 7 элементов: ";
			for (int i = 0; i < 7; i++)
			{
				mas1[i] = 1 + rand() % 20;
				mas3[i] = mas1[i];
				cout << mas1[i] << " ";
			}
			cout << endl;
			cout << endl;
			cout << "Массив длинною 9 элементов: ";
			for (int i = 0; i < 9; i++)
			{
				mas2[i] = 1 + rand() % 20;
				mas3[i + 7] = mas2[i];
				cout << mas2[i] << " ";
			}
			cout << endl;
			cout << endl;
			cout << "Массив длинною 16 элементов сформированный из двух выше перечисленных: ";

			for (int i = 0; i < 16; i++)
			{
				cout << mas3[i] << " ";
			}
			cout << endl;
			cout << endl;
			cout << "Массив длинною 16 элементов упорядоченный по убыванию: ";

			for (int i = 0; i < 16; i++)
			{
				for (int j = 16 - 1; j > i; j--)
				{
					if (mas3[j - 1] > mas3[j])
					{
						int temp = mas3[j - 1];
						mas3[j - 1] = mas3[j];
						mas3[j] = temp;
					}
				}
			}

			for (int i = 15; 0 <= i; i--)
			{
				cout << mas3[i] << " ";
			}
			cout << endl;
			cout << endl;

		}
		else if (nz == 3)
		{
			/*Ввести массив, в котором только два одинаковых элемента. Определить их местоположение*/
			system("cls");
			cout << "Сложное задание!!!!!!!!!!!" << endl;

		}
		else if (nz == 4)
		{
			/* Задан целочисленный массив. Определить, образуют ли значения его элементов геометрическую прогрессию. Если «да» – вывести знаменатель прогрессии, если «нет» – ответ «не образуют». */
			system("cls");
			int x, a, b, c, d;
			x = a = b = c = d = 0;
			bool t = true;
			cin >> a >> b >> c >> d;
			x = a / b;

			if (b == a*x && c == b*x && d == c*x && a != 0 && x != 0)
				t = true;
			else
				t = false;
			cout << endl;
			cout << t << "\n1.Может/ 0.Не может" << endl;

		}
		else if (nz == 5)
		{
			system("cls");
			/* Отсортировать по убыванию элементов последнего столбца целочисленный двухмерный массив 5×4*/
			const int N = 5;
			const int M = 4;
			int mat[N][M] = {
				{ 1, 2, 3, 4 },
				{ 1, 1, 1, 1 },
				{ 3, 0, 0, 3 },
				{ 9, 2, 3, 7 },
				{ 1, 2, 3, 5 }
			};

			int col = M - 1;
			for (bool g = true; g; ) {
				g = false;
				for (int i = 1; i < N; ++i) {
					if (mat[i - 1][col] < mat[i][col]) {
						for (int j = 0; j < M; ++j)
							swap(mat[i - 1][j], mat[i][j]);
						g = true;
					}
				}
			}


			for (int i = 0; i < N; ++i) {
				for (int j = 0; j < M; ++j)
					cout << mat[i][j] << ' ';
				cout << std::endl;
			}

		}
		else if (nz == 6)
		{
			system("cls");
			/*В матрице А(3-строки,4-столбца) поменять местами наименьшие элементы в первой и третей строке.*/
			int A[3][4];
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					A[i][j] = rand() % 11 - 5;
					cout << A[i][j] << "\t";
				}
				cout << endl;
			}
			int* min1 = min_element(begin(A[0]), end(A[0]));
			int* min3 = min_element(begin(A[2]), end(A[2]));
			swap(*min1, *min3);
			cout << endl << endl;
			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					cout << A[i][j] << "\t";
				}
				cout << endl;
			}

		}

		else if (nz == 7)
		{
			/*Дан двухмерный массив 5×6. Определить среднее арифметическое каждого столбца,  определить максимум и минимум каждой строки.*/
			system("cls");
			const int  N = 2, M = 2;
			int arr[N][M];
			int s = 0;
			int sr = 0;

			cout << "Заполните массив: \n";
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					cout << "arr[" << i << "][" << j << "]=";
					cin >> arr[i][j];
				}
			}

			cout << "\n Наш массив: " << endl;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					cout << arr[i][j] << "   ";
				}
				cout << "\n";
			}




			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < M; j++)
				{
					int S = 0;
					if (j % 2 == 0) {
						S = S + arr[i][j];
						sr = S / M;
						cout << "Столбец " << j << " = " << sr << endl;

					}
				}
			}
			for (int j = 1; j < N; j = j + 2)
			{
				int S = 0;
				for (int i = 0; i < M; i++)
				{
					S += arr[i][j];
				}
				cout << "Столбец " << j + 1 << " = " << (double)S / N << endl;
			}
		}
		else if (nz == 8)
		{
			/* Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве*/
			system("cls");
			const int n = 5, m = 6;
			int mas[n][m], count1 = 0, count2 = 0;

			cout << "Massiv" << endl;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 6; j++)
				{
					mas[i][j] = 10 + rand() % 90;
					cout << mas[i][j] << " ";
					if (mas[i][j] % 2 == 0)
						count1++;
					if (mas[i][j] % 2 != 0)
						count2++;
				}
				cout << endl;
			}
			cout << endl;
			cout << count1 << " четных цифр!" << endl;
			cout << count2 << " не четных цифр!" << endl;
		}
		else if (nz == 9)
		{
			/*Дан двухмерный массив n ×m элементов. Определить, сколько раз встречается число 7 среди элементов массива.*/
			system("cls");
			const int n = 6, m = 7;
			int mas[n][m], count1 = 0, count2 = 0;

			cout << "Massiv" << endl;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					mas[i][j] = 1 + rand() % 9;
					cout << mas[i][j] << " ";
					if (mas[i][j] == 7)
						count1++;
					count2++;
				}
				cout << endl;
			}
			cout << endl;
			cout << count1 << " раз(-а) число 7 встретилось в массиве из " << count2 << " елментов!" << endl;
		}
		else if (nz == 10)
		{
			/* Дан массив из n × m элементов. Найти индексы первого наименьшего  элемента массива*/
			system("cls");
			const int n = 6, m = 7;
			int mas[n][m], min = 0;

			cout << "Massiv" << endl;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					mas[i][j] = 1 + rand() % 9;
					cout << mas[i][j] << " ";
					if (mas[i][j] > min)
						min = mas[i][j];
				}
				cout << endl;
			}
			cout << min << " ";
		}
	}
}