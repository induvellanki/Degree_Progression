#ifndef REQSOFTLIST_H
#define REQSOFTLIST_H
#include "ReqSoft.h"
#include <vector>

// Store objects of Soft in vector
// Build vector from file
class ReqSoftList {

private:
    std::vector<ReqSoft> soft_list;
public:
    ReqSoftList();
    std::vector<ReqSoft> get_soft_list();
    int get_size();
    ReqSoft& operator[] (int num);
};
#endif