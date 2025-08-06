#pragma once
#include "../Object/object.h"

//enum TypeCharacter { Enemy, Main };

class Character : Object {
protected:
	//TypeCharacter _type;
	int _health;
	int _impact_force;
	int _attack_speed;
public:
	Character(int health, 
	int impact_force, int attack_speed);

	//TypeCharacter get_type();
	int get_health();
	int get_impact_force();
	int get_attack_speed();

	void attack_the_character(Character& goal);
	void being_attacked(int damage);
private:
	bool isAlive() const;
};