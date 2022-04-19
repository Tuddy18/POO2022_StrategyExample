//
// Created by tuddy on 19-Apr-22.
//

#ifndef POO2022_STRATEGYEXAMPLE_REPOINMEMORY_H
#define POO2022_STRATEGYEXAMPLE_REPOINMEMORY_H

#include "IRepo.h"

class RepoInMemory: public IRepo{
public:
    void create(int i) override;

    vector<int> getAll() override;
};

#endif //POO2022_STRATEGYEXAMPLE_REPOINMEMORY_H
