using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _13._03._2018
{
    class Program
    {
        static int[] arr = new int[30];
        static int[] g = new int[30];
        private static int t=0;
        private static int f = 0;
        static void Main(string[] args)
        {
           FirstOrder();
            Console.WriteLine("Список массива по парам");

            for (var i = 0; i < arr.Length-1; i++)
            {
                Console.Write(arr[i]);
                Console.Write($@"+ {arr[i+1]} = ");
                Console.WriteLine(arr[i]+arr[i+1]);
                g[i] = arr[i] + arr[i + 1];
                if (t < arr[i] + arr[i + 1])
                {
                    t = arr[i];
                }
            }

            foreach (var some in g)
            {
                if (some > f)
                {
                    f = some;
                }
            }
            Console.WriteLine($"Maximum number = {f}");
            Console.WriteLine($"Result {t}");

            Console.ReadKey();
        }

        static void FirstOrder()
        {
            Random rnd = new Random();
            
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = rnd.Next(1,30);
            }
        }
    }


   
}
