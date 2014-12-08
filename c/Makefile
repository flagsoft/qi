
all:
	gcc -o commandline-args commandline-args.c

test:	clean all
	@echo "Testing"
	./commandline-args John Doe > output.txt

clean:
	#@rm commandline-args
	#@rm output.txt
	#@rm status.txt

