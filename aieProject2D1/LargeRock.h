#pragma once

namespace aie
{
	class Renderer2D;
	class Texture;
}

class LargeRock
{
public:
	LargeRock();
	void Update(float deltaTime);
	void Draw(aie::Renderer2D* renderer);
	~LargeRock();
	void SetPosX(float posX);
	void SetPosY(float posY);

	float GetPosX();
	float GetPosY();

private:
	aie::Texture* m_LRock;
	float m_posX;
	float m_posY;
};
