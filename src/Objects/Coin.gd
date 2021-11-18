extends Area2D


export var score: = 100


func _on_body_entered(body: PhysicsBody2D) -> void:
	queue_free();
	PlayerData.score += score
	PlayerData.total_score += score
	PlayerData.coin_count += 1
	PlayerData.total_coin_count += 1
