
all: game

game: xo.o game.o judge.o player.o xofield.o
	g++ xo.o CGame.o CJudge.o CPlayer.o CXOfield.o -o xogame

xo.o: xo.cpp
	g++ -c xo.cpp

game.o: ./game/CGame.cpp
	g++ -c ./game/CGame.cpp

judge.o: ./judge/CJudge.cpp
	g++ -c ./judge/CJudge.cpp

player.o: ./player/CPlayer.cpp
	g++ -c ./player/CPlayer.cpp

xofield.o: ./xofield/CXOfield.cpp
	g++ -c ./xofield/CXOfield.cpp
