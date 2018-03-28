using System;
using System.Diagnostics;


//Дан целочисленный массив из 40 элементов. Элементы массива могут принимать целые значения от 1 до 10000 включительно.
//Опишите на одном из ЯП алгоритм позволяющий найти и вывести наименьший из элементов массива,
//шестрадцеричная запись которого собержит 2е цифры.
//если таких цифр нет, вывести ноль.

namespace HomeWork1from20._03
{
    internal class Program
    {
        private static readonly Random rnd = new Random();
        private static readonly int[] arr = new int[40000];
        private static int _max;
        public static int _min = 0;
        private static readonly char[] charNumeric = new char[10] {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

        private static void Main(string[] args)
        {
            var stopWatch = new Stopwatch();
            stopWatch.Start();
            ToFillArray();
            MyMet();
            stopWatch.Stop();
            var ts = stopWatch.Elapsed;
            Console.WriteLine(ts.Milliseconds);

            Console.ReadKey();
        }


        private static void ToFillArray()
        {
            for (var i = 0; i < arr.Length; i++) arr[i] = rnd.Next(1, 10000);
        }

        private static void MyMet()
        {
            var count = 0;
            // Array.Sort(arr); //сортируем в сторону увеличения
            for (var i = 0; i < arr.Length; i++)
            {
                for (var j = 0; j < arr[i].ToString("X").Length; j++) //перебираем полученную цифру по слогам
                    foreach (var t in charNumeric) // сравниваем каждый элемент с чаром из массива
                        if (arr[i].ToString("X")[j] == t)
                            count++;
                if (count == 2)
                {
                    Console.WriteLine($@" Number Original {arr[i]}");
                    Console.WriteLine($@" Number in Hex {arr[i]:X}");
                    return;
                }

                count = 0;
            }
        }
    }
}