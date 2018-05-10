#pragma once

namespace aie
{
	class Renderer2D;
	class Texture;
}

class SmallRock
{
public:
	SmallRock();
	void Update(float deltaTime);
	void Draw(aie::Renderer2D* renderer);
	~SmallRock();
	void SetPosX(float posX);
	void SetPosY(float posY);

	float GetPosX();
	float GetPosY();

private:
	aie::Texture* m_SRock;
	float m_posX;
	float m_posY;
};

