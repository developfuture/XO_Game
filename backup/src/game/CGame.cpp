
#include "CGame.hpp"


namespace xo {
namespace game {


CGame::CGame( xo::xofield::CXOfield* field )
:mpField(0) // TODO should created in constructor
//,nNextPlayer('X')
,mpPlayerX(0)
,mpPlayer0(0)
,mpJudge(0)
{
	cout<<"CGame is created\n";
	// TODO screen->print_msg()

	mpField = new xo::xofield::CXOfield;

	mpPlayerX = new xo::player::CPlayer(this, mpField, 'X');
   mpPlayer0 = new xo::player::CPlayer(this, mpField, '0');

}

CGame::~CGame()
{

}

void CGame::init( xo::judge::CJudge* judge  )
{
   cout<<"CGame::init()\n";
   mpJudge = judge;
   //mpJudge->addGame(this);
}

void CGame::startGame()
{
	cout<<"CGame::startGame()\n";

	if(mpJudge)
   {
   	mpJudge->doNextPlayerMove();
   }
}


void CGame::doNextMove(char playerSimbol) const
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

   cout<<"--> input somthing to continue";
   int pause;  cin>>pause;

   for(int i=1 ; i<4 ; i++)
   {
    	for(int j=1 ; j<4 ; j++)
    	{
          cout<<(*mpField)[i][j]<<" ";
    	}

   cout<<"\n";

   }


}



} // namespace game
} // namespace xo
