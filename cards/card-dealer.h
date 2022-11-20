/* judah burke
 */
#ifndef CARD_DEALER_H
#define CARD_DEALER_H

#include "card.h"
#include "card-options.h"

namespace cards {
	class CardDealer {
	public:
		Card[] deal(CardDeck, DealOptions);
	}
}

#endif
