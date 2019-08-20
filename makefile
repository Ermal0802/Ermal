APP=uebungs_app
SOURCES=$(wildcard ./*.cpp)

$(APP): priemzahlen.cpp
	g++ -o $(APP).exe $(SOURCES)

test: $(APP)
	./$(APP).exe
