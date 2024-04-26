#include "Worker.h"

Worker::Worker(std::ifstream& file)
{
	std::getline(file, name);
	std::getline(file, post);
	file >> salary;
	file.ignore();
	if (!file.eof())
	{
		char delim_line[255];
		file.getline(delim_line, 255);
	}
}

void Worker::print()
{
	std::cout << name << '\n' << post << '\n' << salary << '\n' << "====================\n";
}

int Worker::compare(const Worker& worker)
{
	return post.compare(worker.post);
}
