#include<iostream>
using namespace std;

bool ck(string id)
{
    bool a=true;
    for(int i=0;i<=16;i++)
    {
        if(id[i]<'0' || id[i]>'9')a=false;
    }
    return a;
}

char solve(string id)
{
    int w[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char out[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int sum=0;
    for(int i=0;i<=16;i++)
    {
        sum+=(id[i]-'0')*w[i];
    }
    return out[sum%11];
}

void calc()
{
    string id;
    cout<<"请输入身份证号码前17位数字:"<<'\n';
    cin>>id;
    bool right=ck(id);
    while((right!=true) || (id.length()!=17))
    {
        cout<<"输入错误,请重新输入:"<<'\n';
        cin>>id;
        right=ck(id);
    }
    cout<<"校验码为"<<solve(id);
    system("pause>nul");
}

void check()
{
    string id;
    cout<<"请输入身份证号码:"<<'\n';
    cin>>id;
    bool right=ck(id);
    while((right!=true) || (id.length()!=18))
    {
        cout<<"输入错误,请重新输入:"<<'\n';
        cin>>id;
        right=ck(id);
    }
    char a=solve(id);
    if(a==id[17])cout<<"该身份证号正确";
    else cout<<"该身份证号不正确,校验码应为"<<a;
    system("pause>nul");
}

int main()
{
    cout<<"计算校验码(输入1)或检验身份证号(输入2),请输入:"<<'\n';
    string operation;
    while(true)
    {
        cin>>operation;
        if(operation=="1")
        {
            calc();
            return 0;
        }
        else if(operation=="2")
        {
            check();
            return 0;
        }
        else
        {
            cout<<"输入错误,请输入1或2:"<<'\n';
        }
    }
}
