/*  judah burke
    contains information about playing card */

#ifndef CARD_DECK_H
#define CARD_DECK_H
#include "card.h"
#include "card-options.h"

namespace card {
    class CardDeck
    {
    private:
        Card[52] cards;
    public:
        int count();
        Card pop();
        void push(Card);
        void cut(int, CutOptions);
        void shuffle(ShuffleOptions);
    };
}

#endif