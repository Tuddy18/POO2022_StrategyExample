//
// Created by tuddy on 19-Apr-22.
//

#include "repo/IRepo.h"
#include "repo/RepoInMemory.h"
#include "repo/RepoInFile.h"

int main(){

    RepoInMemory repoInMemory;
    RepoInFile repoInFile;

    IRepo& repo = repoInFile;

    repo.create(42);

    for (int e: repo.getAll()) {
        cout << e << endl;
    }

}

