using System;


namespace Story
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Sporting goods";
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.WindowHeight = 40;

            Console.WriteLine(" Welcome to my store. What can i get you today?");
            Console.ReadLine();
            Console.WriteLine("Of course! Would you like anything else today?");
            Console.ReadLine();
            Console.WriteLine(" I'm sorry. We don't have anything like that right now. We're out of stock.");
            Console.WriteLine("That will be $6.99 today. Everything is on sale at our sporting store!");

        }
    }
}
