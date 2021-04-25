#ifndef CHECKREQ_H
#define CHECKREQ_H
#include "CourseList.h"
#include "ReqMSList.h"
#include "ReqEngList.h"
#include "ReqSpecList.h"
#include "ReqCompList.h"
#include "ReqSoftList.h"
#include "ReqTheoryList.h"
#include "ReqElecList.h"

class CheckReq {

public:
    void check_math_science (CourseList& taken, ReqMSList& required);
    void check_eng (CourseList& taken, ReqEngList& required);
    void check_specialization (CourseList& taken, ReqSpecList& required);
    void check_composition (CourseList& taken, ReqCompList& required);
    void check_software (CourseList& taken, ReqSoftList& required);
    void check_theory (CourseList& taken, ReqTheoryList& required);
    void check_elective (CourseList& taken, ReqElecList& required);
};
#endif