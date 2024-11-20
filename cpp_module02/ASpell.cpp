#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(std::string name, std::string effects)
{
    _name = name;
    _effects = effects;
}

ASpell::ASpell(ASpell const &copy)
{
    *this = copy;
}

ASpell &ASpell::operator=(ASpell const &rhs)
{
    _name = rhs._name;
    _effects = rhs._effects;
    return *this;
}

ASpell::~ASpell()
{

}

const std::string &ASpell::getName() const
{
    return _name;
}

const std::string &ASpell::getEffects() const
{
    return _effects;
}

void ASpell::launch(const ATarget &target)
{
    target.getHitBySpell(*this);
}