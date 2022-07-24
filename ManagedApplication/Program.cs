using System;
using System.Reflection;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using UnmanagedWrapper;

namespace ManagedApplication
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Class1 class1 = new Class1();
            class1.Hello();
        }
    }
}
