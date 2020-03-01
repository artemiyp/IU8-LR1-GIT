#include <iostream>
using namespace std;

class Student //класс студент
{
private: //скрытая часть класса
	string fam; //фамилия
	string im; //имя
	string otch; //отчество
	int* balls; //массив оценок

public: //публичная часть класса
	Student(); //конструктор по умолчанию. создает объект с пустыми полями и нулевыми оценками
	Student(string f, string i, string o, int* b); //конструктор с параметрами. создает объект с переданными параметрами
	double getAvg(); //метод вычисления среднего балла
	void show(); //метод вывода данных на экран
};