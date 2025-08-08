#include "food.h"
#include "game_object.h"

Food::Food(int coord_x, int coord_y, char image,
	const std::string& title, const std::string& description,
	bool is_active, int heal_amount) : 
	Heal(coord_x, coord_y, image, title, description, true, heal_amount) {}
void Food::buff(Character& goal, GameObject& obj) {
	if (obj.is_active() && goal.isAlive()) {
		goal.heal(4);
		obj.set_active(false);
	}
}