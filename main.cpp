#include <iostream>
#include<algorithm>
#include<stdio.h>


using namespace std;

void transition(long long a[],long long n,unsigned long long& cnt)
{

   //int flag=checker(a,n);
   for(long long j=0;j<n;j++)
    {
      //std::cout<<a[j]<<std::endl;
      // myopfile<<std::endl<<a[j]<<std::endl;
    }
   std::sort(a,a+n);
   if (a[0]==a[n-1])
   {
       //d::cout<<std::endl<<"cnt "<<std::endl<<cnt;
       return;

   }
   else
    {
        //std::cout<<std::endl<<"present cnt is"<<cnt<<std::endl;
        //myopfile<<std::endl<<"present cnt is"<<cnt<<std::endl;
        long long diff=a[n-1]-a[0];

        for(long long i=0;i<n-1;i++)
            {
                a[i]=a[i]+diff;
            }
            cnt=cnt+diff/5+((diff%5)/2)+((diff%5)%2);
    }

        transition(a,n,cnt);

    }


int main()
{
    int t;
    cin>>t;
    //ofstream myopfile;
    //myopfile.open("op.txt");
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        long long a[n];//{53, 361 ,188 ,665,786, 898, 447 ,562, 272, 123, 229, 629, 670, 848, 994, 54, 822, 46, 208, 17, 449, 302, 466, 832, 931, 778, 156, 39, 31 ,777, 749, 436, 138, 289, 453, 276, 539, 901, 839, 811, 24, 420, 440 ,46, 269, 786, 101, 443 ,832, 661, 460, 281, 964, 278, 465, 247, 408, 622, 638, 440, 751, 739, 876, 889, 380, 330, 517 ,919, 583, 356, 83 ,959, 129, 875, 5 ,750 ,662, 106, 193, 494 ,120, 653, 128, 84 ,283, 593, 683, 44, 567, 321, 484, 318, 412 ,712, 559, 792, 394, 77 ,711, 977, 785, 146 ,936 ,914 ,22 ,942, 664, 36, 400 ,857};
        for (long long j=0;j<n;j++)
        {
            cin>>a[j];

        }
        //long long temp=a[0];


        //transition(a,n,cnt);
        std::sort(a,a+n);
        unsigned long long min_cnt=9999999999;

        for(int j=0;j<5;j++)
        {
         unsigned long long cnt=0;

        for(long long i=0;i<n;i++)
            {
            long long diff=a[i]-a[0]+j;
            cnt=cnt+diff/5+((diff%5)/2)+((diff%5)%2);
            }
            if (min_cnt>cnt)
            {
                min_cnt=cnt;
            }

        }
        cout<<min_cnt<<endl;
    }

    return 0;
}
