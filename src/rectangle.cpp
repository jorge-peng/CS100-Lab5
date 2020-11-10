#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
} 

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return 99;
}

int Rectangle::perimeter() {
	return 99;
}

int Rectangle::get_width() {
	return 99;
}

int Rectangle::get_height() {
	return 99;
}
