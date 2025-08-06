#pragma once
#include "game_object.h"
#include "character.h"

class Heal : GameObject {
protected:
	int _heal_amount;
	bool _is_active;
public:
	Heal(int coord_x, int coord_y, char image, 
		std::string title, std::string description,
		int heal_amount, bool is_active);

	virtual void buff(Character& goal);

	int get_heal_amount() const;
	void interact(GameObject* other) override;
	virtual void set_active(bool active);
	bool is_active() const;
};