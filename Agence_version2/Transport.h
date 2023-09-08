#pragma once
#include "Vaisseau.h"
class Transport : public Vaisseau
{
public:
	Transport();
	~Transport();

	virtual std::string to_string();
};

