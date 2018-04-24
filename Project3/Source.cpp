#include <iostream>
#include "worker.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
	/*Worker w;
    w.getWorkers(2010);*/
	Worker c;
	c.sortBySalary();
	for (auto worker : c.workers)
	{
		std::cout << worker.salary << std::endl;
	}
	system("pause");
	return 0;
}