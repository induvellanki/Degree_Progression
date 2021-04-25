#include "ReqMSList.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// When object created --> vector built from courses in corr. file
ReqMSList::ReqMSList () {
    ifstream input_file;
    input_file.open("ms_inventory.txt");

    string short_name, long_name;
    int course_credits;
    string temp, temp_credits;
    while (getline(input_file, temp)) {
        stringstream ss(temp);
        getline(ss, short_name, ',');
        getline(ss, long_name, ',');
        getline(ss, temp_credits);
        course_credits = stoi(temp_credits);

        ReqMS ms_req(short_name, long_name, course_credits);
        ms_list.push_back(ms_req);
    }
    input_file.close();
}
vector<ReqMS> ReqMSList::get_ms_list() {
    return ms_list;
}
int ReqMSList::get_size() {
    return ms_list.size();
}
ReqMS& ReqMSList::operator[] (int num) {
    return ms_list[num];
}