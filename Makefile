all: test.out

test.out:
	g++ -std=c++11 factorial_test.cpp -o a.out
	g++ -std=c++11 bank_account_test.cpp -o b.out

test: test.out
	./a.out
	./b.out

clean:
	rm a.out b.out