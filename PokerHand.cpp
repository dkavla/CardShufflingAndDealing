
#include <iostream>
#include <array>
#include "Card.h"
#include "PokerHand.h"


bool isPair(const std::array<Card, 5>& hand) {
    std::array<int, 13> cardCounter = {};

    for (Card card : hand) {
        cardCounter[static_cast<int>(card.getCardFace())]++;
    }

    int pairCounter = 0;
    for (int x : cardCounter) {
        if (x == 2) {
            pairCounter++;
        }
    }

    return pairCounter == 1;
}

bool isTwoPairs(const std::array<Card, 5>& hand) {
    std::array<int, 13> cardCounter = {};

    for (Card card : hand) {
        cardCounter[static_cast<int>(card.getCardFace())]++;
    }

    int twoPairCounter = 0;
    for (int x : cardCounter) {
        if (x == 2) {
            twoPairCounter++;
        }
    }
    
    return twoPairCounter == 2;
}

bool isThreeOfAKind(const std::array<Card, 5>& hand) {
    std::array<int, 13> cardCounter = {};

    for (Card card : hand) {
        cardCounter[static_cast<int>(card.getCardFace())]++;
    }

    int threeKindCounter = 0;
    for (int x : cardCounter) {
        if (x == 3) {
            threeKindCounter++;
        }
    }

    return threeKindCounter == 1;
}

bool isFourOfAKind(const std::array<Card, 5>& hand) {
    std::array<int, 13> cardCounter = {};

    for (Card card : hand) {
        cardCounter[static_cast<int>(card.getCardFace())]++;
    }

    int fourOfAKindCounter = 0;
    for (int x : cardCounter) {
        if (x == 4) {
            fourOfAKindCounter++;
        }
    }

    return fourOfAKindCounter == 1;
}

bool isFlushHand(const std::array<Card, 5>& hand) {
    std::array<int, 4> suitCounter = {};

    for (Card card : hand) {
        suitCounter[static_cast<int>(card.getCardSuit())]++;
    }

    int singleSuitCounter = 0;
    for (int x : suitCounter) {
        if (x == 5) {
            singleSuitCounter++;
        }
    }

    return singleSuitCounter == 1;
}
