#include "gtest/gtest.h"

#include "card/card-suit.h"

using namespace card

TEST(CardTest, TestCompareSame) {
	Card s1 = new CardSuit(HEARTS, 0);
	Card s2 = new CardSuit(HEARTS  0);
	EXPECT_FALSE(s1 > s2)
	EXPECT_FALSE(s1 < s2)
	EXPECT_TRUE(s1 == s2
}
