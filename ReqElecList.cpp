#include "ReqElecList.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// When object created --> vector built from courses in corr. file
ReqElecList::ReqElecList () {
    ifstream input_file;
    input_file.open("elec_inventory.txt");

    string short_name, long_name;
    int course_credits;
    string temp, temp_credits;
    while (getline(input_file, temp)) {
        stringstream ss(temp);
        getline(ss, short_name, ',');
        getline(ss, long_name, ',');
        getline(ss, temp_credits);
        course_credits = stoi(temp_credits);

        ReqElec elec_req(short_name, long_name, course_credits);
        elec_list.push_back(elec_req);
    }
    input_file.close();
}
vector<ReqElec> ReqElecList::get_elec_list() {
    return elec_list;
}
int ReqElecList::get_size() {
    return elec_list.size();
}
ReqElec& ReqElecList::operator[] (int num) {
    return elec_list[num];
}