#ifndef REQMSLIST_H
#define REQMSLIST_H
#include "ReqMS.h"
#include <vector>

// Store objects of MS in vector
// Build vector from file
class ReqMSList {

private:
    std::vector<ReqMS> ms_list;
public:
    ReqMSList();
    std::vector<ReqMS> get_ms_list();
    int get_size();
    ReqMS& operator[] (int num);
};
#endif