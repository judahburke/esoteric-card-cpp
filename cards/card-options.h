/*  judah burke
    contains information about playing card */

#ifndef CARD_OPTIONS_H
#define CARD_OPTIONS_H

namespace card {
    class CutOptions
    {
    public:
        int min;
        int max;
    };
    class ShuffleOptions
    {
    public:
        int count;
    };
    class DealOptions
    {
    public:
        int count;
        bool isDealerFirst;
        bool isClockwise;
    };
}

#endif
