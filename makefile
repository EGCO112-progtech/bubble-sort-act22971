compile: main.c 
	 gcc  main.c -o test3

runSelection: selection
	  ./selection

run: test3
	 ./test3


clean: test3
	 rm test3
