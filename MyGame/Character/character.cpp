#include "character.h"
#include <iostream>

Character::Character(int health,
	int impact_force, int attack_speed) :  _health(health), 
	_impact_force(impact_force), _attack_speed(attack_speed) {}

//TypeCharacter Character::get_type() { return _type; }
int Character::get_health() { return _health; }
int Character::get_impact_force() { return _impact_force; }
int Character::get_attack_speed() { return _attack_speed; }
void Character::attack_the_character(Character& goal, int impact_force) {
	if (!isAlive() || !goal.isAlive()) return;
	goal.being_attacked(impact_force);
}
void Character::being_attacked(int damage) { 
	if (!isAlive()) return;

	_health -= damage; 
	if (_health <= 0) {
		_health = 0;
	}
}
void Character::heal(int amount) {
	if (amount <= 0) return;

	_health += amount;
	if (_health > 10) {
		_health = 10; // 10 - max heal
	}
}
bool Character::isAlive() const { return _health > 0; }