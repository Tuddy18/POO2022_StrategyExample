//
// Created by tuddy on 19-Apr-22.
//

#ifndef POO2022_STRATEGYEXAMPLE_IREPO_H
#define POO2022_STRATEGYEXAMPLE_IREPO_H

#include <iostream>
#include <vector>

using namespace std;


class IRepo{
public:

    virtual void create(int) = 0;

    virtual vector<int> getAll() = 0;
};

#endif //POO2022_STRATEGYEXAMPLE_IREPO_H
