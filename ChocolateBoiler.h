#ifndef _CHOCOLATEBOILER_H
#define _CHOCOLATEBOILER_H

public class ChocolateBoiler
{
    public:
        static ChocolateBoiler* uniqueIns;
        void fill()
        {
            if(isEmpty())
            {
                bempty = false;
                bboiled = false;
                //fill chocolate & milk in the boiler, heat
            }
        }

        void drain()
        {
            if(!isEmpty() && isBoiled())
            {
                //drain the boiled chocolate & milk off the boiler.
                empty = true;
            }
        }

        void boil()
        {
            if(!isEmpty() && !isBoiled())
            {
                //boil the content in the boiler
                bboiled = true;
            }
        }

        bool isEmpty() {return bempty;}
        bool isBoiled() {return bboiled;}

        static ChocolateBoiler* getInstance()
        {
            if(uniqueIns == NULL)    // where to define uniqueIns ?
            {
                uniqueIns = new ChocolateBoiler();
            }
            return uniqueIns;
        }

    private:
        ChocolateBoiler()
        {
            bempty = true;
            bboiled = false;
        }

        bool bempty;
        bool bboiled;
}

#endif
