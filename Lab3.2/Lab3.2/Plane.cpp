#include "Plane.h"

Plane::Plane() {
	model_ = "0";
	air_lines_ = "0";
	year_ = 0;
	capacity_ = 0;
	num_Of_Pass_ = 0;
	size_ = 0;
	weight_ = 0;
	
}
Plane::Plane(std::string model, std::string air_lines, int year, int capacity, int num_Of_Pass, int size, int weight, int tonnage) {
	model_ = model;
	air_lines_ = air_lines;
	year_ = year;
	capacity_ = capacity;
	num_Of_Pass_ = num_Of_Pass;
	size_ = size;
	weight_ = weight;
	tonnage_ = tonnage;
	
}
Plane::~Plane() {
}

void Plane::setModel(std::string model) {
	model_ = model;
}
void Plane::setAirLines(std::string airLines) {
	air_lines_ = airLines;
}

void Plane::setYear(int year) {
	year_ = year;
}

void Plane::setCapacity(int capacity) {
	capacity_ = capacity;
}

void Plane::setNumOfPassengers(int num_Of_Pass) {
	num_Of_Pass_ = num_Of_Pass;
}

void Plane::setSize(int size) {
	size_ = size;
}

void Plane::setWeight(int weight) {
	weight_ = weight;
}

void Plane::setTonnage(int tonnage) {
	tonnage_ = tonnage;
}



std::string Plane::getModel() const {
	return model_;
}

std::string Plane::getAirLines() const {
	return air_lines_;
}

int Plane::getYear() const {
	return year_;
}

int Plane::getCapacity() const {
	return capacity_;
}

int Plane::getNumOfPassanger() const {
	return num_Of_Pass_;
}

int Plane::getSize() const {
	return size_;
}

int Plane::getWeight() const {
	return weight_;
}

int Plane::getTonnage() const {
	return tonnage_;
}



void Plane::load(int kilograms) {}
