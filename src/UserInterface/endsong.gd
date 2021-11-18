extends Node


onready var end1bg = get_node("end1")
onready var end2bg = get_node("end2")
onready var end3bg = get_node("end3")
onready var end4bg = get_node("end4")
export var test=9000

func _ready():
	if PlayerData.total_score>=8200:
		end1bg.play()
	elif PlayerData.total_score>=5500:
		end2bg.play()
	elif PlayerData.total_score>=2800:
		end3bg.play()
	else:
		end4bg.play()
