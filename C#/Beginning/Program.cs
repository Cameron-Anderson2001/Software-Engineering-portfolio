using System;

namespace My_Awesome_Program
{
    class program
    {
        static void Main(string[] args) 
        {
            //Changing the name of the window
            Console.Title = "World Hello!";
            //Changing the colour of the text
            Console.ForegroundColor = ConsoleColor.Green;
            Console.WindowHeight = 40;

            //The same as std::cout in c++. Its the console having text
        Console.WriteLine("HELLO. WHAT IS YOUR NAME HUMAN?");
            
            //The same as std::cin in c++. Its the user entering text
            Console.ReadLine();

            Console.WriteLine("MY NAME IS K-2S0. YOU HAVE BEEN RESCUED");

            Console.WriteLine("WHAT IS YOUR FAVOURITE COLOUR?");

            Console.ReadLine();

            Console.WriteLine("COOL. MINE IS THE BLOOD OF IMPS");

        }
    }
}
