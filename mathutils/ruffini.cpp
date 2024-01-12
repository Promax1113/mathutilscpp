#include "ruffini.h"
#include <vector>

Ruffini::dict_t Ruffini::ruffini(int multi, std::vector<int> coefficients) {
    std::vector<int> resultant;
    std::vector<int> results = {coefficients[0]};

    for (unsigned i = 1; i < coefficients.size(); i++){
        results.push_back((results.at(i - 1) * multi) + coefficients.at(i));
    }

    int remainder = results.at(results.size() - 1);
    results.pop_back();
    dict_t returnable = {remainder, results};

    return returnable;
}
