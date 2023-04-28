#include <string>
#include "CardDetails.h"

#pragma once

class Card {
    public:
        Card(Face, Suit);

        // Accessor functions
        Face getCardFace() const;
        Suit getCardSuit() const;

        // Mutator functions
        void setCardFace(Face);
        void setCardSuit(Suit);

        std::string toString() const;

    private:
        Face face;
        Suit suit;
};