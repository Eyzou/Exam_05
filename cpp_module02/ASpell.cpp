#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects)
{
    _name = name;
    _effects = effects;
}

ASpell::ASpell(const ASpell &copy)
{
    *this = copy;
}

ASpell &ASpell::operator=(const ASpell &rhs)
{
    this->_name = rhs._name;
    this->_effects = rhs._effects;
    return *this;
}

void ASpell::launch(const ATarget &target)
{
    target.getHitBySpell(*this);
}
    