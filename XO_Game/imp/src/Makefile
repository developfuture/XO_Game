
all: game


game: xo.o game.o judge.o player.o xofield.o
	g++ xo.o game.o judge.o player.o xofield.o -o xogame

xo.o: xo.cpp
	g++ -c xo.cpp


game.o: CGame.cpp
	g++ -c CGame.cpp

judge.o: CJudge.cpp
	g++ -c CJudge.cpp

player.o: CPlayer.cpp
	g++ -c CPlayer.cpp

xofield.o: CXOfield.cpp
	g++ -c CXOfield.cpp
