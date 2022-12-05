/*  judah burke
    contains information about playing card */

#ifndef CARD_FACTORY_H
#define CARD_FACTORY_H
#include <list>
#include "card-deck.h"

namespace card {
    class CardFactory
    {
    public:
        CardDeck createDeck() = 0;
        std::list<Card> cards();
        std::list<CardSuit> suits();
        std::list<CardRank> ranks();
    };
}

#endif
