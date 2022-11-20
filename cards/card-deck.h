/*  judah burke
    contains information about playing card */

#ifndef CARD_DECK_H
#define CARD_DECK_H

#include <list>
#include "card.h"
#include "card-options.h"

namespace cards {
    class CardDeck
    {
    private:
	std::list<Card> cards;
    public:
        int count();
        Card pop();
        void push(Card);
        void cut(int, CutOptions);
        void shuffle(ShuffleOptions);
    };
}

#endif
