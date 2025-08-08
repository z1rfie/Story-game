#pragma once
#include "game_object.h"
#include "character.h"

class Weapon : GameObject {
protected:
	int _damage_bonus;
	int _speed_bonus;
public:
	Weapon(int coord_x, int coord_y, char image,
		const std::string& title, const std::string& description,
		bool is_active, int damage_bonus, int speed_bonus);

	virtual void damage(Character& goal);
	void interact() override;

	int get_damage_bonus();
	int get_speed_bonus();

	void set_damage_bonus(int damage_bonus);
	void set_speed_bonus(int speed_bonus);
};