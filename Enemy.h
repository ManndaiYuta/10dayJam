#pragma once
#include "Sprite.h"
#include "ViewProjection.h"

#include "Model.h"
#include "WorldTransform.h"
class Enemy 
{
public:
	Enemy();

	~Enemy();

	void Initialize();

	void Update();

	void Draw3D();

	void Move();

	void Born();

	private:
	
    ViewProjection viewProjection_;
	
	uint32_t textureHandoleEnemy_ = 0;
	Model* modelEnemy_ = nullptr;
	WorldTransform worldTransformEnemy_;
	bool aliveFlag_ = false;

};
