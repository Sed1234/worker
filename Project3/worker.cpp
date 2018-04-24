#include "Worker.h"



Worker::Worker()
{
	workers.push_back(Worker("Tom", "Manager", 2001, 2000));
	workers.push_back(Worker("Liz", "Manager", 2005, 2300));
	/*workers.push_back(Worker("Fred", "Accountant", 2010, 2500));
	workers.push_back(Worker("pit", "Manager", 2015, 1500));
	workers.push_back(Worker("Edward", "Boss", 2000, 5000));*/
}

Worker::Worker(std::string name, std::string position, int hire_year, int salary)
{
	this->name = name;
	this->position = position;
	this->hire_year = hire_year;
	this->salary = salary;
}


Worker::~Worker()
{
}

void Worker::getWorkers(int year_hire)
{
	std::vector<Worker> result;
	for (int i=0;i<workers.size();i++)
	{
		if (workers[i].hire_year < year_hire)
		{
			//result.push_back(workers[i].name);
			std::cout << workers[i].name<<" "<<workers[i].position << std::endl;
		}
	}
	
}
void Worker::sortBySalary()
{
	std::sort(workers.begin(), workers.end());
}