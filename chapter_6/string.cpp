// string相关操作
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1="abc", str2="xyz", str3;

    // +=
    str3 = str1+str2;
    str1 += str2;
    cout<<str3<<endl;
    cout<<str1<<endl;

    // length()/ size()
    cout<<str1.length()<<endl;
    cout<<str1.size()<<endl;

    //insert
    str2="opq";
    str1.insert(3, str2);
    cout<<str1<<endl;

    str1.insert(str1.begin()+3, str2.begin(), str2.end());
    cout<<str1<<endl;

//    // erase()
    str1.erase(str1.begin()+3);
    cout<<str1<<endl;
//    str1.erase(3,2); //erase(pose,length)
//    cout<<str1<<endl;


    //clear
    str1.clear();
    cout<<str1.length()<<endl;

    // substr
    string str="abcdefg";
    cout << str.substr(0,3) << endl;

    //string::npos
    if(string::npos == -1){
        cout<<"-1 is true."<<endl;
    }
    if(string::npos == 4294967295){
        cout<<"4 is also true"<<endl;
    }


    // find()
    str = "Thank you for your smile.";
    str2 = "you";
    str3 = "me";
    if(str.find(str2) != string::npos){
        cout<<str.find(str2)<<endl;
    }
    if(str.find(str2,7) != string::npos){
        cout<<str.find(str2,7)<<endl;
    }
    if(str.find(str3) != string::npos){
        cout<<str.find(str3)<<endl;
    }else{
        cout<<"NO postion!"<<endl;
    }

    // replace()
    str="Maybe you will turn around.";
    str2="will not";
    str3="surely";
    cout<<str.replace(10,2,str2) <<endl;
    cout<<str.replace(str.begin(), str.begin()+5, str3)<<endl;

    return 0;
}