#pragma once
#include "heal.h"
#include "../GameObject/game_object.h"

class Food : Heal {
public:
	Food(int coord_x, int coord_y, char image,
		const std::string& title, const std::string& description,
		bool is_active, int heal_amount);
	void buff(Character& goal, GameObject& obj) override; // из-за наследования?..
};