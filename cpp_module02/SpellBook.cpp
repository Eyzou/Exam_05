#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() 
{
    for (std::map<std::string, ASpell*>::iterator it = _spells.begin(); it != _spells.end(); ++it)
    {
        delete it->second;
    }
    _spells.clear();
}

SpellBook::SpellBook(SpellBook const &copy)
{
    *this = copy;
}

SpellBook &SpellBook::operator=(SpellBook const &rhs)
{
    for (std::map<std::string, ASpell*>::iterator it = _spells.begin() ; it != _spells.end(); ++it)
    {
        delete it->second;
    }
    _spells.clear();
    this->_spells = rhs._spells;
    return *this;
}

void SpellBook::learnSpell(ASpell* spell)
{
    if (spell)
        _spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it = _spells.find(spellName);
    if (it != _spells.end())
    {
        delete it->second;
        _spells.erase(it);
    }

}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string, ASpell*>::iterator it =_spells.find(spellName);
    if (it != _spells.end())
        return it->second->clone();
    return 0;
}
