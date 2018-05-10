#include "LargeRock.h"
#include <Texture.h>
#include <Renderer2D.h>


LargeRock::LargeRock()
{
	m_LRock = new aie::Texture("../bin/textures/rock_large.png");
}

void LargeRock::Update(float deltaTime)
{
}

void LargeRock::Draw(aie::Renderer2D * renderer)
{
	renderer->drawSprite(m_LRock, m_posX, m_posY);
}


LargeRock::~LargeRock()
{
	delete m_LRock;
}

void LargeRock::SetPosX(float posX)
{
	m_posX = posX;
}

void LargeRock::SetPosY(float posY)
{
	m_posY = posY;
}

float LargeRock::GetPosX()
{
	return m_posX;
}

float LargeRock::GetPosY()
{
	return m_posY;
}
