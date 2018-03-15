using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _14_03_2018
{
    class Program
    {
        public static int some = 0;
        private static int result = 0;
        static int[] arr = new int[30];
        static void Main(string[] args)
        {
            ArrayToFill();
            //показываем массив и выявляем наибольшее число
            foreach (var t in arr)
            {
                if (some < t)
                {
                    some = t;
                }

                Console.Write(t + ", ");
            }

            //находим количество значений равных наибольшему
            foreach (var t2 in arr)
            {
                if (some == t2)
                {
                    result++;
                }
            }

            Console.WriteLine();
            Console.WriteLine($@"The Biggest number in the array:{some}");
            Console.WriteLine($@"Total number equals biggest number: {result}");

            Console.ReadKey();
        }


        private static void ArrayToFill()
        {
            var rnd = new Random();

            for (var i = 0; i < arr.Length; i++)
                arr[i] = rnd.Next(1, 30);
        }
    }
}
