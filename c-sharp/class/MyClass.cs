
public class MyClass
{
    // Field 
    public int value;

    //Constructor that takes no arguments.  (qi__constructor)
    public MyClass()
    {
        Console.WriteLine("constructor called with no arguments");
        value = 0;
    }

    // Constructor that takes one argument. (qi__constructor)
    public MyClass(int in_value)
    {
      Console.WriteLine("constructor called with int argument");
      value = in_value;
    }

    // (qi__destructor)
    ~MyClass()
    {
      Console.WriteLine("destructor called");
    }


    public void setValue(int in_value)
    {
      name = in_value;
    }
    
    public int getValue()
    {
      return(value);
    }
}
