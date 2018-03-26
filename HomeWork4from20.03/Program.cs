using System;

namespace HomeWork4from20._03
{
    internal class Program
    {
        private static readonly int[] ArrayInts = new int[2017];
        private static int[] NewArray;

        private static Random _rnd = new Random();
        private static int c;
        private static int j;
        private static int count;

        private static void Main(string[] args)
        {
            ToFill();
            Console.ReadKey();
        }

        private static void ToFill()
        {
            _rnd = new Random();

            for (var i = 0; i < ArrayInts.Length; i++) ArrayInts[i] = _rnd.Next(1, 2000); //Заполняем массив
            Array.Sort(ArrayInts); // сортируем
        }
    }
}