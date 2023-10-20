#ifndef CARDS_H
#define CARDS_H

#include <vector>

typedef std::vector<int> cardslist_t;
typedef int cardsvalue_t;


// наименования карт
namespace CardsValue
{
	const cardsvalue_t two{ 2 };
	const cardsvalue_t tree{ 3 };
	const cardsvalue_t four{ 4 };
	const cardsvalue_t five{ 5 };
	const cardsvalue_t six{ 6 };
	const cardsvalue_t seven{ 7 };
	const cardsvalue_t eight{ 8 };
	const cardsvalue_t nine{ 9 };
	const cardsvalue_t ten{ 10 };
	const cardsvalue_t valet{ 10 };
	const cardsvalue_t dama{ 10 };
	const cardsvalue_t korol{ 10 };
	const cardsvalue_t tuz{ 11 };
}

class CARDS
{
public:
	CARDS();
	~CARDS();
	
	

	enum CardsName
	{
		TWO,
		TREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN,
		VALET,
		DAMA,
		KOROL,
		TUZ,
		COUNT_CARDS = 13
	};


	cardslist_t cardlist_;

private:


};



#endif // !CARDS_H

