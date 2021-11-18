extends Area2D

onready var fall = get_node("CollisionShape2D")
# Declare member variables here. Examples:
# var a = 2
# var b = "text"


# Called when the node enters the scene tree for the first time.


# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass


func _on_fallzone_body_entered(body):
	die()

func die() -> void:
	PlayerData.deaths += 1

