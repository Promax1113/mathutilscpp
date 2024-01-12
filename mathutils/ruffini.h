#ifndef RUFFINI_H
#define RUFFINI_H

#include <map>
#include <vector>
#include <string>

class Ruffini{
    public:
        typedef std::pair<int, std::vector<int>> dict_t;

        static dict_t ruffini(int multi, std::vector<int> coefficients);
};


#endif // RUFFINI_H
