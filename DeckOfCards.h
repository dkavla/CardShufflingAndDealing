
#include <array>
#include <string>

#pragma once

class DeckOfCards {
    public:
        DeckOfCards();

        // Accessor Functions
        std::array<std::string, 52> getDeck() const;

        // Mutator Functions
        void setDeck(std::array<std::string, 52>&);

    
    private:
        std::array<std::string, 52> deck;
};