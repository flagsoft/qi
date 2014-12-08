#!/usr/bin/perl

$numArgs = $#ARGV + 1;
print "Number of arguments: $numArgs\n";

foreach $argnum (0 .. $#ARGV) {
	print "$ARGV[$argnum]\n";
}
