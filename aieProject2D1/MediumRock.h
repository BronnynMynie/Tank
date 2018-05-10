#pragma once

namespace aie
{
	class Renderer2D;
	class Texture;
}

class MediumRock
{
public:
	MediumRock();
	void Update(float deltaTime);
	void Draw(aie::Renderer2D* renderer);
	~MediumRock();
	void SetPosX(float posX);
	void SetPosY(float posY);

	float GetPosX();
	float GetPosY();

private:
	aie::Texture* m_MRock;
	float m_posX;
	float m_posY;
};
