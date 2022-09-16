#pragma once
#include "GameState.h"

class StateMachineExampleGame;

class MainMenustate :
    public GameState
{
    StateMachineExampleGame* m_pOwner;

public:
    MainMenustate(StateMachineExampleGame* pOwner);
    ~MainMenustate() = default;

    virtual bool Update(bool processInput = true) override;
    virtual void Draw() override;
};

