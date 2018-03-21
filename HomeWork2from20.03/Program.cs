using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HomeWork2from20._03
{
    class Program
    {
        private static readonly int[] arr = new int[40000];
        private static readonly Random rnd = new Random();
        static void Main(string[] args)
        {
        }

        private static void ToFillArray()
        {
            for (var i = 0; i < arr.Length; i++) arr[i] = rnd.Next(1, 10000);
        }
    }
}
