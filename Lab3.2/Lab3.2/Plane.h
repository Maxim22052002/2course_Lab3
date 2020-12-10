#pragma once
#include <string>
#include "ILoadable.h"
class Plane :public ILoadable
{
public:
	Plane();
	Plane(std::string model, std::string air_lines, int year, int capacity, int num_Of_Pass, int size, int weight, int tonnage);
	virtual ~Plane();
	void setModel(std::string model);
	void setAirLines(std::string airLines);
	void setYear(int year);
	void setCapacity(int capacity);
	void setNumOfPassengers(int num_Of_Pas);
	void setSize(int size);
	void setWeight(int weight);
	void setTonnage(int tonnage);
	
	std::string getModel() const;
	std::string getAirLines() const;
	int getYear() const;
	int getCapacity() const;
	int getNumOfPassanger() const;
	int getSize() const;
	int getWeight() const;
	int getTonnage() const;
	
	void load(int kilograms);
protected:
	std::string model_;
	std::string air_lines_;
	int year_;
	int capacity_;
	int num_Of_Pass_ = 0;
	int size_;
	int weight_;
	int tonnage_;
	
};

