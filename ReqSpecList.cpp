#include "ReqSpecList.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// When object created --> vector built from courses in corr. file
ReqSpecList::ReqSpecList () {
    ifstream input_file;
    input_file.open("spec_inventory.txt");

    string short_name, long_name;
    int course_credits;
    string temp, temp_credits;
    while (getline(input_file, temp)) {
        stringstream ss(temp);
        getline(ss, short_name, ',');
        getline(ss, long_name, ',');
        getline(ss, temp_credits);
        course_credits = stoi(temp_credits);

        ReqSpec spec_req(short_name, long_name, course_credits);
        spec_list.push_back(spec_req);
    }
    input_file.close();
}
vector<ReqSpec> ReqSpecList::get_spec_list() {
    return spec_list;
}
int ReqSpecList::get_size() {
    return spec_list.size();
}
ReqSpec& ReqSpecList::operator[] (int num) {
    return spec_list[num];
}