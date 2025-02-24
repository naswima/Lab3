extends Node2D

@export var booleanVar: bool = true  # Exported variable

# Called when the node enters the scene tree for the first time.
func _ready() -> void:
	pass  # Replace with function body.

# Called every frame. 'delta' is the elapsed time since the previous frame.
func _process(delta: float) -> void:
	if Input.is_action_pressed("ui_right"):  # Right arrow key
		position.x += 200 * delta  # Move sprite to the right based on the frame rate

	if Input.is_action_pressed("ui_left"):  # Left arrow key
		position.x -= 200 * delta  # Move sprite to the left based on the frame rate
	
	if Input.is_action_pressed("ui_up"):  # Up arrow key
		position.y -= 200 * delta  # Move sprite up (negative Y is up in Godot)

	if Input.is_action_pressed("ui_down"):  # Down arrow key
		position.y += 200 * delta  # Move sprite down (positive Y is down in Godot)
