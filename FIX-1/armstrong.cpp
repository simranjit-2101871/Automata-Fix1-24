
#include<iostream>
#include using namespace std;

int main()
{
int number, temp, remainder, result = 0, n = 0 ;

cout << "Enter an integer : ";
cin >> number;

temp = number;

// Finding the number of digits

while (temp != 0)
{
temp /= 10;
++n;
}

temp = number;

// Checking if the number is armstrong

while (temp != 0)
{
remainder = temp%10;
result += pow(remainder, n);
temp /= 10;
}

if(result == number)
cout << number << " is an Armstrong number\n";
else
cout << number << " is not an Armstrong number\n";

return 0;
}



//COMMAND LINE ARGUMENT
/*include<stdio.h>
#include<math.h>
int main(int a, char*b[])
{
int n;
n= atoi(b[1]);
int sum=0;
int temp=n;
int cnt=0;
while(n!=0)
{
n=n/10;
cnt++;
}
n=temp;
while(n!=0)
{
int rem=n%10;
sum=sum+pow(rem,cnt);
n=n/10;
}
if(temp==sum)
{
printf(“yes”);
}
else
{
printf(“no”);
}
return 0;
}
*/