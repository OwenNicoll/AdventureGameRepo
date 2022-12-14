
#include "Item.h"
#include "Creature.h"
#include "Player.h"

class Potion :
    public Item
{

public:
    Potion();
    Potion(std::string newName, std::string newDescription);
    ~Potion();

    void Use(Creature* target);
    void Use(Thing target);
};

