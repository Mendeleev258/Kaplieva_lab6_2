#pragma once
#include <iostream>
#include <fstream>
#include <string>

const int m = 35;	// max length of str

struct Worker
{
private:
	std::string name;
	std::string post;
	int salary;
public:
	Worker() {}
	Worker(std::ifstream& file);
	void print();
	int compare(const Worker& worker);
	int get_salary()
	{
		return salary;
	}
	std::string get_post()
	{
		return post;
	}
};
