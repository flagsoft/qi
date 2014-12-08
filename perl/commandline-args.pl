#!/usr/bin/perl

$prog_name = "";
$num_args = $#ARGV + 1;
$first_arg = $ARGV[1];

print "Program name (prog_name): $prog_name\n";
print "Number of arguments (num_args): $num_args\n";
print "First argument (first_arg): $first_arg\n";

print "List of arguments (list_args): ";
foreach $argnum (0 .. $#ARGV) {
	print "$ARGV[$argnum]| ";
}
