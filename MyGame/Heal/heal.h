#pragma once
#include "game_object.h"
#include "character.h"

class Heal : GameObject {
protected:
	int _heal_amount;
public:
	Heal(int coord_x, int coord_y, char image,
		const std::string& title, const std::string& description,
		bool is_active, int heal_amount);

	virtual void buff(Character& goal);
	void interact() override;

	int get_heal_amount();
	void set_heal_amount(int amount);
};