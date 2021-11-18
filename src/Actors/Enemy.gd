extends Actor


onready var stomp_area: Area2D = $StompArea2D

export var score: = 100


func _ready() -> void:
	set_physics_process(false)
	_velocity.x = -speed.x


func _physics_process(delta: float) -> void:
	_velocity.x *= -1 if is_on_wall() else 1
	_velocity.y = move_and_slide(_velocity, FLOOR_NORMAL).y
	if global_position.y > 1100:
		queue_free()


#func _on_StompArea2D_area_entered(area: Area2D) -> void:
#	if area.global_position.y > stomp_area.global_position.y:
#		return
#	die()
#	PlayerData.score += 100
#	PlayerData.total_score += 100


func die() -> void:
	queue_free()
	


func _on_StompArea2D_body_entered(body):
	if body.global_position.y >= stomp_area.global_position.y:
		return
	die()
	PlayerData.score += score
	PlayerData.total_score += score
