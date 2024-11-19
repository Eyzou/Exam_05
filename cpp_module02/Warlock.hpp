#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ATarget;
class ASpell;
class SpellBook;

class Warlock
{
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        const std::string &getName() const {return _name;}
        const std::string &getTitle() const {return _title;}
        void setTitle(const std::string &title) { this->_title = title;};
        void introduce() const;
        void learnSpell(ASpell* spell);
        void forgetSpell(std::string const spellName);
        void launchSpell(std::string const spellName, ATarget const &target);

    private:
        std::string _name;
        std::string _title;
        SpellBook* _book;
        Warlock();
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &rhs);
};