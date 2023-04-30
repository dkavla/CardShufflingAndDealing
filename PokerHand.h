
#include <array>
#include "Card.h"

#pragma once

bool isPair(const std::array<Card, 5>&);
bool isTwoPairs(const std::array<Card, 5>&);
bool isThreeOfAKind(const std::array<Card, 5>&);
bool isFourOfAKind(const std::array<Card, 5>&);
bool isFlushHand(const std::array<Card, 5>&);