using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace APP
{
    class Cypher
    {
        public string Crypt(string txt, string key, int d)
        {
            int index = 0, tmp;
            string ns = "";
            foreach (char t in txt)
            {
                if (t < 33 || t > 126)
                    continue;
                else if (t > 32 && t < 127)
                {
                    key = key.ToUpper();
                    tmp = t - 33 + d * (key[index] - 33);
                    if (tmp < 0)
                        tmp += 94;
                    ns += Convert.ToChar(33 + (tmp % 94));
                    if (++index == key.Length)
                        index = 0;
                
                }
            }
            return ns;
        }
    }
}
