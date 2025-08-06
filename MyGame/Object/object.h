#pragma once
#include <sstream>

#define WIDTH 20
#define HEIGHT 20

class Object {
protected:
	int _coord_x;
	int _coord_y;
	char _image;
	//float _speed_moving;
public:
	Object(int, int, char, float);
	Object(const Object& other);
	Object();

	int get_coord_x();
	int get_coord_y();
	char get_image();
	float get_speed_moving();

	Object& operator=(const Object& other);
	bool operator==(const Object& other) const;
	friend std::ostream& operator<<(std::ostream& os, const Object& obj);

	//void generate_rand_position();
	void moving();
private:
	void init_correctness();
};