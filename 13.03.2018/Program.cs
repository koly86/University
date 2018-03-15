using System;

namespace _13._03._2018
{
    internal class Program
    {
        private static readonly int[] arr = new int[30];
        private static readonly int[,] g = new int[30, 30];
        private static int min, max = 0;
        private static int f;

        private static void Main(string[] args)
        {
            ArrayToFill();
            Console.WriteLine("Список массива по парам");

            for (var i = 0; i < arr.Length - 1; i++)
            {
                Console.Write($@"{i}    {arr[i]}");
                Console.Write($@"+ {arr[i + 1]} = ");
                Console.WriteLine(arr[i] + arr[i + 1]);
                g[0, i] = arr[i] + arr[i + 1];
                g[1, i] = arr[i];
            }

            for (var i = 0; i < arr.Length - 1; i++)
            {
                if (max >= g[0, i]) continue;
                max = g[0, i];
                f = g[1, i];
            }
            Console.WriteLine($"Maximum number = {max}");

            Console.WriteLine(" ");

            Console.WriteLine($"Result {f}");

            Console.ReadKey();
        }

        private static void ArrayToFill()
        {
            var rnd = new Random();

            for (var i = 0; i < arr.Length; i++) arr[i] = rnd.Next(1, 30);
        }
    }
}