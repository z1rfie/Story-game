#include "plot_object.h"

PlotObject::PlotObject(int coord_x, int coord_y, char image,
    const std::string& title, const std::string& description,
    bool is_active) : GameObject(coord_x, coord_y, image, title, description, true) { }
void PlotObject::continuation_of_the_plot() {
    // todo
}