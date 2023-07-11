#include<iostream>
#include<cstring>
using namespace std;

class Item
{
    private:

    string Name;
    string ItemType;
    float rate;

    public:

    Item()
    {
        Name = " ";
        ItemType = " ";
        rate = 0;
    }

    Item(string a)
    {
        Name = " ";
        ItemType = a;
        rate = 0;
    }

    Item(string a, string b, float c)
    {
        Name = a;
        ItemType = b;
        rate = c;
    }

    void setName(string a)
    {
        Name = a;
    }

    void setType(string a)
    {
        ItemType = a;
    }

    void setRate(float a)
    {
        rate = a;
    }

    string getName()
    {
        return Name;
    }

    string getType()
    {
        return ItemType;
    }

    float getRate()
    {
        return rate;
    }

  //  ~Item(){}
};


