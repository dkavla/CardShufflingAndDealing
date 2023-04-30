
#include <array>
#include <iostream>
#include <iomanip>
#include "CardDetails.h"
#include "Card.h"
#include "DeckOfCards.h"
#include "PokerHand.h"

void dealPokerHandsExperiment(int&);

int main() {
    DeckOfCards d1;
    std::array<Card, 5> hand{};

    // deal all 52 cards
    // d1.shuffle();
    // int counter = 1;
    // while (counter <= 52) {
    //     std::cout << std::setw(17) << std::left << d1.dealCard().toString() << " ";
    //     if (counter % 4 == 0) {
    //         std::cout << std::endl;
    //     }
    //     counter++;
    // }
    int tests = 10000;

    // d1.shuffle();
    // int cardCounter = 0;
    // while (cardCounter < 5) {
    //     hand[cardCounter++] = d1.dealCard();
    // }

    // for (Card card : hand) {
    //     std::cout << std::setw(17) << std::left << card.toString() << " ";
    // }
    // std::cout << std::endl;

    dealPokerHandsExperiment(tests);
}

void dealPokerHandsExperiment(int& tests) {
    int pairs = 0;
    int twoPairs = 0;
    int threeOfAKind = 0;
    int fourOfAKind = 0;
    int flush = 0;

    DeckOfCards d1;

    int counter = 0;
    while (counter < tests) {
        std::array<Card, 5> hand = {};
        int cards = 0;
        while (cards < 5) {
            hand[cards++] = d1.dealCard();
        }

        if ( isFlushHand(hand) ) {
            flush++;
        } else if ( isFourOfAKind(hand) ) {
            fourOfAKind++;
        } else if ( isThreeOfAKind(hand) ) {
            threeOfAKind++;
        } else if ( isTwoPairs(hand) ) {
            twoPairs++;
        } else if ( isPair(hand) ) {
            pairs++;
        }

        d1.shuffle();
        counter++;
    }

    std::cout << "Pairs occurred " << std::setprecision(2) << (static_cast<double>(pairs) / tests) * 100 << "\% of the time.\n";
    std::cout << "Two Pairs occurred " << std::setprecision(2) << (static_cast<double>(twoPairs) / tests) * 100 << "\% of the time.\n";
    std::cout << "Three of a kind occurred " << std::setprecision(2) << (static_cast<double>(threeOfAKind) / tests) * 100 << "\% of the time.\n";
    std::cout << "Four of a kind occurred " << std::setprecision(2) << (static_cast<double>(fourOfAKind) / tests) * 100 << "\% of the time.\n";
    std::cout << "Flush occurred " << std::setprecision(2) << (static_cast<double>(flush) / tests) * 100 << "\% of the time.\n";
}