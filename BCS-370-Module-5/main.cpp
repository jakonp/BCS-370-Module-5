//
//  main.cpp
//  BCS-370-Module-5
//
//  Created by Nick Jakobczyk on 11/22/20.
//

#include <iostream>
#include <vector>

using namespace std;

class mySet
{
public:
    vector<int> arr;
    mySet()
    {
        arr.clear();
    }
    void addElement(int a)
    {
        for(int k : arr)
        {
            if(k==a)
                return;
        }
        arr.push_back(a);
    }
    void showAll()
    {
        for(int k : arr)
            cout << k << " " << endl;
    }
    
    void findUnion(mySet b)
    {
        cout << "The union of " << endl;
        for(int k : arr)
            cout << k << " ";
        cout << endl << "AND" << endl;
        for(int k : b.arr)
            cout << k << " ";
        cout << endl << "is" << endl;
        for (int k : arr)
            cout << k << " ";
        
        for (int j : b.arr)
        {
            bool found = false;
            for (int k : arr)
            {
                if(k==j)
                {
                    found = true;
                    break;
                }
            }
            cout << j << " ";
        }
        cout << endl;
    }
    
    void findIntersection(mySet b)
    {
        cout << "The intersection of\n";
        for(int j : arr)
        {
            bool found = false;
            for(int k : arr)
            {
                if(k==j)
                {
                    found = true;
                    break;
                }
            }
            if(found)
                cout << j << " ";
        }
        cout << endl;
    }
    
    void findDifference(mySet b)
    {
        cout << "The difference of\n";
        for(int k : arr)
            cout << k << " ";
        cout << endl << "AND" << endl;
        for(int k : b.arr)
            cout << k << " ";
        cout << endl << "is" << endl;
        
        for (int k : arr)
        {
            bool found = false;
            for (int j : b.arr)
            {
                if(j == k)
                {
                    found = true;
                    break;
                }
            }
            if(!found)
                cout << k << " ";
        }
        cout << endl;
    }
};


int main()
{
    mySet a, b;
    //Add elements to a
    a.addElement(2);
    a.addElement(3);
    a.addElement(4);
    a.addElement(6);
    a.addElement(6);
    a.addElement(7);
    a.addElement(3);
    
    cout << "Set A: ";
    a.showAll();
    
    //Add elements to b
    
    b.addElement(4);
    b.addElement(3);
    b.addElement(5);
    b.addElement(7);
    b.addElement(1);
    b.addElement(3);
    b.addElement(4);
    
    cout << "Set B: ";
    b.showAll();
    
    a.findUnion(b);
    a.findIntersection(b);
    a.findDifference(b);
    return 0;
    
}
