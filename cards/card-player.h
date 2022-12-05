/*  judah burke
    contains information about player */

#ifndef CARD_PLAYER_H
#define CARD_PLAYER_H

#include <string>

namespace card {
    class CardPlayer
    {
    private:
        string n;
        string id;
    public:
	CardPlayer();
	CardPlayer(string name);
        string name();
        int compare(const CardPlayer& other);
	bool operator==(const CardPlayer& other);
    };
}

#endif
