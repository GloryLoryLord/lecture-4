#include <iostream>

void task1();
void task2();
void task3();
void task4();
void task5();


int main()
{
setlocale(LC_ALL, "Ru");
while (c != 0) {
		cout << "Введите номер задания из списка домашнего задания или введите 0 для выхода из программы: ";
		cin >> c;
		switch (c) {
		case(0): cout << "До свидания!" << endl; break;
		case(1): cout << endl; task1(); c = -1; cout << endl; break;
		case(2): cout << endl; task2(); c = -1; cout << endl; break;
		case(3): cout << endl; task3(); c = -1; cout << endl; break;
		case(4): cout << endl; task4(); c = -1; cout << endl; break;
		case(5): cout << endl; task5(); c = -1; cout << endl; break;
		default: cout << "А нам такого не задавали =( " << endl;
		} 
	}
};

// the task one

void task1()
{
	int a, b;

	std::cout << "Enter a:";
	std::cin >> a;
	std::cout << "Enter b:";
	std::cin >> b;

	if (a + b > 10)
	{
		std::cout << "true";
	}
	else if (a + b < 10)
	{
		std::cout << "false";
	}

};
// the task two

void task2()
{
	const size_t c{ 5 }, d{ 5 };

	if (c == 10 && d == 10 or c + d == 10)
	{
		std::cout << "true";
	}

	else if (c != 10 && d != 10 || c + d != 10)
	{
		std::cout << "false";
	}
};

//the task three
void task3()
{
	int const SIZE{ 50 };
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,
	28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50 };

	for (auto a : arr)
	{
		if (a % 2 == 0)
			std::cout << a << " ";

		std::cout << std::endl; //это коненчо не необходимо, но мне было интересно посмотреть как это работает
	}

};
//the task four
void task4()
{
	int h;
	std::cout << "Enter h:";
	std::cin >> h;

	for (; h % 2; h = 1) // попробовать заменить третье условие на деление на еденицу :/
	{
		std::cout << "false";
		break;

	}
};
//the task five

void task5()
{
	int min_meaning{ 1 };
	int max_meaning{ 3000 };
	int year;


	do {
		std::cout << "enter a year from 1 to 3000:";
		std::cin >> year;
	} while (year < min_meaning || year > max_meaning);

	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		std::cout << year << " leap year ";
	}
	else
	{
		std::cout << year << " not leap year ";
	}

};

