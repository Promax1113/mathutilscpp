#include "divisors.h"
#include <cstdlib>
#include <vector>


std::vector<int> getDivisors(int n){
	std::vector<int> divisors;

    for (int i = 1; i <= std::abs(n); ++i)
    {
    	if (std::abs(n) % i == 0){
    		divisors.push_back(i);
    		divisors.push_back(-i);
    	}
    }
    return divisors;
}