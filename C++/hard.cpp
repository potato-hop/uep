#include <iostream>
#include <cstring>
 
int main()
{
  char str1[] = "Пример строки";
  char str2[40];
  char str3[60];
  long long sO = 0, dO = 0, startO = 0, endO = 0;
 for(int i = 100; i != 0; i--)
 {
 clock_t start = clock();
 memcpy (str2, str1, strlen(str1)+1);               // копируем строку str1  и сохраняем в str2
     clock_t end = clock();
     clock_t s = clock();
 memcpy (str1, str2, strlen(str1)+1);               // копируем строку str1  и сохраняем в str2
     clock_t d = clock();
     endO += end;
     startO += start;
     dO += d;
     sO += s;
 }
     std::cout << endO-startO << "__1or" << std::endl;
     std::cout << dO-sO << "__2de" << std::endl;
  return 0;
}
