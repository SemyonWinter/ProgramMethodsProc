#pragma once
#include "element.h"
class container
{
public:
	void insert(element*);
	void in(std::ifstream& ifstr);
	void out(std::ofstream& ofstr, type ignore = (type)-1);
	void multimet(std::ofstream& ofstr);
	element* begin;
	element* end;
	int size;
	void sort();
	container();
	~container();
};

