#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {

class gdexample : public Sprite {
	GODOT_CLASS(gdexample, Sprite)

private:
	float time_passed;
	float amplitude;
	float speed;

public:
	static void _register_methods();

	gdexample();
	~gdexample();

	void _init(); // our initializer called by Godot

	void _process(float delta);
	void set_speed(float p_speed);
	float get_speed();
};

}

#endif
