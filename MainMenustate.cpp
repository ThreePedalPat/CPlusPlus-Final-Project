#include "MainMenustate.h"
#include <iostream>
#include <conio.h>

#include "StateMachineExampleGame.h"

using namespace std;

constexpr int kEscapeKey = 27;

constexpr char kPlay = '1';
constexpr char kSettings = '2';
constexpr char kHighScore = '3';
constexpr char kQuit = '4';


MainMenustate::MainMenustate(StateMachineExampleGame* pOwner)
	: m_pOwner(pOwner)
{

}

bool MainMenustate::Update(bool processInput)
{
	bool shouldQuit = false;
	if (processInput)
	{
		int input = _getch();
		if (input == kEscapeKey || (char)input == kQuit)
		{
			shouldQuit = true;
		}
		else if ((char)input == kPlay)
		{
			m_pOwner->LoadScene(StateMachineExampleGame::SceneName::Gameplay);
		}
		else if ((char)input == kSettings)
		{
			m_pOwner->LoadScene(StateMachineExampleGame::SceneName::Settings);
		}
		else if ((char)input == kHighScore)
		{
			m_pOwner->LoadScene(StateMachineExampleGame::SceneName::Highscore);
		}
	}
	return shouldQuit;
}

void MainMenustate::Draw()
{
	system("cls");
	cout << endl << endl << endl;
	cout << "                - - - MAIN MENU - - -" << endl << endl;
	cout << "                   " << kPlay << ". Play " << endl;
	cout << "                   " << kSettings << ". Settings " << endl;
	cout << "                   " << kHighScore << ". High Scores " << endl;
	cout << "                   " << kQuit << ". Quit " << endl;
}
