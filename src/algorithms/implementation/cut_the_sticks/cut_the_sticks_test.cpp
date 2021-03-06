#include <hackerrank_gtest.h>
#include "cut_the_sticks.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using cut_the_sticks_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(cut_the_sticks_test, test_case_1) {
	input_stream << "6\n5 4 4 2 2 8";
	cut_the_sticks::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "6\n4\n2\n1\n");
}

TEST_F(cut_the_sticks_test, test_case_2) {
	input_stream << "8\n1 2 3 4 3 3 2 1";
	cut_the_sticks::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "8\n6\n4\n1\n");
}

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
