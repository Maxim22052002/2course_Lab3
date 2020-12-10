#include "CargoPlane.h"
#include <iostream>
CargoPlane::CargoPlane() {
	model_ = "0";
	air_lines_ = "0";
	year_ = 0;
	capacity_ = 0;
	num_Of_Pass_ = 0;
	size_ = 0;
	weight_ = 0;
	
}
CargoPlane::CargoPlane(std::string model, std::string air_lines, int year, int capacity, int num_Of_Pass, int size, int weight, int tonnage) {
	model_ = model;
	air_lines_ = air_lines;
	year_ = year;
	capacity_ = capacity;
	num_Of_Pass_ = num_Of_Pass;
	size_ = size;
	weight_ = weight;
	tonnage_ = tonnage;
	
}

void CargoPlane::load(int kilograms) {
	setlocale(0, "Russian");
	
	if (kilograms <= tonnage_)
	{
		std::cout << "Успех Cargo!\n";
	}
	else
	{
		std::cout << "Ошибка Cargo!\n";
	}




}