
using System;

public class Commandline
{
	public static void Main(string[] args)
	{

		Console.WriteLine("Program name (qi__prog_name): {0}", args[0]);
		Console.WriteLine("Number of arguments (qi__num_args): {0}", args.Length);
		Console.WriteLine("First argument (qi__first_arg): ", args[1]);
		
		if (args.Length > 1) {
		
			for (int i=0; i < args.Length; i++) {
				Console.WriteLine("(qi__argv) {0}: {1}", i, args[i]);
			}

		} else {
			Console.WriteLine("The command had no other arguments (qi__args_none).");
		}

	}
}
