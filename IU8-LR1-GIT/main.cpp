#include "Student.h"

void sort(Student* mas, int n) //функция сортировки массива студентов по убыванию среднего балла
{
	Student temp;
	//пузырьковая сортировка
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (mas[j].getAvg() > mas[i].getAvg())
			{
				temp = mas[i];
				mas[i] = mas[j];
				mas[j] = temp;
			}
}

int main()
{	
	Student* mas = new Student[5]; //объявляем массив из 5 элементов
	//заполняем массив
	mas[0] = Student("Иванов", "Иван", "Иванович", new int[4]{ 4, 4, 5, 4 });
	mas[1] = Student("Петров", "Павел", "Сергеевич", new int[4]{ 5, 4, 5, 3 });
	mas[2] = Student("Белов", "Олег", "Алексеевич", new int[4]{ 3, 3, 4, 3 });
	mas[3] = Student("Горохова", "Ольга", "Николаевна", new int[4]{ 5, 5, 5, 4 });
	mas[4] = Student("Зимин", "Александр", "Игоревич", new int[4]{ 4, 3, 3, 4 });
	//выводим исходный список на экран
	cout << "Список студентов:" << endl;
	for (int i = 0; i < 5; i++)
		mas[i].show();
	sort(mas, 5); //вызываем функцию сортировки
	//выводим три первых элемента отсортированного списка
	cout << "Трое самых сильных:" << endl;
	for (int i = 0; i < 3; i++)
		mas[i].show();
	system("pause");
	return 0;
}