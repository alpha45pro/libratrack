#include <gtest/gtest.h>
TEST(Issue01_Public, IsAvailableReturnsFalseWhenZeroCopies) {
    Book b("9780000000001", "Test Book", "Author A", 2020, 1);
    b.decrementCopies();          // copies_available_ is now 0
    EXPECT_FALSE(b.isAvailable()) << "isAvailable() must return false when copies_available_ == 0";
}
