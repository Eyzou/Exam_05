#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}
/*
SpellBook::SpellBook(SpellBook const &copy)
{
    *this = copy;
}

SpellBook &SpellBook::operator=(SpellBook const &rhs)
{
    return *this;
}*/

SpellBook::~SpellBook()
{
    for(std::map<std::string, ASpell*>::iterator it = _spell.begin(); it != _spell.end(); ++it)
    {
        delete it->second;
    }
    _spell.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
        _spell[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = _spell.find(spellName);
    if (it != _spell.end())
    {
        delete it->second;
        _spell.erase(it);
    }
    
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = _spell.find(spellName);
    if (it != _spell.end())
        return it->second->clone();
    return 0;
}


