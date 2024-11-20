#include "Warlock.hpp"

Warlock::Warlock()
{
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(std::string name, std::string title)
{
    _name = name;
    _title = title;
    _book = new SpellBook;
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &copy)
{
    *this = copy;
}

Warlock &Warlock::operator=(Warlock const &rhs)
{
    _name = rhs._name;
    _title = rhs._title;
    _book = rhs._book;
    return *this;
}

Warlock::~Warlock()
{
    delete _book;
    std::cout << _name << ": My job here is done!" << std::endl;

}

const std::string &Warlock::getName() const
{
    return _name;
}

const std::string &Warlock::getTitle() const
{
    return _title;
}

void Warlock::setTitle(std::string const &title)
{
    _title = title;
}

void Warlock::introduce() const
{
    std::cout << _name << ": I am " << _name << ", " << _title << "!"<< std::endl;
}


void Warlock::learnSpell(ASpell* spell)
{
    if (spell)
        _book->learnSpell(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
    _book->forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
    ASpell *spell = _book->createSpell(spellName);
    if (spell)
        spell->launch(target);
    delete spell;
}


