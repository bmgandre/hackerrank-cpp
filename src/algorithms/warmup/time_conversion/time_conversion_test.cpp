#include <hackerrank_gtest.h>
#include "time_conversion.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using time_conversion_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(time_conversion_test, test_case_1) {
	input_stream << "07:05:45PM";
	time_conversion::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "19:05:45");
}

TEST_F(time_conversion_test, test_case_2) {
	input_stream << "12:05:45PM";
	time_conversion::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "12:05:45");
}

} // namespace warmup
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
