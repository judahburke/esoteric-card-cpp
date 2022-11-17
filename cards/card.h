/*  judah burke
    contains information about playing card */

#ifndef CARD_H
#define CARD_H
#include "card-rank.h"
#include "card-suit.h"

namespace card {
    struct Card
    {
    private:
        CardRank r;
        CardSuit s;
    public:
        Card(CardRank rank, CardSuit suit);
        CardRank rank();
        CardSuit suit();
        int compare(const Card& other);
        virtual bool operator==(const Card&);
        virtual bool operator<(const Card&);
        virtual bool operator>(const Card&);
    };
}

#endif