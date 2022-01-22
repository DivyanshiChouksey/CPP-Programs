//wap to implement scope resolution
#include<iostream>
using namespace std;

class Game{
	public:
		void play();   //function declaration
};

//function defination outside the class
void Game::play(){
	cout<<"function defined outside the class \n";
}

int main(){
	Game g;
	g.play();
	return 0;
}
