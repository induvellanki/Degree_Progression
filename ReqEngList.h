#ifndef REQENGLIST_H
#define REQENGLIST_H
#include "ReqEng.h"
#include <vector>

// Store objects of Eng in vector
// Build vector from file
class ReqEngList {

private:
    std::vector<ReqEng> eng_list;
public:
    ReqEngList();
    std::vector<ReqEng> get_eng_list();
    int get_size();
    ReqEng& operator[] (int num);
};
#endif