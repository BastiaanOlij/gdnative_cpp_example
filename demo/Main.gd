extends Node

func _on_Sprite_position_changed(node, new_pos):
		print("The position of " + node.name + " is now " + str(new_pos))
