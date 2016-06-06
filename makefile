all: compilation execution

compilation: webData.cpp
	     g++ -std=c++11 webData.cpp -lcurl

execution: a.out
	   ./a.out
