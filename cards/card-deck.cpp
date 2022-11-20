#include "card-deck.h"

using namespace cards;

int CardDeck::count() {
	return cards.size();
}
Card CardDeck::pop() {
	return cards.pop_back();
}
void push(Card card) {
	cards.push_front(card);
}
void cut(int index, CutOptions options) {
	var stop = index < options.min ? options.min
		: index > options.max ? options.max
		: index;
	for (i = 0;i < stop;i++) {
		cards.push_front(cards.pop_back);
	}
}
void shuffle(ShuffleOptions) {
	
}
