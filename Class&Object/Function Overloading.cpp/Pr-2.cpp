#include <iostream>
using namespace std;

class LoadTexture
{
public:
    void loadTexture(string filepath)
    {
        cout << "Load texture from file: " << filepath << endl;
    }

    void loadTexture(int a, int b)
    {
        cout << "Load texture from memory: " << "width: " << a << " and height: " << b << endl;
    }

    void loadTexture(string server, string p)
    {
        cout << "Load texture from server: " << server << " : " << p << endl;
    }
};

int main()
{
    LoadTexture obj;
    int x, a, b;
    string port;
    cout << "Enter 1 for file path" << endl;
    cout << "Enter 2 for memory" << endl;
    cout << "Enter 3 for server:" << endl;
    cin >> x;
    string w, z;
    switch (x)
    {
    case 1:
        cout << "Enter the file path:" << endl;
        cin.ignore();
        getline(cin, w);
        obj.loadTexture(w);
        break;
    case 2:
        cout << "Enter memory location (width height):" << endl;
        cin >> a >> b;
        obj.loadTexture(a, b);
        break;
    case 3:
        cout << "Enter the server:" << endl;
        cin.ignore();
        getline(cin, z);
        cout << "Enter the port:" << endl;
        getline(cin, port);
        obj.loadTexture(z, port);
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}

