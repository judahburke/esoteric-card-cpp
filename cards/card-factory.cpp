#include "card-factory.h"

using namespace cards;

CardDeck CardFactory::createDeck() {
}
Card[] CardFactory::cards() {
	Card c [52];
	CardSuit * s = &suits();
	CardRank * r = &ranks();
	int i=0, si, ri;
	for (si=0; si<4; si++) {
		for (ri=0;ri<13;ri++) {
			c[i++] = new Card(
				r[ri],
				s[si]);
		}
	}
	return c;
}
CardSuit[] CardFactory::suits()
	return {
		new CardSuit(SPADES, 0),
		new CardSuit(HEARTS, 0),
		new CardSuit(CLUBS, 0),
		new CardSuit(DIAMONDS, 0)
	};
}
CardRank[] ranks() {
	return {
		new CardRank(ACE, 1),
		new CardRank(TWO, 2),
		new CardRank(THREE, 3),
		new CardRank(FOUR, 4),
		new CardRank(FIVE, 5),
		new CardRank(SIX, 6),
		new CardRank(SEVEN, 7),
		new CardRank(EIGHT, 8),
		new CardRank(NINE, 9),
		new CardRank(TEN, 10),
		new CardRank(JACK, 11),
		new CardRank(QUEEN, 12),
		new CardRank(KING, 13)
	}
}

