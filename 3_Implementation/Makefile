PROJ_NAME = VillainGod
TEST_PROJ_NAME = Test_$(PROJ_NAME)
COV_SRC = test_operations.c

SRC = project_main.c\
src/secret_keeper.c

# All test source files
TEST_SRC = src/secret_keeper.c\
test/test_operations.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\



all: pdm

pdm:project_main.o secret_keeper.o
	gcc -Wall -o pdm project_main.o secret_keeper.o

main.o:main.c
	gcc -c -Wall main.c

personaldiarymanagement.o:secret_keeper.c
	gcc -c -Wall secret_keeper.c
coverage:
		
	gcc -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) $(SRC) 
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c