cmake_minimum_required(VERSION 3.25)

project(CardShufflingDealing)

set(CMAKE_CXX_STANDARD 20)

add_executable(CardShuffleDeal main.cpp Card.cpp DeckOfCards.cpp PokerHand.cpp)