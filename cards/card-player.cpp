#include "card-player.h"

using namespace card;

CardPlayer::CardPlayer() {
	n = "Esoteric Player";
	id = generate_uiid();
}
CardPlayer::CardPlayer(string name) {
	n = name;
	id = generate_uiid();
}

string CardPlayer::name() {
	return name;
}
int CardPlayer::compare(const Card& other) {
	return this.id > other.id ? 1
		: this.id < other.id ? -1
		: 0;
}
bool CardPlayer::operator==(const Card other) {
	return this.id == other.id;
}

#endif
