#include <iostream>
#include <cstring>
#include <stddef.h>
#include <chrono> // for new std::chrono
 
 
class Timer //sexy new fasion timer
{
	private:
	 	using clock_t = std::chrono::high_resolution_clock;
 		using second_t = std::chrono::duration<double, std::ratio<1> >;
 	 	std::chrono::time_point<clock_t> m_beg;
		 		 	 
 	 public:
  	 	Timer() : m_beg(clock_t::now())
 	 		{
 			}
	  	void reset()
		 	{
	 		m_beg = clock_t::now();
			}
 	 	double elapsed() const
		{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
		}
	};
					 	 			 					 					 
	void *my_memcpy(void *fist, const void *sec, size_t count)
{
/*
asm
(
  ".intel_syntaxnoprefix\n\t"
	  //"moveax, %1\n\t"
	  //"mov%0, eax\n\t"
	  //mov bl, [fist]
	  //mov [secSu:wm], 
	  //qword
	  :"S"(fistSum), "D"(secSum), "c"(countSum)		//esi, edi, ecx  
	  :"r"(fist, sec, count)  
	  :"%ecx", "%edi", "%esi" 						//shithappens
//)*/
//int i;

/*for( i = 0; i < count; i++ )
   ((unsigned char*)fist)[i] = ((unsigned char*)sec)[i];
   return fist;*/

// long *qdp = fist;
//     const long *qsp = sec;
//     unsigned char* stCH = static_cast<unsigned char*>(src);
//
     int i, m;
     unsigned long  *wdst = (unsigned long*)(fist); 		//void* space to long*
     unsigned long  *wsrc = (unsigned long*)(sec);  
     unsigned char  *cdst, *csrc;
      
      for(i = 0, m = count / sizeof(long); i < m; i++)  	//word's replace to optimize
         *(wdst++) = *(wsrc++);                     
          
          cdst = (unsigned char*)wdst;
          csrc = (unsigned char*)wsrc;

          for(i = 0, m = count % sizeof(long); i < m; i++)     //byte to byte
             *(cdst++) = *(csrc++);
              
             /* return dst;
              
count++;
         while (count--)
   ((unsigned char*)fist)[count] = ((unsigned char*)sec)[count]; */
		        // *dp++ = *sp++;
	     return fist;					//spit out the res
}

int main()
{
  char str1[4104304] = "xxxxxxxxxxxxxxxxxxxxx";
  char str2[4104304];
  //char str3[60];
  double sO = 0.0, dO = 0.0, startO = 0.0, endO = 0.0;		//declare ind(old)
  int n[4] = {16, 700, 16384, 4104304};				//test's page - Mb and Kb in bytes
     double end = 0.0, d= 0.0, sumO1, sumO2, start = 0.0, s =0.0;   			//declare ind(new)
  for(int c =0; c !=4; c++)
  {
 for(int i = 100; i != 0; i--)					//govtest 3000.
 {
 clock_t start = clock();
 //Timer start;							//time on myF, endtime -
// memcpy (str2, str1, strlen(str1)+1);             
 my_memcpy(str1, str2, n[c]);            
     clock_t end = clock();
     clock_t s = clock();
      //end = start.elapsed();
      //Timer s;
 memcpy(str1, str2, n[c]);					//time on standartF
	//d = s.elapsed(); 
     clock_t d = clock();
     //sumO1 += end;						//++in all time for more normal data
     //sumO2 += d;
     endO += end;
     startO += start;
     dO += d;
     sO += s;
 }
 sumO1 = endO-startO;
 sumO2 = dO-sO;
 sumO1 = sumO1/100;
 sumO2 = sumO2/100;
     std::cout << sumO1 << "__1or " << c+1 << std::endl;	 //1-2 funct in counts; test num
     std::cout << sumO2 << "__2de " << c+1 << std::endl;
     std::cout << (sumO1)-(sumO2) << "  in % "			
<< (((sumO1)-(sumO2))/(sumO2))*100 << std:: endl;		//diff 1-2 in time, % of more/uneffective
  }
  return 0;     						//govnocoded by vim
}
