#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{58, 87, 27, 8, 4};
    assert(score_signal(signal_case_1) == 105);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{70, 95, 24, 9, 11};
    assert(score_signal(signal_case_2) == 157);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{98, 105, 17, 8, 6};
    assert(score_signal(signal_case_3) == 229);
    assert(classify_signal(signal_case_3) == "accept");
}
