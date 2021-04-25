#include "ReqTheoryList.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

// When object created --> vector built from courses in corr. file
ReqTheoryList::ReqTheoryList () {
    ifstream input_file;
    input_file.open("theory_inventory.txt");

    string short_name, long_name;
    int course_credits;
    string temp, temp_credits;
    while (getline(input_file, temp)) {
        stringstream ss(temp);
        getline(ss, short_name, ',');
        getline(ss, long_name, ',');
        getline(ss, temp_credits);
        course_credits = stoi(temp_credits);

        ReqTheory theory_req(short_name, long_name, course_credits);
        theory_list.push_back(theory_req);
    }
    input_file.close();
}
vector<ReqTheory> ReqTheoryList::get_theory_list() {
    return theory_list;
}
int ReqTheoryList::get_size() {
    return theory_list.size();
}
ReqTheory& ReqTheoryList::operator[] (int num) {
    return theory_list[num];
}