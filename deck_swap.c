/* Sher Khan 
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SUITS 4
#define RANKS 13
#define COLORS 7
#define DECK_SIZE 52

typedef struct	{
	char *rank;
	char *suit;
	char *colour;
}				Card;

Card *make_deck();

void print(Card *);

void shuffle(Card *);

void free_deck(Card **deck, int size);

void swap_cards(Card *deck1, Card *deck2);

/****** DO NOT ALTER THE MAIN FUNCTION ********/
int main() {

	Card *deck = make_deck();

	printf(" *************** Original Deck ***************\n");
	print(deck); /* print original deck */

	printf("\n\n *************** Shuffled Deck ***************\n");
	shuffle(deck);
	print(deck); /* print shuffled deck */

	free_deck(&deck, DECK_SIZE);
	return 0;
}

Card *make_deck()
{
	int i;
	int r;

	/* You may want to use these arrays to point rank and suit */
	char *ranks[] = {"King", "Queen", "Jack", "10", "9", "8", "7", "6", "5",
					 "4", "3", "2", "Ace"};
	char *suits[] = {"Spades", "Clubs", "Hearts", "Diamonds"};

	char *colors[] = {"Black", "Red", "Green", "Blue", "Yellow", "White", "Grey"};

	/* allocate space for DECK_SIZE cards on the heap */
	Card *deck = (Card*)malloc((DECK_SIZE) * sizeof(Card));

	/* Initialize the rand() function */
	srand(time(NULL));

	/* Iterate through all the allocated Cards */
	i = -1;
	while (++i < DECK_SIZE)
	{
		/* Generate a new random number */
		r = rand();
		/* Set the ranks,suits and colours of the cards  */
		deck[i].rank = strdup(ranks[r % RANKS]);
		deck[i].suit = strdup(suits[r % SUITS]);
		deck[i].colour = strdup(colors[r % COLORS]);
	}

	return deck;
}

/* Free the memory allocated by the array of Cards */
void free_deck(Card **deck, int size)
{
	int i;

	i = -1;
	while (++i < size)
	{
		/* Free the element of each card */
		free((*deck)[i].colour);
		free((*deck)[i].suit);
		free((*deck)[i].rank);
	}
	free(*deck);
}

/* should print the deck to the screen - getting so much errors.  */
void print(Card *deck)
{
	int i;

	i = -1;
	while (++i < DECK_SIZE)
		printf("%s %s %s\n", deck[i].colour, deck[i].suit, deck[i].rank);
}

/*
 * swap_cards : swap the memory of two given Cards with the help a temporary Card.
 */
void swap_cards(Card *deck1, Card *deck2)
{
	Card *tmp;

	/* Allocate memory for the temporary Card which is used for swapping */
	tmp = (Card*)malloc(1 * sizeof(Card));

	/* Swap memory between the two cards using tmp as intermediary memory holder */

	/* Copy memory of deck1 in tmp */
	memcpy(tmp, deck1, sizeof(Card));
	/* Copy memory of deck2 in deck1 */
	memcpy(deck1, deck2, sizeof(Card));
	/* Copy memory of tmp in deck2 */
	memcpy(deck2, tmp, sizeof(Card));

	/* Free the memory allocated for the temporary variable */
	free(tmp);
}

/* traverse the deck, one card at a time, swapping the current card
 * with a randomly chosen card from the deck
 */
void shuffle(Card *deck)
{
	int i;
	int ri;

	/* Initialize the rand() function */

	i = -1;
	srand(time(NULL));
	while (++i < DECK_SIZE)
	{
		ri = rand() % DECK_SIZE;
		swap_cards(&deck[i], &deck[ri]);
	}
}

