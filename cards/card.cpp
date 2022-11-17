#include "card.h"
#include "card-suit.h"
#include "card-rank.h"

using namespace card;

Card::Card(CardRank rank, CardSuit suit)
    : r(rank), s(suit) {}

CardRank Card::rank() {
    return r;
}

CardSuit Card::suit() {
    return s;
}

bool Card::operator==(const Card& other) {
    return s == other.s && r == other.r;
}
bool Card::operator<(const Card& other) {
    if ( s < other.s) {
        return true;
    } else if (s > other.s) {
        return false;
    } else if (r < other.r) {
        return true;
    } else {
        return false;
    }
}
bool Card::operator>(const Card& other) {
    if ( s > other.s) {
        return true;
    } else if (s < other.s) {
        return false;
    } else if (r > other.r) {
        return true;
    } else {
        return false;
    }
}