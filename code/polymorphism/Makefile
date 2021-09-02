all: trypoly
solution: trypoly.sol

clean:
	rm -f *o *so trypoly *~ trypoly.sol

libpoly.so: Polygons.cpp Polygons.hpp
	$(CXX) -Wsuggest-override -g -Wall -Wextra -Wc++11-extensions -std=c++11 -shared -fPIC -o $@ $<

trypoly : trypoly.cpp libpoly.so
	$(CXX) -v -Wsuggest-override -g -Wall -Wextra -Wc++11-extensions -std=c++11 -o $@ $^

trypoly.sol : solution/trypoly.sol.cpp libpoly.so
	$(CXX) -g -Wall -Wextra -I. -o $@ $^
