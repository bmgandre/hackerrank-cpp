#include <hackerrank_gtest.h>
#include "angry_professor.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {
	
using angry_professor_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(angry_professor_test, test_case_1) {
	input_stream << "2\n4 3\n-1 -3 4 2\n4 2\n0 - 1 2 1\n";

	angry_professor::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "YES\nNO\n");
}

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
