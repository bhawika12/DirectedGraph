#include<iostream>
using namespace std;
class graph
{
public:
    int v,e,i,j,k,l,arr[10][10];
    void insertion()
    {
        cout<<"Enter the number of vertex"<<endl;
        cin>>v;
        cout<<"Enter the number of edges"<<endl;
        cin>>e;
        for(i=0;i<v;i++)
        {
            for(j=0;j<v;j++)
            {
                arr[i][j]=0;
            }
        }
        cout<<"enter the values"<<endl;
        for(i=0;i<e;i++)
        {
           cin>>k>>l;
           if(k!=NULL || l!=NULL)
                    arr[k][l]=1;
                else
                    arr[k][l]=0;
        }
    }
    void display()
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    graph g;
    g.insertion();
    g.display();
}
