#include <iostream>
#include <Windows.h>



void SetMemory(int*& pahom, int size)
{
	if (pahom != nullptr)
	{
		delete[] pahom;
	}
	pahom = new int[size];
}
void DeleteArray(int*& pahom)
{
	if (pahom == nullptr)
	{
		return;
	}
	delete[] pahom;
	pahom = nullptr;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); //1251
	srand(time(NULL));

	/*	int* arr = nullptr;

	arr = new int[5];
	//*(arr + 1) = 10;

	arr[0] = 10;

	delete[] arr;

	arr = nullptr;*/

	/*int row = 3, col = 4;


	int** name = new int* [row];
	for (int i = 0; i < row; i++)
	{
		delete[] name[i];
	}
	delete[] name;
	name = nullptr;
	
	name[1][2] = 100;
	*/
	
	/*int side = 2, row = 4, col1 = 4, col2 = 3;

	int*** seva = new int**[side];

	for (int i = 0; i < side; i++)
	{
		seva[i] = new int* [row];
	}

	for (int i = 0; i < row; i++)
	{
		seva[0][i] = new int[col1];
	}

	seva[1][0] = new int[2];
	for (int i = 1; i < row; i++)
	{
		seva[1][i] = new int[col2];
	}
	*/

	/*void PushArray(int *&arr, int &size)
{
	int* temp = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}

	delete[] arr;

	size++;
	arr = new int[size];

	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = temp[i];
	}
	delete[] temp;

	arr[size - 1] = 100;
}

void PushArray2(int*& arr, int& size)
{
	size++;

	int* temp = new int[size];

	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}

	arr[size - 1] = 100;

	std::swap(arr, temp);

	delete[] temp;

	
}
	
	int size = 5;

	int* arr = new int[size] {5, 3, 8, 1, 9};
	
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n\n";

	PushArray(arr, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}


	delete[]arr*/;






	return 0;
}

//тип_данных имя_переменной;

/*double a = 0;
	double b = 0;
	char c = 0;
	std::cout << "\t\tКалькулятор\n";
	std::cout << "Введите 1 число: ";
	std::cin >> a;
	std::cout << "Введите 2 число: ";
	std::cin >> b;
	std::cout << "Выберите символ + - * /: ";
	std::cin >> c;
	std::cout << "Ответ: ";

	if (c == 0)
	{
		std::cin >> c;
	}
	if (c == '+')
	{
		std::cout << a + b;
	}
	else if (c == '-')
	{
		std::cout << a - b;
	}
	else if (c == '*')
	{
		std::cout << a * b;
	}
	else if (c == '/')
	{
		std::cout << a / b;
	}
	else
	{
		std::cout << "Ошибка";
	}
*/

/*
	double a = 4.3;
	float b = 4.3f;

	if (3.4f + 2.5 == 5.9)
	{
		std::cout << "porosay"; 
	}

	if (a == 0)
	{
		std::cout << "Hello\n";
	}
	else if (a != 0)
	{
		std::cout << 2;
	}
	else
	{
		std::cout << 1;
	}

	std::cin >> a >> b;
	
	std::cout << a << " " << b;
	*/

/*  std::cout << "\tHello \\ World \"text\" 10 + 5 " << 10 + 5 << std::endl;
	std::cout << "Text\n\n\n\n\n\n";

	std::cout << "Артём\n";
	std::cout << "\tЧто бы кушать\n";
	std::cout << "\t\tОн смешной\n";
	std::cout << "\t" << 20 << "$$$" << std::endl;
	std::cout << "Почемукта";
*/

/*
	
	Типы данных:

	bool				true/false	0 - false
	char				'+'		43		-128 -- 127
	unsigned char		'#'				0 - 255

	short				123				-32768 -- 32767
	unsigned short		123				0 -- 65535

	int					456326			-2147483648 - 2147483647
	long long int		12345678		дофига
	unsigned int		123465463		0 -- 4294967295

	float				12345.4561		 3.4E+-38
	double				12345687.10536	 1.7E+-308
	long double			no comment		3.4e-4932 --  1.1e+4932

	Операторы:

	математические: + - * / = % ++ -- += -= *= /= ()
	сравнительные: > < >= <= != == <=>
	логические: && (и)	|| (или)	! (не)

	ТАБУ:	goto		and or not		int имяПеременной

*/

/*double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите А: "; 
	std::cin >> a;
	std::cout << "Введите B: ";
	std::cin >> b;
	std::cout << "Введите C: ";
	std::cin >> c;

	std::cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

	d = std::pow(b, 2) - 4 * a * c;

	std::cout << "\nДискриминант: " << d << "\n\n";

	if (d < 0)
	{
		std::cout << "Нет корней\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n\n";
	}
	else 
	{
		x1 = (-b + std::sqrt(d)) / (2 * a);
		x2 = (-b - std::sqrt(d)) / (2 * a);
		std::cout << "Первый корень: " << x1 << "\n";
		std::cout << "Второй корень: " << x2 << "\n\n";
	}*/

/*int choose = 0, randomNumber = 0, hp = 0, number = 0;
	int maxHp = 25, maxHpHard = 25, chance = 30;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Игра \"Угадай число\" \n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{

			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t\"Выберите уровень сложности\" \n\n\n";
				std::cout << "1 - Легкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (true)
					{
						std::cout << "Кол-во жизней" << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравляем! \n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было:" << randomNumber << "\n\n";
								system("pause");
								break;
							}
							std::cout << "\nНе верно\n";
							std::cout << "Кол-во жизней:" << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было:" << randomNumber << "\n\n";
									system("pause");
									break;
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьюитера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьюитера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n\n";
								Sleep(500);





							}
						}
					}
				}
				else if (choose == 2)
				{

					randomNumber = rand() % 5000 + 1;
					hp = maxHp;

					while (true)
					{
						std::cout << "Кол-во жизней" << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Вы угадали! Поздравляем! \n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за лимиты\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли!\n";
								std::cout << "Число компьютера было:" << randomNumber << "\n\n";
								system("pause");
								break;
							}
							std::cout << "\nНе верно\n";
							std::cout << "Кол-во жизней:" << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{

								if (rand() % 101 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было:" << randomNumber << "\n\n";
										system("pause");
										break;
									}
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьюитера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьюитера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n\n";
								Sleep(500);
							}
						}
					}
				}
			}
		
				if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}




			}
		else if (choose == 2)			
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t\"Настройки игры\" \n\n\n";
				std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						std::cout << "Введите кол-во жизней для легкой игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые значения от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;

						}

					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						std::cout << "Введите кол-во жизней для сложной игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHpHard = choose;
							Sleep(1500);
							break;
						}

					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << "Допустимые значения от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;

						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод\n";
					Sleep(1500);
				}

			}
		}
				else if (choose == 0)
				{
					system("cls");
					std::cout << "\n\n\n\t\t Игра \"Спасибо за игру!\" \n\n\n";
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}

		*/

/*	//тип_данных имя_массива[кол-во_ячеек];
	
	const int size = 10;
	double sumP = 0, sumO = 0;
	
	int arr[size]{};


	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		if (arr[i] > 0)
		{
			sumP += arr[i];
		}
		else
		{
			sumO += arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n" << sumP << "\n" << sumO << "\n" << (sumP + sumO);
*/

/*	//тип_данных имя_массива[кол-во_ячеек];

	const int row = 3, col = 4;

	int arr[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}*/

/*const int row = 3, col = 4;

	int arr[row][col];
	int sum = 0;

	for (int i = 0; i < row; i++)
	{
		sum = 0;
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			sum += arr[i][j];
			std::cout << arr[i][j] << "\t";
		}
		
		std::cout << "|\t" << sum << "\n";
	}
*/

/*
	

	тип_возврата Имя_функций (аргументы_функции, ...)
	{
		тело_функции
	}
double plus(double one, double two)
{
	 return one + two;
}
double minus(double one, double two)
{
	return one - two;
}
double multiply(double one, double two)
{
	return one * two;
}
double calculate(double one, double two)
{
	return one / two;
}

double one = 0, two = 0;
	char signs = 0;
	
	std::cout << "\t\tКалькулятор\n";
	std::cout << "Введите 1 число: ";
	std::cin >> one;
	std::cout << "Введите 2 число: ";
	std::cin >> two;
	std::cout << "Выберите символ + - * /: ";
	std::cin >> signs;
	std::cout << "Ответ: ";

if (signs == 0)
	{
		std::cin >> signs;
	}
	if (signs == '+')
	{
		std::cout << plus(one,two);
	}
	else if (signs == '-')
	{
		std::cout << minus(one,two);
	}
	else if (signs == '*')
	{
		std::cout << multiply;
	}
	else if (signs == '/')
	{
		std::cout << calculate;
	}
	else
	{
		std::cout << "Ошибка";
	}




*/

/*double MyPow(double num1, double num2)
{
	double result = num1;
	for (int i = 1; i < num2; i++)
	{
		result *= num1;
	}
	return result;
}
std::cout << std::pow(5, 4) << "\n\n";
	std::cout << MyPow(5, 4);
	*/

/*void PrintArr(int name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}

void SetArr(int name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		name[i] = rand() % 6;
	}
}
	
	const int size = 5;
	int arr[size]{};
	SetArr(arr, size);
	PrintArr(arr, size);*/

/*

{
	return one - two;
}

int Fak(int num)
{
	if (num < 0)
	{
		return;
	}
	if (num == 0)
	{
		return 1; 
	}
	return num * Fak(num - 1);
}*/

/*template <typename T1>
T1 Substruct(T1 num, T1 num1);

int usf(int num, int num1)
{
	if (num < 0 || num1 < 0 )
	{
		return 0;
	}

	if (num == 0 || num1 == 0)
	{
		return 1;
	}
	if (num1 == 1)
		num -= 1;
	}*/

/*int choose = 0, money = 0, sum = 0, kol = 0;
	double app = 70, ora = 60, abr = 50, gru = 75;
	double tom = 40, oni = 30, cuc = 25;
	double gar = 40, pet = 30;
	
	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\t Магазин \"Соки Севы\" \n\n\n";
		std::cout << "1 - Войти в магазин\n";
		std::cout << "2 - Пройти на кассу\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t\"Выберите категорию\" \n\n\n";
				std::cout << "1 - Фруктовые \n";
				std::cout << "2 - Овощные\n";
				std::cout << "3 - Чаи\n\n";
				std::cout << "0 - Выход на кассу\n\n";
				
				std::cout << "Сумма: " << sum << "\n";
				std::cout << "Ввод: ";
				std::cin >> choose;
				
				while (true)
				{

				
					if (choose == 1)
					{

						system("cls");
						std::cout << "\n\n\n\t\t\"Выбрана категория: Фруктовые\" \n\n\n";
						std::cout << "\n\n\n\t\t\"Выберите вкус (Цена - литр)\" \n\n\n";
						std::cout << "Любая цифра кроме предоставленых - выход в категории\n";
						std::cout << "1 - Яблочный " << app << "р\n";
						std::cout << "2 - Апельсиновый " << ora << "р\n";
						std::cout << "3 - Абрикосовый " << abr << "р\n";
						std::cout << "4 - Грушевый " << gru << "р\n";
						std::cout << "0 - Выход на кассу\n";
						std::cout << "Ввод: ";
						std::cin >> choose;
						
					
					}
					else
					{
						break;
						Sleep(500);
					}
					if (choose == 1)
					{
						std::cout << "\nВыбрано: 1 - Яблочный\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (app * kol);
						break;
					}
					else if (choose == 2)
					{
						std::cout << "\nВыбрано: 2 - Апельсиновый\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (ora * kol);
						break;
					}
					else if (choose == 3)
					{
						std::cout << "\nВыбрано: 3 - Абрикосовый\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (abr * kol);
						break;
					}
					else if (choose == 4)
					{
						std::cout << "\nВыбрано: 4 - Грушевый\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (gru * kol);
						break;
					}
					else 
					{
						break;
					}
				}





				while (true)
				{
					if (choose == 2)
					{
						system("cls");
						std::cout << "\n\n\n\t\t\"Выбрана категория: Овощные\" \n\n\n";
						std::cout << "\n\n\n\t\t\"Выберите вкус (Цена - литр)\" \n\n\n";
						std::cout << "Любая цифра кроме предоставленых - выход в категории\n";
						std::cout << "1 - Томатный " << tom << "р\n";
						std::cout << "2 - Луковый " << oni << "р\n";
						std::cout << "3 - Огуречный " << cuc << "р\n";
						std::cout << "0 - Выход на кассу\n";
						std::cout << "Сумма: " << sum << "\n";
						std::cout << "Ввод: ";
						std::cin >> choose;
					}
					else
					{
						break;
					}
					if (choose == 1)
					{
						std::cout << "\nВыбрано: 1 - Томатный\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (tom * kol);
						break;
					}
					else if (choose == 2)
					{
						std::cout << "\nВыбрано: 2 - Луковый\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (oni * kol);
						break;
					}
					else if (choose == 3)
					{
						std::cout << "\nВыбрано: 3 - Огуречный\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (cuc * kol);
						break;
					}
					else
					{
						break;
					}
				}





				while (true)
				{


					if (choose == 3)
					{
						system("cls");
						std::cout << "\n\n\n\t\t\"Выбрана категория: Чаи\" \n\n\n";
						std::cout << "\n\n\n\t\t\"Выберите вкус (Цена - литр)\" \n\n\n";
						std::cout << "Любая цифра кроме предоставленых - выход в категории\n";
						std::cout << "1 - Чесночный " << gar << "р\n";
						std::cout << "2 - Петруший " << pet << "р\n";
						std::cout << "0 - Выход\n";
						std::cout << "Сумма: " << sum << "\n";
						std::cout << "Ввод: ";
						std::cin >> choose;
					}
					else
					{
						break;
						Sleep(500);
					}
					if (choose == 1)
					{	
						std::cout << "\nВыбрано: 1 - Чесночный\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (gar * kol);
						break;
					}
					else if (choose == 2)
					{
						std::cout << "\nВыбрано: 2 - Петруший\n";
						std::cout << "Выберите кол-во: ";
						std::cin >> kol;
						sum = sum + (pet * kol);
						break;
					}
					else
					{
						break;
					}
				}


				if (choose == 0)
				{
						
					break;
				}
					
				
			}
		}
		else if (choose == 2)
		{
			system("cls");
			std::cout << "\t\t Оплатите товары: \n";
			std::cout << "1 - Наличные\n";
			std::cout << "2 - Карта\n";
			std::cin >> choose;

			if (choose == 1)
			{
				std::cout << "Введите сумму\n" << sum;
				std::cout << " Ввод: ";
				std::cin >> money;
				if (money == sum)
				{
					std::cout << "Спасибо за покупку!";
					break;
				}
				else
				{
					std::cout << "Некоректный ввод!";
					break;
				}
			}
			else if(choose == 2)
			{
				std::cout << "Введите сумму\n" << sum;
				std::cout << "Ввод: ";
				std::cin >> money;
				if (money == sum)
				{
					std::cout << "Спасибо за покупку!";
					break;
				}
				else
				{
					std::cout << "Некоректный ввод!";
					break;
				}
			}
			else
			{
				std::cout << "Ошибка!";
			}
		}
		else if (choose == 0)
		{
			system("cls");
			break;
		}
		else
		{
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}

	}*/

/*	int a = 5;
	Plus(&a);

	int b = a;

	int* ptr = &a;
	ptr = &a;

	std::cout << a << "\n";
	std::cout << &a << "\n";
	std::cout << ptr << "\n";
	std::cout << *ptr << "\n";
	std::cout << &ptr << "\n";
*/

/*void MySwap(int *num, int* num1)
{
	int num2 = *num;
	*num = *num1;
	*num1 = num2;
}

void MySwap(int &num, int &num1)
{
	int num2 = num;
	num = num1;
	num1 = num2;
}

void MySwap(int num, int num1)
{
	int num2 = num;
	num = num1;
	num1 = num2;
}
	int one = 10, two = 25;
	
	std::cout << one << " " << two << "\n";
	MySwap(&one, &two);
	std::cout << one << " " << two << "\n";*/

/*	const int size = 5;
	int arr[size]{ 3, 1, 2, 5, 6 };

	Fillarray(size);

	std::cout << arr << "\n";
	std::cout << *arr << "\n";
	std::cout << arr + 1 << "\n";
	std::cout << *(arr + 1) << "\n";\

	std::cout << arr + 5 << "\n";
	*(arr + 5) = 100;
	std::cout << *(arr + 5) << "\n";*/

/*int a = 5;
	
	int* car = new int;

	int *farit = Lol();
	delete farit;
	delete car;
	farit = nullptr;
	car = nullptr;

	car = &a;*/
