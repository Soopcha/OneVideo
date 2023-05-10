﻿// OneVideo.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

#include <iostream>     //подключаем библиотеку(файл, где описаны др функции) ввода-вывода iostream, мы будем её юзать для 
						//ввода/вывода в консоль
						// #include - деректива препроцессора, те ещё до проги это будет подключаться
#include <math.h>       //подключили библиотеку для матешы

using namespace std;    //пространство имён
/* В С++ есть понятие пространства имён.  Это пространство определяет некую область, на которую приходятся действия
 оператора или функции. Для того, чтобы юзать оператор, находящийся в определённом пространстве, необходимо подключить это
 пространство в свою прогу.
 ниже подключается пространство под названием std
*/

/* те без using namespace std; пришлось бы писать:
std::cout << "Hello World!"<<std::endl;
*/

int main()   //главная функция, точка входа в систему
{
	cout << "Хааай" << endl;       // вывод в консоль

	setlocale(LC_ALL, "Rus");             /*юзаем функцию, теперь русские буквы будут норм в консоли
	 и к приму, если мы её поставим в конец проге, тто у нас всё будет плохо, те прога выполняется по порядку */

	cout << "Hello World!\n";
	cout << "Хааай" << endl;         //endl - на новую строку перейти



	//Escape - последовательности (для char это = 1 символ)
	/*

	\b - удаление последнего выведенного символа
	\n - перейи на начало новой стр
	\t - перейти к следующей позиции табюляции

	\\ - вывести \
	\" - вывести "
	\' - вывести '
*/
	cout << "хех\n\n";      //отступ на две строки
	cout << "хех\t\t\t\t\n";  // пробельчики после хай поставили
	cout << "\tхех";  // пробельчик перед хай поставили
	cout << "\'хех\"";   //КСТА мы ща выводим массив char
	cout << "\\хех\\\n";



	//Переменные - область оперативной памяти, обладающая собственным именем, хранит данные
	//ярлычок в оперативной памяти
	//тип_данных имя_переменной   
	int a;      //создание переменной = объявление перменной
	a = 5;		//присваиваем значение = инициализируем
	int c,b = 6;
	c = 3,756;	//дробная часть кста будет отброшена
	cout << c<< a << b << endl;

	bool boo = true;
	cout << boo << endl;	//если true - выведет 1, если false - 0



	//КОНСТАНТА - переменные, но их значения нельзя поменять
	//Их номенуют БОЛЬШИМИ БУКВАМИ

	const int COUNT_DAYS_IN_WEEK = 7;
	cout << COUNT_DAYS_IN_WEEK << "\n";

	const char NEW_LINE = '\n';
	const char TAB = '\t';
	cout << COUNT_DAYS_IN_WEEK << NEW_LINE;
	cout << TAB << COUNT_DAYS_IN_WEEK << "\n";

}


