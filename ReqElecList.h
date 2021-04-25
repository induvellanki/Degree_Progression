#ifndef REQELECLIST_H
#define REQELECLIST_H
#include "ReqElec.h"
#include <vector>

// Store objects of Elec in vector
// Build vector from file
class ReqElecList {

private:
    std::vector<ReqElec> elec_list;
public:
    ReqElecList();
    std::vector<ReqElec> get_elec_list();
    int get_size();
    ReqElec& operator[] (int num);
};
#endif