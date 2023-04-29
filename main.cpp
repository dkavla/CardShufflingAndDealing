
#include <iostream>
#include <iomanip>
#include "CardDetails.h"
#include "Card.h"
#include "DeckOfCards.h"

int main() {
    DeckOfCards d1;

    d1.shuffle();
    int counter = 1;
    while (counter <= 52) {
        std::cout << std::setw(17) << std::left << d1.dealCard().toString() << " ";
        if (counter % 4 == 0) {
            std::cout << std::endl;
        }
        counter++;
    }
}