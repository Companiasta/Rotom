#include <Rotom.h>

class Game : public Rotom::Application
{
public:
	Game()
	{

	}
	~Game()
	{

	}

private:

};

Rotom::Application* Rotom::CreateApplication()
{
	return new Game();
}