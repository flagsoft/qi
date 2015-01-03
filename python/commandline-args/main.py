#!/usr/bin/python

import sys

print 'Number of arguments (qi__num_args):', len(sys.argv), 'arguments.'
print 'Argument List:', str(sys.argv)


// usage: test.py -i <inputfile> -o <outputfile>
#!/usr/bin/python

import sys, getopt

def main(argv):
	inputfile = ''
	outputfile = ''
	try:
		opts, args = getopt.getopt(argv,"hi:o:",["ifile=","ofile="])
	except getopt.GetoptError:
		print 'test.py -i <inputfile> -o <outputfile>'
		sys.exit(2)
	for opt, arg in opts:
      if opt == '-h':
         print 'test.py -i <inputfile> -o <outputfile>'
         sys.exit()
      elif opt in ("-i", "--ifile"):
         inputfile = arg
      elif opt in ("-o", "--ofile"):
         outputfile = arg

   print 'Input file is "', inputfile
   print 'Output file is "', outputfile

if __name__ == "__main__":
	main(sys.argv[1:])
/*
$ test.py -h
usage: test.py -i <inputfile> -o <outputfile>

$ test.py -i BMP -o
usage: test.py -i <inputfile> -o <outputfile>

$ test.py -i inputfile
Input file is " inputfile
Output file is "
*/
