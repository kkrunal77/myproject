#include<iostream>
using namespace std;

class stu
{
    static int count;

    public:
    stu()
    {
        count++;
        cout<<count<<" count in constructor "<<endl;

    }
    ~stu()
    {
        cout<<count<<" count in destructor "<<endl;
        count--;
    }
};

   int stu::count;
int main()
{
    stu s1,s2,s3;

}
