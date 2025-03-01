<<<<<<< HEAD
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < 20; i++)
    {
        int next = a+b;
        a = b;
        b = next;
        cout << next<<" ";
    }
    
    return 0;
}
=======
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < 20; i++)
    {
        int next = a+b;
        a = b;
        b = next;
        cout << next<<" ";
    }
    
    return 0;
}
>>>>>>> fc47ba3a976623066f08ff5960312ddc5efe4b8a
