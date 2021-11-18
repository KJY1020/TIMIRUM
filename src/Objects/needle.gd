extends Area2D


# Declare member variables here. Examples:
# var a = 2
# var b = "text"


# Called when the node enters the scene tree for the first time.


# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass


func _on_needle_body_entered(body):
	die()

func die() -> void:
	PlayerData.deaths += 1


	


func _on_needle_body_shape_entered(body_id, body, body_shape, local_shape):
	die()
