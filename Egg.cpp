#include<iostream>
#include<cstring>
#include "Item.cpp"
using namespace std;

class Egg : public Item
{
    private:

    int num;
    bool sale;
    bool gift;

    public:

    Egg()
    {
        num = 0;
        sale = 0;
        gift = 0;
        setType("Food");
        setName("Eggs");
    }

    Egg(int a, float b)
    {
        num = a;
        setRate(b);
        setName("Eggs");
        setType("Food");
        sale = 0;
        gift = 0;
    }

    Egg(int a, float b, bool c)
    {
        num = a;
        setRate(b);
        setName("Eggs");
        setType("Food");
        sale = c;
        gift = 0;
    }

    Egg(int a, float b, bool c, bool d)
    {
        num = a;
        setRate(b);
        setName("Eggs");
        setType("Food");
        sale = c;
        gift = d;
    }

    bool getSale()
    {
        return sale;
    }

    int getNum()
    {
        return num;
    }

    float Price()
    {
        if (sale == 1)
            return (getRate() - (0.25 * getRate())) * num;
        
        return getRate() * num;
    }

    bool isGift()
    {
        return gift;
    }

    friend ostream& operator<<(ostream& give, Egg& egg)
    {
        give<<egg.getName()<<", Price: "<<egg.getRate()<<", Number: "<<egg.num<<", On Sale: ";

        if (egg.sale == 1)
            give<<"Yes";
        else
            give<<"No";
        
        give<<", Gift Card: ";

        if (egg.gift == 1)
            give<<"Yes";
        else
            give<<"No";
        
        give<<", Price: "<<egg.Price()<<" Rs. \n";

        return give;
    }

    bool operator==(Egg& p1)
    {
        if (getName() == p1.getName() && getType() == p1.getType() && getRate() == p1.getRate())
            return 1;
        return 0;
    }

  //  ~Egg(){}
};

class Bread : public Item
{
    private:

    int num;
    bool sale;
    bool gift;

    public:

    Bread()
    {
        num = 0;
        sale = 0;
        gift = 0;
        setType("Food");
        setName("Bread");
    }

    Bread(int a, float b)
    {
        num = a;
        setRate(b);
        setName("Bread");
        setType("Food");
        sale = 0;
        gift = 0;
    }

    Bread(int a, float b, bool c)
    {
        num = a;
        setRate(b);
        setName("Bread");
        setType("Food");
        sale = c;
        gift = 0;
    }

    Bread(int a, float b, bool c, bool d)
    {
        num = a;
        setRate(b);
        setName("Bread");
        setType("Food");
        sale = c;
        gift = d;
    }

    bool getSale()
    {
        return sale;
    }

     int getNum()
    {
        return num;
    }
       
    float Price()
    {
        if (sale == 1)
            return (getRate() - (0.25 * getRate())) * num;
        
        return getRate() * num;
    }

    bool isGift()
    {
        return gift;
    }

    friend ostream& operator<<(ostream& give, Bread& bread)
    {
        give<<bread.getName()<<", Price: "<<bread.getRate()<<", Number: "<<bread.num<<", On Sale: ";

        if (bread.sale == 1)
            give<<"Yes";
        else
            give<<"No";
        
        give<<", Gift Card: ";

        if (bread.gift == 1)
            give<<"Yes";
        else
            give<<"No";
        
        give<<", Price: "<<bread.Price()<<" Rs. \n";

        return give;
    }

    bool operator==(Bread& p1)
    {
        if (getName() == p1.getName() && getType() == p1.getType() && getRate() == p1.getRate())
            return 1;
        return 0;
    }

 //   ~Bread(){}
};

class Pen : public Item
{
    private:

    int num;
    bool sale;
    bool gift;

    public:

    Pen()
    {
        num = 0;
        sale = 0;
        gift = 0;
        setType("Supplies");
        setName("Pens");
    }

    Pen(int a, float b)
    {
        num = a;
        setRate(b);
        setName("Pens");
        setType("Supplies");
        sale = 0;
        gift = 0;
    }

    Pen(int a, float b, bool c)
    {
        num = a;
        setRate(b);
        setName("Pens");
        setType("Supplies");
        sale = c;
        gift = 0;
    }

    Pen(int a, float b, bool c, bool d)
    {
        num = a;
        setRate(b);
        setName("Pens");
        setType("Supplies");
        sale = c;
        gift = d;
    }

    bool getSale()
    {
        return sale;
    }

     int getNum()
    {
        return num;
    }
       
    float Price()
    {
        if (sale == 1)
            return (getRate() - (0.25 * getRate())) * num;
        
        return getRate() * num;
    }

    bool isGift()
    {
        return gift;
    }

    friend ostream& operator<<(ostream& give, Pen& pen)
    {
        give<<pen.getName()<<", Price: "<<pen.getRate()<<", Number: "<<pen.num<<", On Sale: ";

        if (pen.sale == 1)
            give<<"Yes";
        else
            give<<"No";
        
        give<<", Gift Card: ";

        if (pen.gift == 1)
            give<<"Yes";
        else
            give<<"No";
        
        give<<", Price: "<<pen.Price()<<" Rs. \n";

        return give;
    }

    bool operator==(Pen& p1)
    {
        if (getName() == p1.getName() && getType() == p1.getType() && getRate() == p1.getRate())
            return 1;
        return 0;
    }

  //  ~Pen(){}
};

class Socks : public Item
{
    private:

    int num;
    bool sale;
    bool gift;

    public:

    Socks()
    {
        num = 0;
        sale = 0;
        gift = 0;
        setType("Clothes");
        setName("Socks");
    }

    Socks(int a, float b)
    {
        num = a;
        setRate(b);
        setName("Socks");
        setType("Clothes");
        sale = 0;
        gift = 0;
    }

    Socks(int a, float b, bool c)
    {
        num = a;
        setRate(b);
        setName("Socks");
        setType("Clothes");
        sale = c;
        gift = 0;
    }

    Socks(int a, float b, bool c, bool d)
    {
        num = a;
        setRate(b);
        setName("Socks");
        setType("Clothes");
        sale = c;
        gift = d;
    }

    bool getSale()
    {
        return sale;
    }

     int getNum()
    {
        return num;
    }
       
    float Price()
    {
        if (sale == 1)
            return (getRate() - (0.25 * getRate())) * num;
        
        return getRate() * num;
    }

    bool isGift()
    {
        return gift;
    }

    friend ostream& operator<<(ostream& give, Socks& socks)
    {
        give<<socks.getName()<<", Price: "<<socks.getRate()<<", Number: "<<socks.num<<", On Sale: ";

        if (socks.sale == 1)
            give<<"Yes";
        else
            give<<"No";
        
        give<<", Gift Card: ";

        if (socks.gift == 1)
            give<<"Yes";
        else
            give<<"No";
        
        give<<", Price: "<<socks.Price()<<" Rs. \n";

        return give;
    }

    bool operator==(Socks& p1)
    {
        if (getName() == p1.getName() && getType() == p1.getType() && getRate() == p1.getRate())
            return 1;
        return 0;
    }

  //  ~Socks(){}
};

