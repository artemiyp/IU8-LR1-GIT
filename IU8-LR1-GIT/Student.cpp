#include "Student.h"

Student::Student() //конструктор по умолчанию. создает объект с пустыми полями и нулевыми оценками
{
	fam = "";
	im = "";
	otch = "";
	balls = new int[4];
	for (int i = 0; i < 4; i++)
		balls[i] = 0;
}

Student::Student(string f, string i, string o, int* b) //конструктор с параметрами. создает объект с переданными параметрами
{
	fam = f;
	im = i;
	otch = o;
	balls = new int[4];
	for (int i = 0; i < 4; i++)
		balls[i] = b[i];
}

double Student::getAvg() //метод вычисления среднего балла
{
	double s = 0.0; //обнуляем результат
	for (int i = 0; i < 4; i++) //цикл по числу оценок
		s += balls[i]; //вычисляем сумму оценок
	return s / 4.0; //возвращаем сумму, деленную на 4
}

void Student::show() //метод вывода данных на экран
{
	cout << "Фамилия: " << fam << endl;
	cout << "Имя: " << im << endl;
	cout << "Отчество: " << otch << endl;
	cout << "Оценки: ";
	for (int i = 0; i < 4; i++)
		cout << balls[i] << " ";
	cout << endl << "Средний балл: " << getAvg() << endl;
	cout << "----------------------" << endl;
}