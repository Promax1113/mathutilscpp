#include <vector>
#include "roots.h"
#include "divisors.h"
#include "ruffini.h"

std::vector<int> findRoots(std::vector<int> coefficients){
    std::vector<int> roots;
    std::vector<int> divisorList = getDivisors(coefficients.back());

    for (unsigned i = 1; i < divisorList.size(); ++i)
    {   
        if (Ruffini::ruffini(divisorList.at(i-1), coefficients).first == 0){
            roots.push_back(divisorList.at(i-1));
        }
    }

    return roots;
}
