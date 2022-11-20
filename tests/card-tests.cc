#include "gtest/gtest.h"

using namespace card

TEST(CardTest, TestCompareDiffRankSameVal)
	Card ah = new Card(
			new CardRank(ACE, 14),
			new CardSuit(HEARTS, 0))
	Card qh = new Card(
			new CardRank(QUEEN, 14),
			new CardSuit(HEARTS  0))
	EXPECT_FALSE(ah == qh)
	EXPECT_TRUE(ah > qh)
}

TEST(CardTest, TestCompareDiffRankDiffVal)
	Card ah = new Card(
			new CardRank(ACE, 14),
			new CardSuit(HEARTS, 0))
	Card qh = new Card(
			new CardRank(QUEEN, 12),
			new CardSuit(HEARTS  0))
	EXPECT_FALSE(ah == qh)
	EXPECT_TRUE(ah > qh)
}


TEST(CardTest, TestCompareDiffSuitSameVal)
	Card ah = new Card(
			new CardRank(ACE, 14),
			new CardSuit(HEARTS, 0))
	Card qh = new Card(
			new CardRank(ACE, 14),
			new CardSuit(DIAMONDS, i))
	EXPECT_FALSE(ah == qh)
	EXPECT_TRUE(ah > qh)
}

