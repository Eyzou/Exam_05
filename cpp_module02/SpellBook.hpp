#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
    public:
        SpellBook();
        ~SpellBook();

        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(std::string const &title);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const &spellName);
        ASpell* createSpell(std::string const &spellName);


    private:
        //SpellBook(SpellBook const &copy);
        //SpellBook &operator=(SpellBook const &rhs);
        std::map<std::string, ASpell*> _spell;
};