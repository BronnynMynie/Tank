#include "MediumRock.h"
#include <Texture.h>
#include <Renderer2D.h>


MediumRock::MediumRock()
{
	m_MRock = new aie::Texture("../bin/textures/rock_medium.png");
}

void MediumRock::Update(float deltaTime)
{
}

void MediumRock::Draw(aie::Renderer2D * renderer)
{
	renderer->drawSprite(m_MRock, m_posX, m_posY);
}


MediumRock::~MediumRock()
{
	delete m_MRock;
}

void MediumRock::SetPosX(float posX)
{
	m_posX = posX;
}

void MediumRock::SetPosY(float posY)
{
	m_posY = posY;
}

float MediumRock::GetPosX()
{
	return m_posX;
}

float MediumRock::GetPosY()
{
	return m_posY;
}
