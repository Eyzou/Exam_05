#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();

        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(std::string const &title);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget &target);


    private:
        Warlock();
        Warlock(Warlock const &copy);
        Warlock &operator=(Warlock const &rhs);
        std::string _name;
        std::string _title;
        SpellBook* _book;
};