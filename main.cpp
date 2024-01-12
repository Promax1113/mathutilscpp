#include "mathutils/roots.h"
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
	std::vector<int> x = {1, 5, 6};
	std::vector<int> toPrint;
	toPrint = findRoots(x);
	std::cout << "Roots are:\n";
	for (int i = 0; i < toPrint.size(); ++i)
	{
		std::cout << i + 1 << ". " << toPrint[i] << "\n";
	}
	return 0;
}