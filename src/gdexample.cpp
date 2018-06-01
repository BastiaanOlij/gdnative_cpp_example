#include "gdexample.h"

using namespace godot;

void gdexample::_register_methods() {
	register_method((char *)"_process", &gdexample::_process);	
}

gdexample::gdexample() {
	// initialize any variables here
	time_passed = 0.0;
}

gdexample::~gdexample() {
	// add your cleanup here
}

void gdexample::_process(float delta) {
	time_passed += delta;

	Vector2 new_position = Vector2(10.0 + (10.0 * sin(time_passed * 2.0)), 10.0 + (10.0 * cos(time_passed * 1.5)));

	owner->set_position(new_position);
}
