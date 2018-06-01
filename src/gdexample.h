#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {

class gdexample : public godot::GodotScript<Sprite> {
	GODOT_CLASS(gdexample)

private:
	float time_passed;

public:
	static void _register_methods();

	gdexample();
	~gdexample();

	void _process(float delta);
};

}

#endif
