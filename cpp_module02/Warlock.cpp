#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
{
    this->_name = name;
    this->_title = title;
    this->_book = new SpellBook;
    std::cout << name <<": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << _name <<": My job here is done!" << std::endl;
    delete _book;
}

Warlock::Warlock()
{
    std::cout << _name << ":This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock &copy)
{
    *this = copy;
}


Warlock &Warlock::operator=(const Warlock &rhs)
{
    this->_name = rhs._name;
    this->_title = rhs._title;
    delete _book;
    this->_book = rhs._book;
    return *this;
}

void Warlock::introduce() const
{
    std::cout << _name <<": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
    _book->learnSpell(spell);
}

void Warlock::forgetSpell(std::string const spellName)
{
    _book->forgetSpell(spellName);
}

void Warlock::launchSpell(std::string const spellName, ATarget const &target)
{
    ASpell* spell = _book->createSpell(spellName);
    if (spell)
        spell->launch(target);
    delete spell;
}