all:
	g++ src/*.cpp main.cpp header/*.h -o dungeon-game
	./dungeon-game