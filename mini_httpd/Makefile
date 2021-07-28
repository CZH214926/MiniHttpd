BIN=http_server
SRC=main.cc
CC=g++
FLAGS=-std=c++11 -lpthread #-DDEBUG
CURR_PATH=$(shell pwd)

.PHONY:all
all:CGI $(BIN)


.PHONY:CGI
CGI:
	cd $(CURR_PATH)/cgi;\
		make;\
		cd $(CURR_PATH)

$(BIN):$(SRC)
	$(CC) -o $@ $^ $(FLAGS)
.PHONY:clean
clean:
	rm -f $(BIN);\
		cd $(CURR_PATH)/cgi;\
		make clean;\
		cd $(CURR_PATH);\
		rm -rf output

.PHONY:output
output:
	make clean;\
		make;
	mkdir -p output/wwwroot/cgi;\
		cp $(BIN) output;\
		cp -rf wwwroot/* output/wwwroot;\
		cp cgi/test_cgi output/wwwroot/cgi;\
		cp cgi/test.py output/wwwroot/cgi;\
		cp cgi/test.sh output/wwwroot/cgi;\
		cp ctrl.sh output








