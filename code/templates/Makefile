all: playwithsort
solution: playwithsort.sol

clean:
	rm -f *o *so playwithsort *~ playwithsort.sol

playwithsort : playwithsort.cpp OrderedVector.hpp Complex.hpp
	$(CXX) -g -O0 -Wall -Wextra -std=c++11 -Wc++11-extensions -o $@ $<

playwithsort.sol : solution/playwithsort.sol.cpp solution/OrderedVector.sol.hpp Complex.hpp
	$(CXX) -g -O0 -Wall -Wextra -I. -o $@ $<
