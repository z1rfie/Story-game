#pragma once
#include <string>
#include "../Object/object.h"

class GameObject : Object {
protected:
	std::string _title;
	std::string _description;
	bool _is_active;
public:
	GameObject(int coord_x, int coord_y, char image,
		std::string title, std::string description, bool is_active);
	virtual void interact();
    void set_active(bool active);
	bool is_active() const;
};