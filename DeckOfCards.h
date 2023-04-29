
#include <array>
#include <string>
#include "Card.h"

#pragma once

class DeckOfCards {
    public:
        DeckOfCards();

        // Accessor Functions
        std::array<Card, 52> getDeck() const;

        // Functionality
        void shuffle();
        Card dealCard();
        bool moreCards() const;

        Suit getSuit(int) const;
        Face getFace(int) const;

    private:
        std::array<Card, 52> deck;
        int currentCard;
};