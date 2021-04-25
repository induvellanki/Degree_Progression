#ifndef REQCOMPLIST_H
#define REQCOMPLIST_H
#include "ReqComp.h"
#include <vector>

// Store objects of Comp in vector
// Build vector from file
class ReqCompList {

private:
    std::vector<ReqComp> comp_list;
public:
    ReqCompList();
    std::vector<ReqComp> get_comp_list();
    int get_size();
    ReqComp& operator[] (int num);
};
#endif