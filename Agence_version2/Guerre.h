#pragma once
#include "Vaisseau.h"
#include<string>
class Guerre : public Vaisseau
{
public:
	Guerre();
	~Guerre();

	virtual std::string to_string();
};

