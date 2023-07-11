#include<iostream>
#include<cstring>
#include "Egg.cpp"
using namespace std;

class Cart
{
    private:

    Egg* egg;
    Bread* bread;
    Pen* pens;
    Socks* socks;
    static int total;

    public:
    
    Cart()
    {
        egg = new Egg[5];
        bread = new Bread[5];
        pens = new Pen[5];
        socks = new Socks[5];
    }

    Cart(const Cart& c2)
    {
        egg = new Egg[5];
        bread = new Bread[5];
        pens = new Pen[5];
        socks = new Socks[5];

        for (int i=0; i<5; i++)
        {
            egg[i] = c2.egg[i];
            bread[i] = c2.bread[i];
            pens[i] = c2.pens[i];
            socks[i] = c2.socks[i];
        }
    }

    int getTotal()
    {
        return total;
    }

    bool Discount()
    {
        int count = 0;

        for (int i=0; i<5; i++)
        {
            if (egg[i].getSale() == 1)
            {
                count++;
            }
            if (bread[i].getSale() == 1)
            {
                count++;
            }
            if (pens[i].getSale() == 1)
            {
                count++;
            }
            if (socks[i].getSale() == 1)
            {
                count++;
            }
        }

        if (count >= 3)
            return 1;
        return 0;
    }

    double price()
    {
        double sum = 0;

        for (int i=0; i<5; i++)
        {
            sum += egg[i].Price();
            sum += bread[i].Price();
            sum += pens[i].Price();
            sum += socks[i].Price();
        }

        if (Discount() == 1)
            sum -= 0.125 * sum;
        
        return sum;
    }

    void operator+=(Egg &p1)
    {
        for (int i=0; i<5; i++)
        {
            if (egg[i].getRate() == 0)
            {
                egg[i] = p1;
                total += p1.getNum();
                break; 
            }
        }
    }

    void operator+=(Bread &p1)
    {
        for (int i=0; i<5; i++)
        {
            if (bread[i].getRate() == 0)
            {
                bread[i] = p1;
                total += p1.getNum();
                break; 
            }
        }
    }

    void operator+=(Pen &p1)
    {
        for (int i=0; i<5; i++)
        {
            if (pens[i].getRate() == 0)
            {
                pens[i] = p1;
                total += p1.getNum();
                break; 
            }
        }
    }

    void operator+=(Socks &p1)
    {
        for (int i=0; i<5; i++)
        {
            if (socks[i].getRate() == 0)
            {
                socks[i] = p1;
                total += p1.getNum();
                break; 
            }
        }
    }

    Cart operator-(Egg &p2)
    {
        Cart c2 = *this;
        for (int i=0; i<5; i++)
        {
            if (c2.egg[i].getRate() != 0)
            {
                c2.egg[i].setRate(0);
                total -= p2.getNum();
            }
        }

        return c2;
    }

    Cart operator-(Bread &p2)
    {
        Cart c2 = *this;
        for (int i=0; i<5; i++)
        {
            if (c2.bread[i].getRate() != 0)
            {
                c2.bread[i].setRate(0);
                total -= p2.getNum();
            }
        }

        return c2;
    }

    Cart operator-(Pen &p2)
    {
         Cart c2 = *this;
        for (int i=0; i<5; i++)
        {
            if (c2.pens[i].getRate() != 0)
            {
                c2.pens[i].setRate(0);
                total -= p2.getNum();
            }
        }
    }

    Cart operator-(Socks &p2)
    {
        Cart c2 = *this;
        for (int i=0; i<5; i++)
        {
            if (c2.socks[i].getRate() != 0)
            {
                c2.socks[i].setRate(0);
                total -= p2.getNum();
            }
        }
    }

    friend ostream& operator<<(ostream& give, Cart& c)
    {
	    if (c.getTotal() == 0)
        {
		    give<<"The Cart is Empty. There are no items in it."<<endl;
		    return give;
	    }

	    give<<"Cart Contains: "<<endl;

	    for (int i=0; c.egg[i].getRate()!=0; i++)
        {
		    give<<c.egg[i];
	    }

	    for (int i=0; c.bread[i].getRate()!=0; i++)
        {
		    give<<c.bread[i];
	    }

	    for (int i=0; c.pens[i].getRate()!=0; i++)
        {
		    give<<c.pens[i];
	    }

	    for (int i=0; c.socks[i].getRate()!=0; i++)
        {
		    give<<c.socks[i];
	    }

	    give<<"Is Cart Discounted? ";

	    if (c.Discount() == 1)
		    give<<"Yes"<<endl;
	    else
		    give<<"No"<<endl;

	    give<<"Total Price: "<<c.price()<<" Rs. \n";
	    return give;
    }

    Cart operator+(Egg &p1)
    {
        Cart c2(*this);
        total += total;
        c2 += p1;
        return c2;
    }

    Cart operator+(Bread &p1)
    {
        Cart c2(*this);
        total += total;
        c2 += p1;
        return c2;
    }

    Cart operator+(Pen &p1)
    {
        Cart c2(*this);
        total += total;
        c2 += p1;
        return c2;
    }

    Cart operator+(Socks &p1)
    {
        Cart c2(*this);
        total += total;
        c2 += p1;
        return c2;
    }

    void operator-=(Egg &p1)
    {
        for (int i=0; i<5; i++)
        {
            if (egg[i].getRate() != 0)
            {
                egg[i].setRate(0);
                total -= p1.getNum();
            }

            if (bread[i].getRate() != 0)
            {
                bread[i].setRate(0);
                total -= p1.getNum(); //HOW WILL WE KNOW WHAT AMOUNT OF BREAD TO DEDUCT
            }
        }
    }

    void operator-=(Bread &p1)
    {
        for (int i=0; i<5; i++)
        {
            if (egg[i].getRate() != 0)
            {
                egg[i].setRate(0);
                total -= p1.getNum();
            }

            if (bread[i].getRate() != 0)
            {
                bread[i].setRate(0);
                total -= p1.getNum();
            }
        }
    }
    
    void operator-=(Pen &p1)
    {
        for (int i=0; i<5; i++)
        {
            if (pens[i].getRate() != 0)
            {
                pens[i].setRate(0);
                total -= p1.getNum();
            }
        }
    }

    void operator-=(Socks &p1)
    {
        for (int i=0; i<5; i++)
        {
            if (socks[i].getRate() != 0)
            {
                socks[i].setRate(0);
                total -= p1.getNum();
            }
        }
    }

    // ~Cart()
    // {
    //     delete [] egg;
    //     delete [] bread;
    //     delete [] pens;
    //     delete [] socks;
    // }
};


int Cart::total = 0;

int main() {
// example of non sale item.
Bread p1(12, 3);

cout << p1 << endl;
// example of sale item
Egg p2(15, 1, true);
// example of sale item with gift card
Socks p3(20, 2.0, true, true);
Cart c1;
c1 += p1; //add bread to cart
c1 += p1;
c1 += p2; //add eggs to cart
c1 += p3; //add socks to cart
cout <<"Cart 1\n"<< c1;
//cout<<c1.getTotal()<<endl;
c1 = c1 - p1; // Delete all the unit of type bread
//cout << c1 << endl;
Cart c2;
c2 = c1 + p2; // Add item of type eggs
cout <<"\nCart 2\n"<< c2;

// Delete all the units of eggs type food from the cart.
c1 -= p2;
cout <<"\nCart 1\n"<< c1;
cout << c1.getTotal(); //displays number of all items in all carts.
return 0;
}