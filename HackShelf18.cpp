#include <iostream>

using namespace std;
int main()
{

    int age;
    char book1[700] = "The Linux Command Line: https://www.amazon.fr/Linux-Command-Line-2nd-Introduction/dp/1593279523/ref=bmx_dp_uidoih2o_d_sccl_3_12/260-6940157-9880319?psc=1\n" ;
    char book2[200] = "Linux Basics for Hackers: https://www.amazon.fr/Linux-Basics-Hackers-Networking-Scripting/dp/1593278551/ref=pd_bxgy_thbs_d_sccl_2/260-6940157-9880319?psc=1\n" ;
    char book3[200] = "Black Hat Python: https://www.amazon.fr/Black-Hat-Python-2nd-Programming/dp/1718501129/ref=pd_sbs_d_sccl_3_3/260-6940157-9880319?psc=1\n" ;

    
        cout << "age: ";
        cin >> age;


    if(age < 18)
    {
         cout << "No No No your age not good";

         
    }
    else{


        cout << book1;
        cout << book2;
        cout << book3;

     }
    
 return 0;
}
