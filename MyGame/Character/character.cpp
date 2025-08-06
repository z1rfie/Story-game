#include "character.h"
#include <iostream>

Character::Character(int health,
	int impact_force, int attack_speed) :  _health(health), 
	_impact_force(impact_force), _attack_speed(attack_speed) {}

//TypeCharacter Character::get_type() { return _type; }
int Character::get_health() { return _health; }
int Character::get_impact_force() { return _impact_force; }
int Character::get_attack_speed() { return _attack_speed; }
void Character::attack_the_character(Character& goal) { 
	if (!isAlive() || !goal.isAlive()) return;
	goal.being_attacked(_impact_force);
}
void Character::being_attacked(int damage) { _health -= damage; }
bool Character::isAlive() const { return _health > 0; }