#include "weapon.h"
#include <iostream>

Weapon::Weapon(int coord_x, int coord_y, char image,
	const std::string& title, const std::string& description,
	bool is_active, int damage_bonus, int speed_bonus) : 
	GameObject(coord_x, coord_y, image, title, description, true),
	_damage_bonus(damage_bonus), _speed_bonus(speed_bonus) {
}

void Weapon::damage(Character& goal) {
	if (!_is_active) return;
	if (!goal.isAlive()) return;
	goal.being_attacked(_damage_bonus);
}
void Weapon::interact() {
	if (!_is_active) return;
	std::cout << "Это оружие: " << _description
		<< " (наносит " << _damage_bonus << " урона со скоростью " 
		<< _speed_bonus << " )\n";
}

int Weapon::get_damage_bonus() { return _damage_bonus; }
int Weapon::get_speed_bonus() { return _speed_bonus; }

void Weapon::set_damage_bonus(int damage_bonus) { 
	_damage_bonus = damage_bonus;
}
void Weapon::set_speed_bonus(int speed_bonus) {
	_speed_bonus = speed_bonus;
}