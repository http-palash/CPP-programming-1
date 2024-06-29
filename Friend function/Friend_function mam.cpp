#include <iostream>


using namespace std;
class A
{
    private:
    int x,y;
    protected:
    float a,b;
    public:
    void getdata(){x=10;y=15;a=2.5;b=3.5;}
    friend class Max;
};
class Max
{
    public:
    int max_int(A o);
    float max_float(A o);
};
int Max::max_int(A o)
{
    return o.x>o.y?o.x:o.y;
}


float Max::max_float(A o)
{
    return o.a>o.b?o.a:o.b;
}




int main()
{
    A ob;
    ob.getdata();
    Max mx;
    cout<<"Greater integer is="<<mx.max_int(ob)<<endl;
    cout<<"Greater float value is="<<mx.max_float(ob)<<endl;
    return 0;
}
