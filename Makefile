1: clean
	g++ main.cpp -o 1_user_input
	./1_user_input
	make clean

2: clean
	g++ test.cpp -o 2_tests
	./2_tests
	make clean

clean:
	@rm -f 1_user_input
	@rm -f 2_tests