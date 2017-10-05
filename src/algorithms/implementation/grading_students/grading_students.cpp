#include "grading_students.h"
#include <iostream>
#include <string>
#include <vector>

using hackerrank::bmgandre::algorithms::implementation::grading_students;

void grading_students::run()
{
    auto n = 0; // the number of students
    std::cin >> n;

    for (auto i = 0; i < n; i++) {
        auto grade_i = 0;
        std::cin >> grade_i;

        auto remainder = grade_i % 5;
        auto next_multiple = grade_i - remainder + 5;
        if ((grade_i < 38) || (remainder == 0) || (next_multiple - grade_i >= 3)) {
            std::cout << grade_i << std::endl;
        } else {
            std::cout << next_multiple << std::endl;
        }
    }
}
