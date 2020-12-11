#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

	std::cout << "\n---------\n" << std::endl;

    Squad squad;
    ISpaceMarine* joey = new TacticalMarine;
    ISpaceMarine* rachel = new AssaultTerminator;
    ISpaceMarine* phoebe = new TacticalMarine;
    ISpaceMarine* ross = new AssaultTerminator;
    squad.push(joey);
    squad.push(rachel);
    squad.push(phoebe);
    squad.push(ross);

    squad.getUnit(1)->battleCry();
    squad.getUnit(2)->battleCry();
    
    squad.getUnit(3)->meleeAttack();
    squad.getUnit(0)->rangedAttack();

    std::cout << "count = " << squad.getCount() << std::endl;

	return 0;
}