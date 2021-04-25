#ifndef REQTHEORYLIST_H
#define REQTHEORYLIST_H
#include "ReqTheory.h"
#include <vector>

// Store objects of Theory in vector
// Build vector from file
class ReqTheoryList {

private:
    std::vector<ReqTheory> theory_list;
public:
    ReqTheoryList();
    std::vector<ReqTheory> get_theory_list();
    int get_size();
    ReqTheory& operator[] (int num);
};
#endif