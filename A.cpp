    #include <iostream>
    using namespace std;
    class arr
    {
    public:
        int *a;
        int size;
        int length;
        arr(int b)
        {
            size = b;
            a=new int[size];
        }
        void create()
        {
            cout << "length ";
            cin >> length;
            for (int i = 0; i < length; i++)
            {
                cin >> a[i];
            }
        }
        void dispaly()
        {
            for (int i = 0; i < length; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        arr merge(arr y)
        {
            arr z(20); 
            z.length=length+y.length;
            int i=0,j=0,k=0;
            while(i<length && j<y.length)
            {
                if(a[i]<y.a[j])
                z.a[k++]=a[i++];
                else
                z.a[k++]=y.a[j++];
            }
            for(;i<length;i++)
            z.a[k++]=a[i];
            for(;j<y.length;j++)
            z.a[k++]=y.a[j];
            
            return z;
     
        }
    };
    int main()
    {
        arr a1(20);
        arr a2(20);
        // arr a3(20);
        a1.create();
        a2.create();
        arr a3(20);
        a3=a1.merge(a2);
        a3.dispaly();
        return 0;
    }
