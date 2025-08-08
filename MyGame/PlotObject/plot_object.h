#pragma once
#include "game_object.h"

class PlotObject : GameObject {
public:
    PlotObject(int coord_x, int coord_y, char image,
        const std::string& title, const std::string& description,
        bool is_active);
    void continuation_of_the_plot();
};