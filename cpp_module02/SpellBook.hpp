#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const &spellName);
        ASpell* createSpell(std::string const &spellName);

    private:
        SpellBook(SpellBook const &copy);
        SpellBook &operator=(SpellBook const &rhs);
        std::map<std::string, ASpell*> _spells;
};