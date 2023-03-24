#include <iostream>
#include <fstream>

using namespace std;

int main()
{
     long long i,v[13], x;
    ifstream fin("date.in");
    ofstream fout("date.out");
    while(fin>>x)
        {

        for(i=0;i<13;i++)
           {
        v[i]=x%10;
        x=x/10;
          }
          for(i=0;i<=6;i++){
          swap(v[i],v[12-i]);}

        //  for(i=0;i<=6;i++){

            if(v[0]==1)
            fout<<"sexul persoanei este masculin iar anul nasterii este 19";
               else if(v[0]==2)
                    cout<<"sexul persoanei este feminin iar anul nasterii este 19";
                 else if(v[0]==6)
                cout<<"sexul persoanei este feminin iar anul nasterii este 20";
                    else if(v[0]==5)
                cout<<"sexul persoanei este masculin  iar anul nasterii este 20";
            cout<<v[1]<<v[2]<<" ";
            cout<<"luna nasterii este a-"<<v[4]<<"-a ,ziua "<<" "<<v[5]<<v[6]<<endl;}
    //}
 //  fin.close();
//fout.close();
return 0;
}
