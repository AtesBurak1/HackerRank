#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
         long int h;
        long int l;
        long int b;
    public:
        Box(long int l, long int b,long int h){
            this->l= l;
            this->b= b;
            this->h=h;
        }
        Box (){
            l=0;
            b=0;
            h=0;
        }
        Box(const Box& n){
            l=n.l;
            b=n.b;
            h=n.h;
        }
        long int getLength()const{ return l;}
        long int getBreadth()const{ return b;}
        long int getheight()const{ return h;}
        
        long int CalculateVolume(){
            long int volume = h * l * b;
            return volume;
        }
        friend ostream& operator<< (ostream& os, const Box& n)
        {
            os << n.l << ' ' << n.b << ' ' << n.h;
            return os;
        }
        friend bool operator <(Box& n, Box& n1)
        {
            if(n.l<n1.l)
            {
                return true;
            }
            if(n.b < n1.b && n.l==n1.l)
            {
                return true;
            }
            if(n.h<n1.h && n.b == n1.b && n.l==n1.l)
            {
                return true;
            }
            
            return false;
        }
        
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}