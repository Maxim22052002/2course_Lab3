#pragma once
class ILoadable
{
public:
	virtual ~ILoadable() {};
	virtual void  load(int kilograms) = 0;
};

