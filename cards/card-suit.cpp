#include "card-suit.h"
using namespace card;

CardSuit::CardSuit(CardSuitKey key, int value) {
    k = key;
    v = value;
}

CardSuitKey CardSuit::key() {
    return k;
}

CardSuitColorKey CardSuit::colorKey() {
    switch (k)
    {
    case HEARTS:
    case DIAMONDS:
        return RED;
    case CLUBS:
    case SPADES:
        return BLACK;
    default:
        return NOCOLOR;
    }
}

int CardSuit::value() {
    return v;
}

    
bool CardSuit::operator==(const CardSuit& other) {
    return k == other.k && v == other.v;
}
bool CardSuit::operator<(const CardSuit& other) {
    return v < other.v;
}
bool CardSuit::operator>(const CardSuit& other) {
    return v > other.v;
}