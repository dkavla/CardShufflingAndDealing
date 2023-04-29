
#include <array>
#include <string>
#include <random>
#include "Card.h"
#include "CardDetails.h"
#include "DeckOfCards.h"

DeckOfCards::DeckOfCards() {
    int idx = 0;
    while (idx < 52) {
        for (int i = 0; i < 13; i++) {
            for (int j = 0; j < 4; j++) {
                deck[idx] = Card(getFace(i), getSuit(j));
                idx++;
            }
        }
    }

    currentCard = 0;
}

// Accessor Functions
std::array<Card, 52> DeckOfCards::getDeck() const {
    return this->deck;
}

// Functionality
void DeckOfCards::shuffle() {
    std::srand(time(0));
    int idx;
    for (int i = 0; i < 52; i++) {
        idx = rand() % 52;
        Card temp = deck[i];
        deck[i] = deck[idx];
        deck[idx] = temp;
    }
    currentCard = 0; // reset to front of deck
}

Card DeckOfCards::dealCard() {
    Card dealtCard = this->deck[currentCard++];
    return dealtCard;
}

bool DeckOfCards::moreCards() const {
    return currentCard <= 51;
}

Suit DeckOfCards::getSuit(int suitIdx) const {
    Suit s;
    switch (suitIdx) {
        case 0:
            s = Suit::SPADES;
            break;
        case 1:
            s = Suit::HEARTS;
            break;
        case 2:
            s = Suit::DIAMONDS;
            break;
        case 3:
            s = Suit::CLUBS;
            break;
    }

    return s;
}

Face DeckOfCards::getFace(int faceIdx) const {
    Face f;

    switch (faceIdx) {
        case 0:
            f = Face::ACE;
            break;
        case 1:
            f = Face::TWO;
            break;
        case 2:
            f = Face::THREE;
            break;
        case 3:
            f = Face::FOUR;
            break;
        case 4:
            f = Face::FIVE;
            break;
        case 5:
            f = Face::SIX;
            break;
        case 6:
            f = Face::SEVEN;
            break;
        case 7:
            f = Face::EIGHT;
            break;
        case 8:
            f = Face::NINE;
            break;
        case 9:
            f = Face::TEN;
            break;
        case 10:
            f = Face::JACK;
            break;
        case 11:
            f = Face::QUEEN;
            break;
        case 12:
            f = Face::KING;
            break;
    }
    return f;
}