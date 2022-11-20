/*  judah burke
    contains information about playing card */

#ifndef CARD_FACTORY_H
#define CARD_FACTORY_H
#include "card-deck.h"

namespace cards {
    class CardFactory
    {
    public:
        CardDeck createDeck();
        Card[] cards();
        CardSuit[] suits();
        CardRank[] ranks();
    };
}

#endif
