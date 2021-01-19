#include<iostream>
#include<cmath>
using namespace std;

int count_power1=0;
int count_power2=0;

//Function Declaration
double square(double a);
int fibonacci(int c);
void swap (int *m, int*n);
int power(int base, int n);
int power2(int base, int n);


int main()
{

  //Exercise 1
  cout<<"Exercise 1: Point in a Circle"<<endl;
  double x,y,r;
  cout<<"Enter radius of circle:";
  cin>>r;
  cout<<"Enter Co-ordinate x:";
  cin >> x;
  cout<<"Enter Co-ordinate y:";
  cin >> y;

  if (sqrt(square(x)+square(y))<=r)
  cout<<"Point lies in the circle"<<endl;
  else
  cout<<"Point lies outside the circle"<< endl;


//Exercise 2
cout<<"Exercise 2: Position of a moving body"<<endl;
double speed,acc,x0,count_1 ; 
double delta_t;

cout<<"enter the initial position, the speed and the acceleration: ";
cin>>x0>>speed>>acc;
cout<<"how many times you want to display the position of the moving body? ";
cin>>count_1;
cout<<"how often (in seconds) you want to update the position of the moving object? ";
cin>>delta_t;

cout<<"Acceleration: "<<acc<<" Initial speed: "<<speed<<" Initial position: "<<x0<<" Number of times: "<<count_1<<" Delta t: "<<delta_t<<endl;

double tt=0;
int counter=1;
while (counter<=count_1)
{
  cout<<"At time "<<tt<<" the position is "<<(x0+(speed*tt)+((1/2)*acc*tt*tt))<<endl;
  tt=delta_t+tt;
  counter++;
}


//Exercise 3
cout<<"Exercise 3: Swap numbers (by-reference)"<<endl;
int m,nn;

cout<<"Enter the first number m:";
cin>>m;
cout<<"Enter the secon number nn:";
cin>>nn;
swap(m,nn);
cout<<"Swapped First number m:"<<m<<endl;
cout<<"Swapped Second number nn:"<<nn<<endl;


//Exercise 4
cout<<"Exercise 4: Floyd triangle"<<endl;
int j=1,k=1,n;
cout<<"Enter n:";
cin>>n;

  while (j<=n)
  {
    int count = j;
    while (count>0)
    {
      cout <<k<<" ";
      k++;
      count--;
    }
  j++;
  cout << endl;
  }


//Exercise 5
cout<<"Exercise 5: Non-recursive Fibonacci"<<endl;
int kk;

cout<<"Enter non negative index:";
cin>>kk;
if (kk==0 || kk==1)
{
cout<<kk;
}
else if (kk<0)
{
cout <<"Error. Negative number entered.";
}
else
{
int a=0,b=1,j=2;
while(j<=kk)
{
  int next;
  next=a+b;
  a=b;
  b=next;
  j++;
}
cout<<b;
}
cout<<endl;


//Exercise 6
cout<<"Exercise 6: Recursive Fibonacci"<<endl;
int c;
cout<<"Enter non negative index:";
cin>>c;
cout<<fibonacci(c)<<endl;


//Exercise 7
cout<<"Exercise 7: Recursive power of integer numbers"<<endl;
int x1,x2;
cout<<"Enter a non-negative integer x1:";
cin>>x1;
cout<<"Enter the power for x1:";
cin>>x2;
int result1 = power(x1,x2);
cout<<"Result "<<result1<<endl;;
cout<<"Number of times power1 called "<<count_power1;
cout<<endl;
int result2 = power2(x1,x2);
cout<<"Result "<<result2<<endl;
cout<<"Number of times power2 called "<<count_power2<<endl;
cout<<"Logic: Power1 function runs n+1 times, where n is the exponent. ";

return 0;
}

//Function definition
double square(double a)
{
  return a*a;
}

int fibonacci(int c)
{
  if (c==0 ||c==1)
  {
    return c;
  }
  else
  {
    return (fibonacci(c-1) + fibonacci(c-2));
  }
}

 void swap (int *m, int*n)
{
   int g;
   g=*m;
   *m=*n;
   *n=g;
}

int power(int base, int n)
{
if (n==0)
  {
    count_power1++;
    return 1;
  }
else
{
  count_power1++;
  return base*power(base, n-1);
}
}

int power2(int base, int n)
{
  if (n==0)
  {
    count_power2++;
    return 1;
  }
  else if (n%2==0)
  {
    count_power2++;
    return power2(base,n/2)*power2(base, n/2);
  }
  else
  {
    count_power2++;
    return base*power2(base,n/2)*power2(base,(n)/2);
  }
}