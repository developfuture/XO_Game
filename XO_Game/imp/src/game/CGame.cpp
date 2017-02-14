#include "CGame.hpp"
//#include "../player/CPlayer.hpp"
//#include "../xofield/CXOfield.cpp"
//#include "../player/CPlayer.cpp"

namespace xo {
namespace game {



CGame::CGame( xo::xofield::CXOfield* field )
:mpField(field)
,nNextPlayer('X')
//,mpPlayerX(0)
//,mpPlayer0(0)
//,mpJudge(judjer)
{
	cout<<"CGame is created\n";
	// TODO screen->print_msg()

	mpField = new xo::xofield::CXOfield;

	mpPlayerX = new xo::player::CPlayer(this, mpField, 'X');
   mpPlayer0 = new xo::player::CPlayer(this, mpField, '0');

   if(mpJudge)
   {
   	mpJudge->doNextPlayerMove();
   }


}

CGame::~CGame()
{

}

void CGame::init( xo::judge::CDjudge* judge )
{

}


void CGame::doNextMove(const char playerSimbol) const
{
	cout<<"CGame::doNextMove() playerSimbol = "<<playerSimbol<<"\n";

   if(mpPlayerX && mpPlayer0)
   {
		if(playerSimbol == 'X')
		{
			mpPlayerX->make_a_move();
		}
		else if(playerSimbol == '0')
		{
	      mpPlayer0->make_a_move();
		}
	}
	else
	{
		cout<<"ERROR: mpPlayerX or mpPlayer0 is NULL\n";
	}


void CGame::doNextPlayerMove() const
{
	cout<<"CGame::doNextPlayerMove()\n";

	printField();

	if(mpJudge)
	{
      mpJudge->doNextPlayerMove();
   }
}


void CGame::printField() const
{
	cout<<"CGame::printField()\n";
   for(int i=1 ; i<4 ; i++)
   {
    	for(int j=1 ; j<4 ; j++)
    	{
          cout<<(*mpField)[i][j];
    	}

   cout<<"\n";

   }


}



} // namespace game
} // namespace xo
