#include<iostream>

using namespace std;

int main()
{
    
    int x=0;
    cin>>x;
   
    // pyramid
    //  *
    //  **
    //  ***
    //  ****
    //  *****
        
    
    for(int i = 0; i<x; i++)
    {
        
        for(int k = i+1; k>0; k--)
        {
            cout<<"*";

        }
        cout<<endl;


    }

    
    //reverse pyramid
    //       *
    //      **
    //     ***
    //    ****
    //   *****
    for(int i = 0; i<x; i++)
    {
        for(int j = x  ; j>i+1; j--)
        {
            cout<<" ";
        
        }
        for(int k = i+1; k>0; k--)
        {
            cout<<"*";

        }
        cout<<endl;


    }

    //   upside down triangle

// *****
//  ****
//   ***
//    **
//     *

        for(int i = 0; i<x; i++)
        {
            for(int j = i  ; j>0; j--)
            {
                cout<<" ";

            }
            for(int k = i; k<x; k++)
            {
            cout<<"*";

            }
        cout<<endl;






        }


     //full pyramid
//     *
//    ***
//   *****
//  *******
// *********
   
    for(int i = 0; i<x; i++)
    {
        for(int j = x  ; j>i+1; j--)
        {
            cout<<" ";
        
        }
        for(int k = (i+1); k>0; k--)
        {
            cout<<"*";

        }
        for(int k = (i); k>0; k--)
        {
            cout<<"*";

        }
        
        cout<<endl;


    }



    //  X 
    for(int i = 0; i<x; i++)
    {
        int n=0;
    
        
        for(int j=i; j>0 ; j--)
        {
            n++; 
            cout<<" ";
        }
        cout<<"*";
        if(i!=(x/2)){

        for(int j=x-2*n; j>0 ; j--)
        {
            cout<<" ";
        }
        cout<<"*";
        }
        
        
        cout<<endl;
        

    }
 





    


    

}