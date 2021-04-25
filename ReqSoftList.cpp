#include "ReqSoftList.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// When object created --> vector built from courses in corr. file
ReqSoftList::ReqSoftList () {
    ifstream input_file;
    input_file.open("soft_inventory.txt");

    string short_name, long_name;
    int course_credits;
    string temp, temp_credits;
    while (getline(input_file, temp)) {
        stringstream ss(temp);
        getline(ss, short_name, ',');
        getline(ss, long_name, ',');
        getline(ss, temp_credits);
        course_credits = stoi(temp_credits);

        ReqSoft soft_req(short_name, long_name, course_credits);
        soft_list.push_back(soft_req);
    }
    input_file.close();
}
vector<ReqSoft> ReqSoftList::get_soft_list() {
    return soft_list;
}
int ReqSoftList::get_size() {
    return soft_list.size();
}
ReqSoft& ReqSoftList::operator[] (int num) {
    return soft_list[num];
}