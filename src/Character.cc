#include "Character.hh"

Character::Character(short int health, uint32_t strength, uint32_t exp, short int luck, uint32_t speed) 
{
    this->health = health;
    this->strength = strength;
    this->exp = exp;
    this->luck = luck;
    this->speed = speed;
}

Character::~Character()
{
    //delete
}

short int Character::GetHealth() const
{
    return health;
}

uint32_t Character::GetStrength() const
{
    return strength;
}

uint32_t Character::GetExp() const
{
    return exp;
}

uint32_t Character::GetSpeed() const
{
    return speed;
}

short int Character:: GetLuck() const
{
    return luck;
}

std::string Character :: GetLore() const
{
    return lore;
}

void Character::GetDamage(short damage)
{
    health -= (health - damage) >= 0 ? damage : 0; // ? pregunta si eso es verdad
    //si si se cumple la condición, le restamos el damage
    // : (si no) no le restes nada
}

void Character::SetLore(std::string lore)
{
    this->lore = lore;
}