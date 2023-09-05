#pragma once
#include"Sprite.h"
#include"ViewProjection.h"

#include"Model.h"
#include"WorldTransform.h"
#include"Input.h"
class Player 
{
public:
	Player();

	~Player();

	void Initialize();

	void Update();

	void Draw3D();

	void Move();

	private:
	ViewProjection viewProjection_;
	// プレイヤー
	uint32_t textureHandolePlayer_ = 0;
	Model* modelPlayer_ = nullptr;
	WorldTransform worldTransformPlayer_;

	// インプットクラス
	Input* input_ = nullptr;

};
