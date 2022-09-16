#pragma once
#include <windows.h>

class AudioManager
{
	static AudioManager* s_pInstance;

	bool m_SoundOn;

	AudioManager()
		: m_SoundOn(true)
	{

	}

public:
	static AudioManager* GetInstance()
	{
		if (s_pInstance == nullptr)
		{
			s_pInstance = new AudioManager();
		}
		return s_pInstance;
	}

	static void DestroyInstance()
	{
		delete s_pInstance;
		s_pInstance = nullptr;
	}

	void ToggleSound()
	{
		m_SoundOn = !m_SoundOn;
	}

	bool IsSoundOn()
	{
		return m_SoundOn;
	}

	void PlayDoorClosedSound()
	{
		if (!m_SoundOn)
		{
			return;
		}
		Beep(500, 75);
		Beep(500, 75);
	}
	void PlayDoorOpenSound()
	{
		if (!m_SoundOn)
		{
			return;
		}
		Beep(1397, 200);
	}
	void PlayKeyPickupSound()
	{
		if (!m_SoundOn)
		{
			return;
		}
		Beep(1568, 50);
		Beep(1568, 200);
	}
	void PlayKeyDropSound()
	{
		if (!m_SoundOn)
		{
			return;
		}
		Beep(1568, 200);
		Beep(1568, 50);
	}
	void PlayMoneySound()
	{
		if (!m_SoundOn)
		{
			return;
		}
		Beep(1568, 50);
	}
	void PlayLoseLivesSound()
	{
		if (!m_SoundOn)
		{
			return;
		}
		Beep(200, 100);
	}
	void PlayLoseSound()
	{
		if (!m_SoundOn)
		{
			return;
		}
		Beep(500, 75);
		Beep(500, 75);
		Beep(500, 75);
		Beep(500, 75);
	}
	void PlayWinSound()
	{
		if (!m_SoundOn)
		{
			return;
		}
		Beep(523, 200);
        Beep(523, 200);
        Beep(578, 400);
        Beep(523, 400);
        Beep(698, 400);
        Beep(659, 800);

        Beep(523, 200);
        Beep(523, 200);
        Beep(578, 400);
        Beep(523, 400);
        Beep(784, 400);
        Beep(698, 800);

        Beep(523, 200);
        Beep(523, 200);
        Beep(1046, 400);
        Beep(880, 400);
        Beep(698, 400);

        Beep(659, 400);
        Beep(578, 400);

        Beep(932, 200);
        Beep(932, 200);
        Beep(880, 400);
        Beep(698, 400);
        Beep(784, 400);
        Beep(698, 800);
	}
};
