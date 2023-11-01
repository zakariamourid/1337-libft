CMP = cc
FLAGS = -Wall -Wextra -Werror
test: hello
	$(CMP) $(FLAGS) $(name).test.c -L../ -lft -o $(name)
hello:
	@echo $(name)
test-no-flags: hello
	$(CMP)  $(name).test.c -L../ -lft -o $(name)
