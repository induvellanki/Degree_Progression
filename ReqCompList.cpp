#include "ReqCompList.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// When object created --> vector built from courses in corr. file
ReqCompList::ReqCompList () {
    ifstream input_file;
    input_file.open("comp_inventory.txt");

    string short_name, long_name;
    int course_credits;
    string temp, temp_credits;
    while (getline(input_file, temp)) {
        stringstream ss(temp);
        getline(ss, short_name, ',');
        getline(ss, long_name, ',');
        getline(ss, temp_credits);
        course_credits = stoi(temp_credits);

        ReqComp comp_req(short_name, long_name, course_credits);
        comp_list.push_back(comp_req);
    }
    input_file.close();
}
vector<ReqComp> ReqCompList::get_comp_list() {
    return comp_list;
}
int ReqCompList::get_size() {
    return comp_list.size();
}
ReqComp& ReqCompList::operator[] (int num) {
    return comp_list[num];
}