extends Node


onready var scene_tree: SceneTree = get_tree()
onready var score_label: Label = $Score
onready var pause_overlay: ColorRect = $PauseOverlay
onready var title_label: Label = $PauseOverlay/Title
onready var main_screen_button: Button = $PauseOverlay/PauseMenu/MainScreenButton
onready var music = get_node("nore")
onready var temp = get_node("nore").get_playback_position()


const MESSAGE_DIED: = "You died"

var paused: = false setget set_paused
var play = false


func _ready() -> void:
	PlayerData.score = 0
	PlayerData.connect("updated", self, "update_interface")
	PlayerData.connect("died", self, "_on_Player_died")
	update_interface()
	music.play(0.0)


func _on_Player_died() -> void:
	self.paused = true
	title_label.text = MESSAGE_DIED
	music.stop()
	


func _unhandled_input(event: InputEvent) -> void:
	if Input.is_action_just_pressed("pause") and title_label.text != MESSAGE_DIED:
		self.paused = not self.paused
		if play == true:
			play = false
		else:
			play = true
		music.set_stream_paused(play)
	


func update_interface() -> void:
	score_label.text = "Score: %s" % PlayerData.total_score


func set_paused(value: bool) -> void:
	paused = value
	scene_tree.paused = value
	pause_overlay.visible = value	
	
