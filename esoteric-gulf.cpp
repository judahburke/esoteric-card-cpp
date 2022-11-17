#include <iostream>
#include "cards/card.h";
#include "gulf/gulf.h";

using namespace std;

void parseOptions() {
    // read about user to determine game mechanics
}

void parsePlayerInfo() {
    // read from user about what they'd like to be called
}

int main() {
    // welcome
    // GulfFactory factory = new GulfFactory();
    // GulfDealer dealer = new GulfDealer();
    cout << "Welcome to Gulf! Enjoy your stay!";

    // play game
    for (char again = 'y'; again == 'y' || again == 'Y'; cin >> again) {
        cout << "I don't really have stuff for you to do...";
        // var deck = factory.createDeck();
        // var options = parseOptions();
        // var player1 = parsePlayerInfo();
        // var player2 = new Player();
        // dealer.dealGulf(player1, player2);
        // dealer.playGulf();

        cout << "Would you like to play again? (y/n) ";
    }
    
    cout << endl << "Thanks for playing!" << endl;
    return 0;
}
