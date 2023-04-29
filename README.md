
# Program Description
The program consists of a Card class to represent a single card from a 52 card 
deck, and a DeckOfCards class which represents a deck of 52 cards. The latter 
class has a array to represent the deck as a member variable which stores the individual Card instances. The driver program in main.cpp will loop through the 52 card deck after the deck has been shuffled, while outputting them in a 13-by-4 matrix.

## Card Class
The constructor of the Card class takes two parameters, both are enumerations, one from the Face enumeration class and one from the Suit enumeration class (both defined in the CardDetails.h file). Additionally, the Card class has two static arrays, both of which store string representations of the face and suit values which are later used to initialize the array in the DeckOfCards class. 

The class also features the basic accessor and mutator member functions to set and retrieve the Card object's face and suit. Lastly, it also contains a toString() member function which returns a string representation of the object in the form of "face of suit", with the respective values of face and suit replaced by the face and suit of the current object calling the member function.

## DeckOfCards Class
The default constructor of the DeckOfCards class takes no parameters and initializes the deck array within the class, and adds Card objects into the array. Additionally, the class has a currentCard member variable to keep track of the current card that should be drawn. This variable is reset to 0 (the first card in the deck) everytime the deck is shuffled. 

The shuffle() member function will shuffle the 52 card deck. The dealCard() member function will deal the current card that the currentCard variable is current pointing to. The moreCards() function returns true if there are still cards to be dealt, and false otherwise.