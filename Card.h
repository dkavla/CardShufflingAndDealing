#include <string>
#include <array>
#include "CardDetails.h"

#pragma once

class Card {
    public:
        Card(Face = Face::ACE, Suit = Suit::SPADES);

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
        static std::array<std::string, 13> faces;
        static std::array<std::string, 4> suits;
};