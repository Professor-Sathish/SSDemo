CC = gcc
CFLAGS = -Wall -Wextra
TEST_LIBS = -lcheck

all: test_selection_sort

test_selection_sort: test_selection_sort.c
	$(CC) $(CFLAGS) test_selection_sort.c -o test_selection_sort $(TEST_LIBS)

test: test_selection_sort
	./test_selection_sort
