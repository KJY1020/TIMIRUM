extends Node


signal updated
signal died

var score: = 0 setget set_score
var deaths: = 0 setget set_deaths
var total_score = 0 setget set_total_score
var coin_count = 0 setget set_coin
var total_coin_count = 0 setget set_total_coin

func reset():
	self.score = 0
	self.deaths = 0
	self.total_score = 0
	self.coin_count = 0
	self.total_coin_count = 0

func set_score(new_score: int) -> void:
	score = new_score
	emit_signal("updated")


func set_deaths(new_value: int) -> void:
	deaths = new_value
	emit_signal("died")

func set_total_score(new_total_score: int) -> void:
	total_score = new_total_score
	emit_signal("updated")

func set_coin(new_coin: int) -> void:
	coin_count = new_coin
	emit_signal("updated")

func set_total_coin(new_total_coin: int) -> void:
	total_coin_count = new_total_coin
	emit_signal("updated")
