﻿
#include <iostream>
#include "PassengerPlane.h"
#include "CargoPlane.h"
#include "ILoadable.h"

//Федоров Максим ИВТ-3 Вариант 9
/*Класс САМОЛЕТ (ПАССАЖИРСКИЙ) + классы ГРУЗОВОЙ САМОЛЕТ, САМОЛЕТ.
Реализовать схему наследования классов и корректно распределить по классам данные:
модель, авиалинии, год выпуска, вместимость, количество пассажиров, размеры и вес,
грузовместимость.
Интерфейс загрузки транспортного средства ILoadable с методом void load(int
kilograms) – поместить груз на самолет. В грузовой самолет можно помещать груз
вплоть до максимальной грузовместимости, иначе – выдавать сообщение об ошибке; в
пассажирский – обратно пропорционально фактическому количеству пассажиров на
борту (коэффициент зависимости можете задать произвольный); в случае превышения
лимита – также выдавать сообщение об ошибке. В main() создать 2 грузовых и 2
пассажирских самолета, продемонстрировать полиморфизм load().*/
int main()
{
	Plane* planes[4];
	planes[0] = new CargoPlane("ATR 42-320", "Белгород - Красноярск", 2002, 0, 0, 2000, 113, 20000);
	planes[1] = new PassengerPlane("Airbus A380","Донецк-Ростов", 1970, 850, 500, 250, 11, 100000);
	planes[2] = new PassengerPlane("Fokker 100", "Санкт-Петербург - Москва", 1985, 500, 400, 2000, 113, 50000);
	planes[3] = new CargoPlane("Boeing 737 MAX", "Саратов - Смоленск", 1990, 0, 0, 2000, 113, 50000);
	
	for(size_t i = 0; i < 4; ++i)
	{
		planes[i]->load(30000);
	}
	std::cout << "______________________________________________________________________\n";
	std::cout << "Самолеты:\n";
	for (size_t i = 0; i < 4; ++i) {
		if (typeid(*planes[i]) == typeid(PassengerPlane)) {
			std::cout << i + 1 << ". Пассажирский самолет\n";
		}
		else if (typeid(*planes[i]) == typeid(CargoPlane))
		{
			std::cout << i + 1 << ". Грузовой самолет\n";
		}
	}
	for (size_t i = 0; i < 4; ++i) {
		delete planes[i];
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
