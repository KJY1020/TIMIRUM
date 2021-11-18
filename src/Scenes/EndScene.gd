extends Control

onready var end1 = get_node("end1")
onready var end2 = get_node("end2")
onready var end3 = get_node("end3")
onready var end4 = get_node("end4")

export var test: = 9000

func _ready():
	end1.visible=false
	end2.visible=false
	end3.visible=false
	end4.visible=false
	if PlayerData.total_score>=8200:
		end1.visible =true
	elif PlayerData.total_score>=5500:
		end2.visible=true
	elif PlayerData.total_score>=2800:
		end3.visible=true
	else:
		end4.visible=true	
