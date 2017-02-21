
#include "CGame.hpp"


namespace xo {
namespace game {


CGame::CGame( xo::judge::CJudge judge )
:mGameID(0)
,mpField() // TODO should created in constructor or Init()
//,nNextPlayer('X')
,mpPlayerX(0)
,mpPlayer0(0)
,mJudge(judge)
{
	cout<<"CGame is created\n";
	// TODO screen->print_msg()

   // TODO create and send to Judge
	//mpField = new xo::xofield::CXOfield;

  //if(mpField)
   //{
		//mpPlayerX = new xo::player::CPlayer(this, mpField, 'X');
	   //mpPlayer0 = new xo::player::CPlayer(this, mpField, '0');
   //}
   //else
   //{
   	//cout<<"mpField is NULL\n";
   //}

   // get mGameID from file with games

}

CGame::~CGame()
{

}

void CGame::init( xo::xofield::CXOfield* field )
{
   cout<<"CGame::init()\n";

   mpField = field;

   if(mpField)
   {
		mpPlayerX = new xo::player::CPlayer(this, mpField, 'X');
	   mpPlayer0 = new xo::player::CPlayer(this, mpField, '0');
   }
   else
   {
   	cout<<"mpField is NULL\n";
   }

   //mpJudge = judge;
   //mpJudge->addGame(this);

}

void CGame::startGame()
{
	cout<<"CGame::startGame()\n";

   // TODO mGameID = next Id in file

   	mJudge.doNextPlayerMove(this);

}


void CGame::doNextMove() const
{
	cout<<"CGame::doNextMove() mCurrentPlayerSimbol = "<<mCurrentPlayerSimbol<<"\n";

	printField();

   if(mpPlayerX && mpPlayer0)
   {
		if(mCurrentPlayerSimbol == 'X')
		{
			mpPlayerX->make_a_move();
		}
		else if(mCurrentPlayerSimbol == '0')
		{
	      mpPlayer0->make_a_move();
		}
	}
	else
	{
		cout<<"ERROR: mpPlayerX or mpPlayer0 is NULL\n";
	}
}


void CGame::doNextPlayerMove()
{
	cout<<"CGame::doNextPlayerMove()\n";

	printField();
	cout<<"\n\n\n";

      mJudge.doNextPlayerMove(this);

}


void CGame::printField() const
{
	cout<<"CGame::printField()\n";

   //cout<<"--> input somthing to continue";
   //int pause;  cin>>pause;

   //cout<<"\n";
   for(int i=1 ; i<4 ; i++)
   {
    	for(int j=1 ; j<4 ; j++)
    	{
          cout<<(*mpField)[i][j]<<" ";
    	}

      cout<<"\n";
   }
   cout<<"\n";

}


xo::xofield::CXOfield* CGame::getXOField() const
{
   return mpField;
}


int CGame::getGameID() const
{
	return mGameID;
}


char CGame::getCurrentPlayerSimbol() const
{
   return mCurrentPlayerSimbol;
}

void CGame::setCurrentPlayerSimbol(char simb)
{
   mCurrentPlayerSimbol = simb;
}


} // namespace game
} // namespace xo
