#pragma once
#include "Plane.h"
class CargoPlane :public Plane, public ILoadable
{
public:
	CargoPlane();
	CargoPlane(std::string model, std::string air_lines, int year, int capacity, int num_Of_Pass, int size, int weight, int tonnage);
	~CargoPlane() override {}
	void load(int kilograms) override;
};

