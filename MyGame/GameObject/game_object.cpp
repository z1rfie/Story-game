#include "game_object.h"
#include <iostream>

GameObject::GameObject(int coord_x, int coord_y, char image,
	std::string title, std::string description, bool is_active) {}
void GameObject::interact() {

}
void GameObject::set_active(bool active) { 
	_is_active = active;
}
bool GameObject::is_active() const { return _is_active; }