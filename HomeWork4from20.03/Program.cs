using System;

namespace HomeWork4from20._03
{
    internal class Program
    {
        private static readonly int[] ArrayInts = new int[20];
        private static int[] NewArray;

        private static Random _rnd = new Random();
        private static int c;
        private static int j;
        private static int count;

        private static void Main(string[] args)
        {
            ToFill();
            Resolve();
            Console.ReadKey();
        }

        private static void ToFill()
        {
            _rnd = new Random();

            for (var i = 0; i < ArrayInts.Length; i++) ArrayInts[i] = _rnd.Next(1, 100); //Заполняем массив
            Array.Sort(ArrayInts); // сортируем
        }

        private static void Resolve()
        {
            Console.WriteLine($@"OriginalArray      NewArray");
            foreach (var t in ArrayInts)
            {
                Console.WriteLine($@" T = {t}          ");
                if (t == c) continue;
                c = t;
                Console.WriteLine($@"                     C = {c}");
                count++; //считаем уникальные числа
            }


            NewArray = new int[count]; // создаем новый массив
            foreach (var t in ArrayInts)
            {
                if (t == c) continue;
                c = t;
                NewArray[j++] = t;
            }

            Console.WriteLine($@"количество уникальных чисел = {count}");
        }
    }
}