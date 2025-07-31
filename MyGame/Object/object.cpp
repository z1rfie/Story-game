#include "object.h"
#include <iostream>
#include <ctime>

Object::Object(int coord_x,
    int coord_y,
    char image, float speed_moving) :
    _coord_x(coord_x),
    _coord_y(coord_y),
    _image(image),
    _speed_moving(speed_moving) {
    init_correctness();
}

Object::Object(const Object& other) {
    _coord_x = other._coord_x;
    _coord_y = other._coord_y;
    _image = other._image;
    _speed_moving = other._speed_moving;
}

Object::Object() :
    _coord_x(WIDTH / 2),
    _coord_y(HEIGHT / 2),
    _image('&'),
    _speed_moving(10) {
}

int Object::get_coord_x() {
    return _coord_x;
}

int Object::get_coord_y() {
    return _coord_y;
}

char Object::get_image() {
    return _image;
}

float Object::get_speed_moving() {
    return _speed_moving;
}

Object& Object::operator=(const Object& other) {
    if (this != &other) {
        _coord_x = other._coord_x;
        _coord_y = other._coord_y;
        _image = other._image;
        _speed_moving = other._speed_moving;
    }
    return *this;
}

bool Object::operator==(const Object& other) const {
    return _coord_x == other._coord_x &&
        _coord_y == other._coord_y &&
        _image == other._image &&
        _speed_moving == other._speed_moving;
}

std::ostream& operator<<(std::ostream& os, const Object& obj) {
    os << "Object(" << obj._coord_x << ", " << obj._coord_y
        << ", '" << obj._image << "', " << obj._speed_moving << ")";
    return os;
}

//void Object::generate_rand_position() {
//    this->_coord_x = rand() % WIDTH;
//    this->_coord_y = rand() % HEIGHT;
//}

void Object::moving() {
    char key;
    std::cin >> key;
    switch (key) {
    case 'w':
        _coord_y += 5;
        break;
    case 's':
        _coord_y -= 5;
        break;
    case 'a':
        _coord_x -= 5;
        break;
    case 'd':
        _coord_x += 5;
        break;
    }
}

void Object::init_correctness() {
    if (_coord_x < 0 || _coord_y < 0 ||
        _coord_x >= HEIGHT || _coord_y >= WIDTH) {
        throw std::logic_error("Error in init constructor: coord_x or coord_y is outside of game field!");
    }

    if (_image == '\0') {
        throw std::logic_error("Invalid character symbol!");
    }
}