/*  judah burke
    contains information about playing card suit */

#ifndef CARD_SUIT_H
#define CARD_SUIT_H
#include <iostream>
#include <string>

namespace card {
    enum CardSuitColorKey { NOCOLOR, RED, BLACK };

    enum CardSuitKey { NOSUIT, SPADES, HEARTS, CLUBS, DIAMONDS };

    struct CardSuit
    {
    private:
        CardSuitKey k;
        int v;
    public:
        CardSuit(CardSuitKey key, int value);
        CardSuitKey key();
        CardSuitColorKey colorKey();
        int value();
        int compare(const CardSuit& other);
        virtual bool operator==(const CardSuit& other);
        virtual bool operator<(const CardSuit& other);
        virtual bool operator>(const CardSuit& other);
    };
}

#endif