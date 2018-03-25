using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomwWork3from20._03
{
    class Program
    {

        private static readonly Random rnd = new Random();
        private static readonly int[] arr = new int[40];
        private static int _max;
        public static int _min = 0;
        private static readonly char[] charNumeric = new char[10] { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        private static readonly char[] charSymbol = new char[6] {'A', 'B', 'C', 'D', 'E', 'F'};

        private static void Main(string[] args)
        {
            ToFillArray();
            MyMet();
            Console.ReadKey();
        }

        private static void ToFillArray()
        {
            arr[0] = 524;
            for (var i = 1; i < arr.Length; i++) arr[i] = rnd.Next(1, 10000);
            Array.Sort(arr);
        }


        private static void MyMet()
        {
            var count = 0;
            for (var i = 0; i < arr.Length; i++)
            {
                Console.WriteLine($@"Hex: {arr[i]:X}   original {arr[i]}");


                for (var j = 0; j < arr[i].ToString("X").Length; j++) //перебираем полученную цифру по слогам

                    if (arr[i].ToString("X")[arr[i].ToString("X").Length - 1] == 'C') //проверяем что последний символ С
                    {
                        foreach (var t in charNumeric) // сравниваем каждый элемент с чаром из массива

                            if (arr[i].ToString("X")[j] == t)
                                count++;
                        if (count < 3) continue;
                        Console.WriteLine($@" Number Original {arr[i]}");
                        Console.WriteLine($@" Number in Hex {arr[i]:X}");
                        return;
                    }

                count = 0;
            }

            if (count == 0) Console.WriteLine($@"No one have been find: 0");
        }
    }
}
