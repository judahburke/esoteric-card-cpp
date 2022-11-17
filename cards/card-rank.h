/*  judah burke
    contains information about playing card rank */

#ifndef CARD_RANK_H
#define CARD_RANK_H

namespace card {

    enum CardRankKey { ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE, JOKER, OLDMAID };

    struct CardRank
    {
    private:
        CardRankKey k;
        int v;
    public:
        CardRank(CardRankKey key, int value);
        CardRankKey key();
        int value();
        int compare(const CardRank& other);
        virtual bool operator==(const CardRank& other) const;
        virtual bool operator<(const CardRank& other) const;
        virtual bool operator>(const CardRank& other) const;
    };

}

#endif