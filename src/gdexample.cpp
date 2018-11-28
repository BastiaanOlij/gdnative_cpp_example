#include "gdexample.h"

using namespace godot;

void gdexample::_register_methods() {
	register_method((char *)"_process", &gdexample::_process);
	register_property<gdexample, float>("amplitude", &gdexample::amplitude, 10.0);
	register_property<gdexample, float>("speed", &gdexample::set_speed, &gdexample::get_speed, 1.0);
}

gdexample::gdexample() {
	// initialize any variables here
	time_passed = 0.0;
	amplitude = 10.0;
	speed = 1.0;
}

gdexample::~gdexample() {
	// add your cleanup here
}

void gdexample::_process(float delta) {
	time_passed += speed * delta;

	Vector2 new_position = Vector2(
		amplitude + (amplitude * sin(time_passed * 2.0)),
		amplitude + (amplitude * cos(time_passed * 1.5))
	);

	owner->set_position(new_position);
}

void gdexample::set_speed(float p_speed) {
	speed = p_speed;
}

float gdexample::get_speed() {
	return speed;
}
