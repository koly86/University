using System;

namespace HomwWork3from20._03
{
    internal class Program
    {
        private static readonly Random rnd = new Random();
        private static readonly int[] arr = new int[40];
        private static int[] _max;
        public static int _min = 0;
        private static readonly char[] charNumeric = new char[10] {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
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
            for (var i = 1; i < arr.Length; i++) arr[i] = rnd.Next(1, 1000);
            Array.Sort(arr);
        }


        private static void MyMet()
        {
            var count = 0;
            foreach (var t in arr)
                if (t.ToString("X").Length == 2) //проверяем что число двузначное
                    foreach (var t1 in charNumeric)
                        if (t.ToString("X")[0] == t1) // проверяем что первая цифра это цифра
                            foreach (var t3 in charSymbol)
                                if (t.ToString("X")[1] == t3) // проверяем что вторая цифра это буква от A - F
                                {
                                    Console.WriteLine($@"original number {t} number xex {t:X}");
                                    return;
                                }
        }
    }
}