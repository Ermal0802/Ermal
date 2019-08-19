app: main.cpp
	g++ -o app.exe main.cpp

test: app
	./app.exe kekse kaffee kuchen nochwas doener
