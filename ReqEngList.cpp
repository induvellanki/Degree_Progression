#include "ReqEngList.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// When object created --> vector built from courses in corr. file
ReqEngList::ReqEngList () {
    ifstream input_file;
    input_file.open("eng_inventory.txt");

    string short_name, long_name;
    int course_credits;
    string temp, temp_credits;
    while (getline(input_file, temp)) {
        stringstream ss(temp);
        getline(ss, short_name, ',');
        getline(ss, long_name, ',');
        getline(ss, temp_credits);
        course_credits = stoi(temp_credits);

        ReqEng eng_req(short_name, long_name, course_credits);
        eng_list.push_back(eng_req);
    }
    input_file.close();
}
vector<ReqEng> ReqEngList::get_eng_list() {
    return eng_list;
}
int ReqEngList::get_size() {
    return eng_list.size();
}
ReqEng& ReqEngList::operator[] (int num) {
    return eng_list[num];
}