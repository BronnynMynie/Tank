#include "aieProject2D1App.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include <imgui.h>
#include "SmallRock.h"
#include "MediumRock.h"
#include "LargeRock.h"

// Sorry Ram, this is all I could do.  My computer at home kept trying to add extra files and wouldn't let me debug at all. 

// Bronwyn Sutton

aieProject2D1App::aieProject2D1App() {

}

aieProject2D1App::~aieProject2D1App() {

}
// Start Up
// Starts all the resources
bool aieProject2D1App::startup() {
	
	m_2dRenderer = new aie::Renderer2D();

	// TODO: remember to change this when redistributing a build!
	// the following path would be used instead: "./font/consolas.ttf"
	m_font = new aie::Font("../bin/font/consolas.ttf", 32);
	m_Tank = new aie::Texture("../bin/textures/tankRed.png");
	m_SRock = new SmallRock[2];
	m_MRock = new MediumRock[83];
	m_LRock = new LargeRock[61];
	m_TankPosX = 50.0f;
	m_TankPosY = 100.0f;
	m_TankAngle = 20.4f;

	// Small Rocks
	m_SRock[0].SetPosX(410);
	m_SRock[0].SetPosY(220);

	m_SRock[1].SetPosX(800);
	m_SRock[1].SetPosY(220);

	// Medium Rocks
	m_MRock[0].SetPosX(100);
	m_MRock[0].SetPosY(160);

	m_MRock[1].SetPosX(140);
	m_MRock[1].SetPosY(160);

	m_MRock[2].SetPosX(180);
	m_MRock[2].SetPosY(160);

	m_MRock[3].SetPosX(220);
	m_MRock[3].SetPosY(160);

	m_MRock[4].SetPosX(260);
	m_MRock[4].SetPosY(160);

	m_MRock[5].SetPosX(300);
	m_MRock[5].SetPosY(160);

	m_MRock[6].SetPosX(340);
	m_MRock[6].SetPosY(160);

	m_MRock[7].SetPosX(380);
	m_MRock[7].SetPosY(160);

	m_MRock[8].SetPosX(420);
	m_MRock[8].SetPosY(160);

	m_MRock[9].SetPosX(460);
	m_MRock[9].SetPosY(160);

	m_MRock[10].SetPosX(500);
	m_MRock[10].SetPosY(160);

	m_MRock[11].SetPosX(540);
	m_MRock[11].SetPosY(160);

	m_MRock[12].SetPosX(580);
	m_MRock[12].SetPosY(160);

	m_MRock[13].SetPosX(620);
	m_MRock[13].SetPosY(160);

	m_MRock[14].SetPosX(660);
	m_MRock[14].SetPosY(160);

	m_MRock[15].SetPosX(700);
	m_MRock[15].SetPosY(160);

	m_MRock[16].SetPosX(740);
	m_MRock[16].SetPosY(160);

	m_MRock[17].SetPosX(780);
	m_MRock[17].SetPosY(160);

	m_MRock[18].SetPosX(820);
	m_MRock[18].SetPosY(160);

	m_MRock[19].SetPosX(860);
	m_MRock[19].SetPosY(160);
	
	m_MRock[20].SetPosX(900);
	m_MRock[20].SetPosY(160);

	m_MRock[21].SetPosX(940);
	m_MRock[21].SetPosY(160);

	m_MRock[22].SetPosX(980);
	m_MRock[22].SetPosY(160);

	m_MRock[23].SetPosX(1020);
	m_MRock[23].SetPosY(160);

	m_MRock[24].SetPosX(1060);
	m_MRock[24].SetPosY(160);

	m_MRock[25].SetPosX(1100);
	m_MRock[25].SetPosY(160);

	m_MRock[26].SetPosX(1190);
	m_MRock[26].SetPosY(280);

	m_MRock[27].SetPosX(1150);
	m_MRock[27].SetPosY(280);

	m_MRock[28].SetPosX(1110);
	m_MRock[28].SetPosY(280);

	m_MRock[29].SetPosX(1070);
	m_MRock[29].SetPosY(280);

	m_MRock[30].SetPosX(1030);
	m_MRock[30].SetPosY(280);

	m_MRock[31].SetPosX(990);
	m_MRock[31].SetPosY(280);

	m_MRock[32].SetPosX(950);
	m_MRock[32].SetPosY(300);

	m_MRock[33].SetPosX(910);
	m_MRock[33].SetPosY(320);

	m_MRock[34].SetPosX(870);
	m_MRock[34].SetPosY(340);

	m_MRock[35].SetPosX(830);
	m_MRock[35].SetPosY(360);

	m_MRock[36].SetPosX(790);
	m_MRock[36].SetPosY(360);

	m_MRock[37].SetPosX(750);
	m_MRock[37].SetPosY(340);

	m_MRock[38].SetPosX(710);
	m_MRock[38].SetPosY(320);

	m_MRock[39].SetPosX(670);
	m_MRock[39].SetPosY(300);

	m_MRock[40].SetPosX(630);
	m_MRock[40].SetPosY(280);

	m_MRock[41].SetPosX(590);
	m_MRock[41].SetPosY(280);

	m_MRock[42].SetPosX(550);
	m_MRock[42].SetPosY(300);

	m_MRock[43].SetPosX(510);
	m_MRock[43].SetPosY(320);

	m_MRock[44].SetPosX(470);
	m_MRock[44].SetPosY(340);

	m_MRock[45].SetPosX(430);
	m_MRock[45].SetPosY(360);

	m_MRock[46].SetPosX(390);
	m_MRock[46].SetPosY(360);

	m_MRock[47].SetPosX(350);
	m_MRock[47].SetPosY(340);

	m_MRock[48].SetPosX(310);
	m_MRock[48].SetPosY(320);

	m_MRock[49].SetPosX(270);
	m_MRock[49].SetPosY(300);

	m_MRock[50].SetPosX(230);
	m_MRock[50].SetPosY(300);

	m_MRock[51].SetPosX(190);
	m_MRock[51].SetPosY(300);

	m_MRock[52].SetPosX(190);
	m_MRock[52].SetPosY(460);

	m_MRock[53].SetPosX(150);
	m_MRock[53].SetPosY(460);

	m_MRock[54].SetPosX(110);
	m_MRock[54].SetPosY(460);
	
	m_MRock[55].SetPosX(230);
	m_MRock[55].SetPosY(460);

	m_MRock[56].SetPosX(270);
	m_MRock[56].SetPosY(460);

	m_MRock[57].SetPosX(310);
	m_MRock[57].SetPosY(480);

	m_MRock[58].SetPosX(350);
	m_MRock[58].SetPosY(500);

	m_MRock[59].SetPosX(390);
	m_MRock[59].SetPosY(520);

	m_MRock[60].SetPosX(430);
	m_MRock[60].SetPosY(520);

	m_MRock[61].SetPosX(470);
	m_MRock[61].SetPosY(500);

	m_MRock[62].SetPosX(510);
	m_MRock[62].SetPosY(480);

	m_MRock[63].SetPosX(550);
	m_MRock[63].SetPosY(460);

	m_MRock[64].SetPosX(590);
	m_MRock[64].SetPosY(440);

	m_MRock[65].SetPosX(630);
	m_MRock[65].SetPosY(420);

	m_MRock[66].SetPosX(670);
	m_MRock[66].SetPosY(440);

	m_MRock[67].SetPosX(710);
	m_MRock[67].SetPosY(460);

	m_MRock[68].SetPosX(750);
	m_MRock[68].SetPosY(480); 
	
	m_MRock[69].SetPosX(790);
	m_MRock[69].SetPosY(500);

	m_MRock[70].SetPosX(830);
	m_MRock[70].SetPosY(500);

	m_MRock[71].SetPosX(870);
	m_MRock[71].SetPosY(480);

	m_MRock[72].SetPosX(910);
	m_MRock[72].SetPosY(460);

	m_MRock[73].SetPosX(950);
	m_MRock[73].SetPosY(440);

	m_MRock[74].SetPosX(990);
	m_MRock[74].SetPosY(420);

	m_MRock[75].SetPosX(1030);
	m_MRock[75].SetPosY(400);

	m_MRock[76].SetPosX(1070);
	m_MRock[76].SetPosY(400);

	m_MRock[77].SetPosX(1110);
	m_MRock[77].SetPosY(400);

	m_MRock[78].SetPosX(980);
	m_MRock[78].SetPosY(600);

	m_MRock[79].SetPosX(1020);
	m_MRock[79].SetPosY(600);

	m_MRock[80].SetPosX(1060);
	m_MRock[80].SetPosY(600);

	m_MRock[81].SetPosX(1100);
	m_MRock[81].SetPosY(600);

	m_MRock[82].SetPosX(230);
	m_MRock[82].SetPosY(590);

	// Large Rocks

	m_LRock[0].SetPosX(40);
	m_LRock[0].SetPosY(30);

	m_LRock[1].SetPosX(100);
	m_LRock[1].SetPosY(30);

	m_LRock[2].SetPosX(160);
	m_LRock[2].SetPosY(30);

	m_LRock[3].SetPosX(220);
	m_LRock[3].SetPosY(30);

	m_LRock[4].SetPosX(280);
	m_LRock[4].SetPosY(30);

	m_LRock[5].SetPosX(340);
	m_LRock[5].SetPosY(30);

	m_LRock[6].SetPosX(400);
	m_LRock[6].SetPosY(30);

	m_LRock[7].SetPosX(460);
	m_LRock[7].SetPosY(30);

	m_LRock[8].SetPosX(520);
	m_LRock[8].SetPosY(30);

	m_LRock[9].SetPosX(580);
	m_LRock[9].SetPosY(30);

	m_LRock[10].SetPosX(640);
	m_LRock[10].SetPosY(30);
	
	m_LRock[11].SetPosX(700);
	m_LRock[11].SetPosY(30);

	m_LRock[12].SetPosX(760);
	m_LRock[12].SetPosY(30);

	m_LRock[13].SetPosX(820);
	m_LRock[13].SetPosY(30);

	m_LRock[14].SetPosX(880);
	m_LRock[14].SetPosY(30);

	m_LRock[15].SetPosX(940);
	m_LRock[15].SetPosY(30);

	m_LRock[16].SetPosX(1000);
	m_LRock[16].SetPosY(30);

	m_LRock[17].SetPosX(1060);
	m_LRock[17].SetPosY(30);

	m_LRock[18].SetPosX(1120);
	m_LRock[18].SetPosY(30);

	m_LRock[19].SetPosX(1180);
	m_LRock[19].SetPosY(30);

	m_LRock[20].SetPosX(1240);
	m_LRock[20].SetPosY(30);

	m_LRock[21].SetPosX(40);
	m_LRock[21].SetPosY(170);

	m_LRock[22].SetPosX(40);
	m_LRock[22].SetPosY(240);

	m_LRock[23].SetPosX(40);
	m_LRock[23].SetPosY(310);

	m_LRock[24].SetPosX(40);
	m_LRock[24].SetPosY(380);

	m_LRock[25].SetPosX(40);
	m_LRock[25].SetPosY(450);

	m_LRock[26].SetPosX(40);
	m_LRock[26].SetPosY(590);

	m_LRock[27].SetPosX(40);
	m_LRock[27].SetPosY(660);

	m_LRock[28].SetPosX(1240);
	m_LRock[28].SetPosY(30);

	m_LRock[29].SetPosX(1240);
	m_LRock[29].SetPosY(100);

	m_LRock[30].SetPosX(1240);
	m_LRock[30].SetPosY(170);

	m_LRock[31].SetPosX(1240);
	m_LRock[31].SetPosY(240);

	m_LRock[32].SetPosX(1240);
	m_LRock[32].SetPosY(310);

	m_LRock[33].SetPosX(1240);
	m_LRock[33].SetPosY(380);

	m_LRock[34].SetPosX(1240);
	m_LRock[34].SetPosY(450);

	m_LRock[35].SetPosX(1240);
	m_LRock[35].SetPosY(520);

	m_LRock[36].SetPosX(1240);
	m_LRock[36].SetPosY(590);

	m_LRock[37].SetPosX(1240);
	m_LRock[37].SetPosY(660);

	m_LRock[38].SetPosX(100);
	m_LRock[38].SetPosY(660);

	m_LRock[39].SetPosX(160);
	m_LRock[39].SetPosY(660);

	m_LRock[40].SetPosX(220);
	m_LRock[40].SetPosY(660);

	m_LRock[41].SetPosX(280);
	m_LRock[41].SetPosY(660);

	m_LRock[42].SetPosX(340);
	m_LRock[42].SetPosY(660);

	m_LRock[43].SetPosX(400);
	m_LRock[43].SetPosY(660);

	m_LRock[44].SetPosX(460);
	m_LRock[44].SetPosY(660);

	m_LRock[45].SetPosX(520);
	m_LRock[45].SetPosY(660);

	m_LRock[46].SetPosX(580);
	m_LRock[46].SetPosY(660);
	
	m_LRock[47].SetPosX(640);
	m_LRock[47].SetPosY(660); 
	
	m_LRock[48].SetPosX(700);
	m_LRock[48].SetPosY(660);

	m_LRock[49].SetPosX(760);
	m_LRock[49].SetPosY(660);

	m_LRock[50].SetPosX(820);
	m_LRock[50].SetPosY(660);

	m_LRock[51].SetPosX(880);
	m_LRock[51].SetPosY(660);

	m_LRock[52].SetPosX(940);
	m_LRock[52].SetPosY(660);

	m_LRock[53].SetPosX(1000);
	m_LRock[53].SetPosY(660);

	m_LRock[54].SetPosX(1060);
	m_LRock[54].SetPosY(660);

	m_LRock[55].SetPosX(1120);
	m_LRock[55].SetPosY(660);

	m_LRock[56].SetPosX(1180);
	m_LRock[56].SetPosY(660);

	m_LRock[57].SetPosX(1160);
	m_LRock[57].SetPosY(590);

	m_LRock[58].SetPosX(110);
	m_LRock[58].SetPosY(590);

	m_LRock[59].SetPosX(170);
	m_LRock[59].SetPosY(590);

	m_LRock[60].SetPosX(630);
	m_LRock[60].SetPosY(590);

	return true;
}

// Shut down
void aieProject2D1App::shutdown() {

	// Deletes the resources
	delete m_font;
	delete m_2dRenderer;
	delete m_Tank;
}
// Update
void aieProject2D1App::update(float deltaTime) {

	// input example
	aie::Input* input = aie::Input::getInstance();

	if (input->isKeyDown(aie::INPUT_KEY_D) == true)
	{
		m_TankPosX += 100.0f * deltaTime;
	}

	if (input->isKeyDown(aie::INPUT_KEY_W) == true)
	{
		m_TankPosY += 100.0f * deltaTime;
	}

	if (input->isKeyDown(aie::INPUT_KEY_A) == true)
	{
		m_TankPosX  -= 100.0f * deltaTime;
	}

	if (input->isKeyDown(aie::INPUT_KEY_S) == true)
	{
		m_TankPosY -= 100.0f * deltaTime;
	}

	// GUI
	ImGui::Begin("Test GUI Window");      
	ImGui::Text("TEST: (%1.1f)");      
	static float defValue = 50.0f;     
	ImGui::End();

	// exit the application
	if (input->isKeyDown(aie::INPUT_KEY_ESCAPE))
		quit();
};

// Draws all the assets
void aieProject2D1App::draw() {

	// wipe the screen to the background colour
	clearScreen();

	// begin drawing sprites
	// Starts to draw everything on the screen
	m_2dRenderer->begin();

	// draw your stuff here!
	m_2dRenderer->drawSprite(m_Tank, m_TankPosX, m_TankPosY, 40, 40, m_TankAngle);

	for (int i = 0; i < 2; ++i)
	{
		m_SRock[i].Draw(m_2dRenderer);
	}

	for (int i = 0; i < 85; ++i)
	{
		m_MRock[i].Draw(m_2dRenderer);
	}

	for (int i = 0; i < 62; ++i)
	{
		m_LRock[i].Draw(m_2dRenderer);
	}

	// output some text, uses the last used colour
	m_2dRenderer->drawText(m_font, "Thanks for playing Tank Skill Tester. Press ESC to quit", 0, 0);

	// done drawing sprites
	m_2dRenderer->end();
};
