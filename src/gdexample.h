#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {

class gdexample : public godot::GodotScript<Sprite> {
	GODOT_CLASS(gdexample)

private:
	float time_passed;
	float amplitude;
	float speed;

public:
	static void _register_methods();

	gdexample();
	~gdexample();

	void _process(float delta);
	void set_speed(float p_speed);
	float get_speed();
};

}

#endif
