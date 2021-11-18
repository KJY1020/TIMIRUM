extends Node


onready var song = get_node("song")

func _ready():
	song.play()


# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass
