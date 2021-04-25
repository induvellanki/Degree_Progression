#ifndef REQSPECLIST_H
#define REQSPECLIST_H
#include "ReqSpec.h"
#include <vector>

// Store objects of Spec in vector
// Build vector from file
class ReqSpecList {

private:
    std::vector<ReqSpec> spec_list;
public:
    ReqSpecList();
    std::vector<ReqSpec> get_spec_list();
    int get_size();
    ReqSpec& operator[] (int num);
};
#endif