using System;
using System.IO;
using System.Collections;

public class RecursiveFileProcessor
{

    class Program
    {

        public static string encrypt(string s, int k)
        {
            string encpass = "";
            char[] arr = s.ToCharArray();
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = (char)((arr[i] + k) % 128);
                encpass = encpass + arr[i];
            }
            return encpass;
        }

        public static string decrypt(string s, int k)
        {
            string decpass = "";
            char[] arr = s.ToCharArray();
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = (char)((arr[i] + 128 - k % 128) % 128);
                decpass = decpass + arr[i];
            }
            return decpass;
        }
 
        static void Main(string[] args)
        {

            Console.WriteLine("Type a string to encrypt: ");
            string UserString = Console.ReadLine();

            Console.WriteLine("Enter your Key: ");
            int key = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Encrypted Data");
            string cipherText = encrypt(UserString, key);
            Console.WriteLine(cipherText);

            Console.WriteLine("Decrypted Data: ");
            string t = decrypt(cipherText, key);
            Console.WriteLine(t);

        }
    }
}
