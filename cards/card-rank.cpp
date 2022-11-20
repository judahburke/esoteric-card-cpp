#include "card-rank.h"
using namespace cards;

CardRank::CardRank(CardRankKey key, int value) {
    k = key;
    v = value;
}

CardRankKey CardRank::key() {
    return k;
}

int CardRank::value() {
    return v;
}
