using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _14_03_2018
{
    class Program
    {
        static int[] arr = new int[30];
        static void Main(string[] args)
        {

        }


        private static void ArrayToFill()
        {
            var rnd = new Random();

            for (var i = 0; i < arr.Length; i++) arr[i] = rnd.Next(1, 30);
        }
    }
}
