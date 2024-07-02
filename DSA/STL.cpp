#include<bits/stdc++.h>
using namespace std;

// int main(){

//     return 0;
// // }
// ---------------------------------------------------------------------

// containers:
// 1. Vector - it is a dynamic datatype used to store values where we don't know the size. Used instead 
// of array.

void explainvector(){
    vector<int> v; //syntax

    // intialization 2 methods

    //v.push_back(1); 
    //v.emplace_back(2);

    vector<pair<int,int>> vec; //we can also use the pair inside the vector 

    v.push_back({1,2});         // This is used to store the more than 1 values, here we can just 
                                // use the braces like this

    v.emplace_back(1,2);        // This is used to store the more than 1 values, here we can just 
                                // use the braces like this

    vector<int>v1(5,100); // This will initialize the 5 places with 100 values and this dynamic 
    //which means that it can be increased later.

    vector<int>v2(5); //this initialize the 5 places with 0 or garbage values depending on the compiler.

    vector<int>v3(v1); // this will copy all the contents from v1 and store it in v3.

//------------------------------------------------------------------------------

// To ways to accesss the vectors:
// 1. v[0] where 0 is the index name


// 2. using iterator

//syntax

vector<int>::iterator it = v.begin();   // here 'it' is the iterator variable and .begin is the function to point to the first index 
                                        // memory address 
it++ // this will increment the index                                      //
cout<< *(it)  // this will access the value of that memory.

.end() // this is used access +1 index address of the last values in the vectors. so to point to the last memory value you need to 
       // decrement the 'it' value by one.  

.back() // this points to the last index memory location.

//-----------------------------------------------------------------------------------------------------------------------------

//to print the values in vector done using for loop

for(vector<int>::iterator it = v.begin(); it != v.end(); it++){     //this is the long method
    cout << *(it);
}

for(auto it = v.begin(); it != v.end(); it++){                  // this is short cut, when in auto is used to detect automatically the datatype 
      cout << *(it);
}

for(auto it : v){                                          //for-each loop 
    cout << it;
}



//---------------------------------------------------------------------------------------------
// to delete the elements inside the vector

// 12,34,53,23,13   -->  12,53,23,13
v.erase(v.begin()+1);        // this is used to erase the single element inside the vector

//12,34,53,23,13     -->  12,23,13
v.erase(v.begin()+1,v.begin()+3);  // this will erase index 1,2 but not 3.   
        //(start,end)

//-----------------------------------------------------------------------------------------

//insert

vector<int>v4(2,100);    //(100,100)
v4.insert(v4.begin()+1, 300); // (100,300,100)
v4.insert(v4.begin(),2,50);  //(50,50,100,300,100)

//-----------------------------------

cout << v.size();        //prints the size of vector

v4.pop_back();             //pops the last element.

v1.swap(v4);               //swaps the contents of v1 to v4 and vice varsa 

v4.clear();                //clears everything inside the vector.

cout<< v.empty();           //checks if vector is empty or not and return true or false.

}

//-----------------------------------------------------------------------

void explainList(){

    list<int> ls;   //syntax initialization

    ls.push_back(2);    //{2}
    ls.emplace_back(4);   //{2,4}

    ls.push_front(5);     //{5,2,4}
    ls.emplace_front();   

    //begin,end,clear,insert,size,swap ..
    //everything is same like the vector in the List
    
}

void explainStack(){
    stack<int> st;  //syntax initialization
        // it only has 3 operation push , pop , top
    st.push(1);   //{1}
    st.push(2);   //{2,1}
    st.push(3);   //{3,2,1}
    st.push(4);   //{4,3,2,1}
    st.push(5);   //{5,4,3,2,1}
    st.emplace(5);  //{5,5,4,3,2,1}


    cout << st.top();   //print 5

    st.pop();       //{5,4,3,2,1}

    st.pop();    //{4,3,2,1}
   cout<<st.top();   //4
    
    cout<< st.size();
    cout<< st.empty();

    stack<int>st1,st2;
    st1.swap(st2);     // swaps all the contents between st1 and st2.

}

void explainQueue(){
    
}