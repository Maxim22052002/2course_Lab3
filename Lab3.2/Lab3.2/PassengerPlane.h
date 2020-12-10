#pragma once
#include "Plane.h"
class PassengerPlane :public Plane, public ILoadable
{
public:
	PassengerPlane();
	PassengerPlane(std::string model, std::string air_lines, int year, int capacity, int num_Of_Pass, int size, int weight, int tonnage);
	~PassengerPlane() override {}
	void load(int kilograms) override;
};

