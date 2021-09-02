all: asan.cpp
	$(CXX) -std=c++17 -fsanitize=address -fno-omit-frame-pointer -O2 -g -o asan $^
