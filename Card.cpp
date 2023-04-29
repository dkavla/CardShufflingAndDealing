
#include <sstream>
#include "Card.h"
#include "CardDetails.h"


// used to access when outputing Card as string
std::array<std::string, 13> Card::faces = {"Ace", "Two", "Three", "Four",
                                        "Five", "Six", "Seven", "Eight", "Nine",
                                        "Ten", "Jack", "Queen", "King"};

std::array<std::string, 4> Card::suits = {"Spades", "Hearts", "Diamonds", "Clubs"};

// Constructor
Card::Card(Face face, Suit suit) {
    setCardFace(face);
    setCardSuit(suit);
}

// Accessor functions
Face Card::getCardFace() const {
    return this->face;
}

Suit Card::getCardSuit() const {
    return this->suit;
}

// Mutator functions
void Card::setCardFace(Face face) {
    this->face = face;
}

void Card::setCardSuit(Suit suit) {
    this->suit = suit;
}

// Outputs card face and suit as string
std::string Card::toString() const {
    std::ostringstream output;
    output << this->faces[static_cast<int>(this->face)] << " of " << this->suits[static_cast<int>(this->suit)];
    return output.str();
}