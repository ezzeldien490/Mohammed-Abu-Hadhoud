#include <iostream>

using namespace std;

string ReadString(string Message)
{
    string String;
    cout << Message << endl;
    getline(cin, String); cout << endl;

    return String;
}

string EncryptName(string Name)
{
    int NameLength = Name.length();
    string EncryptedName = "";

    for (int i = 0; i < NameLength; i++)
    {
        EncryptedName = EncryptedName + char(int(Name[i]) + 2);       
    }
    return EncryptedName;
}

string DecryptName(string Name)
{
    int NameLength = Name.length();
    string DecryptedName = "";

    for(int i = 0; i < NameLength; i++)
    {
        DecryptedName = DecryptedName + char(int(Name[i]) - 2);
    }

    return DecryptedName;
}

int main()
{
    string Name = ReadString("Enter your name?");
    string EncryptedName = EncryptName(Name);
    string DecryptedName = DecryptName(EncryptedName);

    cout << "Text Before Encryption: " << Name << endl
         << "Text After Encryption: " << EncryptedName << endl
         << "Text After Decryption: " << DecryptedName << endl;

         return 0;
}