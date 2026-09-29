#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); //1251
	srand(time(NULL));
	



	
	
	




		


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









