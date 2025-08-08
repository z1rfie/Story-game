#include "heal.h"
#include "game_object.h"
#include <iostream>

Heal::Heal(int coord_x, int coord_y, char image,
    const std::string& title, const std::string& description,
    bool is_active, int heal_amount) :
    GameObject(coord_x, coord_y, image, title, description, true),
    _heal_amount(heal_amount) {}

void Heal::buff(Character& goal) {
    if (!_is_active) return;
    if (!goal.isAlive()) return;
    goal.heal(_heal_amount);
}
void Heal::interact() {
	if (!_is_active) return;
    std::cout << "Ёто“ лечебный предмет: " << _description
        << " (восстанавливает " << _heal_amount << " HP)\n";
}

int Heal::get_heal_amount() { return _heal_amount; }
void Heal::set_heal_amount(int amount) { _heal_amount = amount; }