#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{52, 27, 17, 74};
    assert(domain_review_score(item) == 154);
    assert(domain_review_lane(item) == "ship");
}
