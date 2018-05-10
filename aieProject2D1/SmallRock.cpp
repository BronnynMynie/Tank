#include "SmallRock.h"
#include <Texture.h>
#include <Renderer2D.h>


SmallRock::SmallRock()
{
	m_SRock = new aie::Texture("../bin/textures/rock_small.png");
}

void SmallRock::Update(float deltaTime)
{
}

void SmallRock::Draw(aie::Renderer2D * renderer)
{
	renderer->drawSprite(m_SRock, m_posX, m_posY);
}


SmallRock::~SmallRock()
{
	delete m_SRock;
}

void SmallRock::SetPosX(float posX)
{
	m_posX = posX;
}

void SmallRock::SetPosY(float posY)
{
	m_posY = posY;
}

float SmallRock::GetPosX()
{
	return m_posX;
}

float SmallRock::GetPosY()
{
	return m_posY;
}
