#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int ramdomN (int MAX,int MIN)
{
   /*random_device rd;
   mt19937 gen(rd());
   uniform_int_distribution<int>distribution (MIN,MAX);
   int ran; 
   ran = distribution(gen);
   return 0;*/
   srand(time (0));
   int ran;
   ran=rand()% (MAX - MIN + 1)+MIN;
   //cout<<ran;

return ran;
}
int primo (int ran)
{
   int a=1;
   do
   {
      for (int i = 2; i < ran; i++)
      {
         if (ran%i ==0 )
         {
            a-=1;
         } 
      }
   } while ( a!= 0);
 return ran;
}
int main(void)
{
int max,min,ran,nP,sum,a=1,nran;
int numerosP[9];
cout<<"ingresa el valor maximo\n";cin>>max;
cout<<"\ningrese el valor minimo\n";cin>>min;
ran=ramdomN(max,min);
   //nP=primo(ran);
   for (int i = 0; i < 10; i++)
   {
    ran;
      do
      {
         k,
         for (int j = 2; j < ran; i++)
         {
            if (ran % j ==0 )
            {
               a-=1;
            } 
         }

      } while ( a!= 0);
    a+=1;
    numerosP[i]=ran;
    cout<<numerosP[i];
   }

cout<<"la suma del numero primo numero 7 y el numero primo 9"<<sum;
return 0;

}