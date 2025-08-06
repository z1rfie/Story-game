#pragma once
#include <string>
#include "../Object/object.h"

class GameObject : Object {
protected:
	std::string _title;
	std::string _description;
public:
	GameObject(int coord_x, int coord_y, char image,
		std::string title, std::string description);
	virtual void interact(GameObject* other);
};