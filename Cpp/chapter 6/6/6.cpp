#include <iostream>
using namespace std;
struct wok {
    int num;
    int age;
    char gdr;
    wok* next;
};
wok *head = nullptr;

wok * mker(int n)
{
    int i;
    head = nullptr;
    wok* p=nullptr,*s=nullptr;
    for (i = 1; i <= n; i++)
    {
       p= new wok;
       cin >> p->num;
       cin >> p->age;
       cin >> p->gdr;
       if (head==nullptr)
        {
           p->next = nullptr;
           head = p;
           s = head;
       }
       else
       {
           s->next = p;
           p->next = nullptr;
           s = p;
       }
    }
    return head;
}
void out(wok*& a,int n)
{
    int i;
    wok* b=a;
    while (b!=nullptr)
    {
       
        cout << b->num<< " ";
        cout<< b->age << " ";
        cout << b->gdr << endl;
        b = b->next;

    }
}
void cnt(wok* a, int n)
{
    int male=0, fe=0;
    int i;
    wok* b=a;
    while (b!=nullptr)
    {
        if (b->gdr == 'M')
            male++;
        else
            fe++;
        b = b->next;
    }
    cout << male << " " << fe << endl;
}
void insrt(wok*& a, int n)
{
    wok*   s=a;
    int i;
    wok* p = new wok;
    cin >> p->num >> p->age >> p->gdr;

    if (a == nullptr)
    {
        p->next = nullptr;
        a = p;
        return;
    }
    while(s->next!=nullptr)
    {
    
        s = s->next;
    }
   
    s->next = p;
    p->next = nullptr;
}
void delet(wok*& a, int n)
{
    if (a == nullptr)
        return;
    wok* p; wok* s;
    s = a;
    p = a->next;
    if (n == s->num)
    {
        a = a->next;
        delete s;
    }
    else
    {
        while (p != nullptr&&p->num != n)
        {
            p = p->next;
            s = s->next;
        }
        if (p == nullptr)
            return;
        if (p->next == nullptr)
        {
            delete p;
            s->next = nullptr;
        }
        else {
            s->next = p->next;
            delete p;
        }
    }
    }
void ret(wok*(& a), int n)
{
    wok* rhead = nullptr;
    wok* rtail = nullptr;
    while ((a != nullptr) && ((a->gdr == 'M' && a->age > 60) ||
        (a->gdr == 'F' && a->age > 55)))
    {
        wok* temp = a;
        a = a->next;
        temp->next = nullptr;
        if (rhead == nullptr)
        {
            rhead = temp;
            rtail = temp;

        }
        else {
            rtail->next = temp;
            rtail = temp;
        }
    }
    wok* pre = a;
    if (pre != nullptr)
    {
        wok* cur = pre->next;
        while (cur != nullptr)
        {
            if ((cur->gdr == 'M' && cur->age > 60) ||
                (cur->gdr == 'F' && cur->age > 55))
            {
                pre->next = cur->next;
                cur->next = nullptr;
                if (rhead == nullptr)
                {
                    rhead = cur;
                    rtail = cur;
                    cur = pre->next;
                }
                else {
                    rtail->next = cur;
                    rtail = cur;
                    cur = pre->next;
                }
            }
            else {
                pre = cur;
                cur = cur->next;
            }

        }
    }
    for (wok* p = rhead; p != nullptr; p = p->next)
    {
        cout<< p->num << " " << p->age << " " << p->gdr << endl;
}
}
int main()
{
    int n;
    string optin;
    while (cin >> n)
    {
        head = mker(n);
        while (cin >> optin && optin != "end")
        {
            int pre=0;
            int tobe_delt;
            if (optin == "output")
                pre = 1;
            if (optin == "count_gender")
                pre = 2;
            if (optin == "insert")
                pre = 3;
            if (optin == "delete")
                pre = 4;
            if (optin == "retire")
                pre = 5;
            if (optin == "delete")
                cin >> tobe_delt;
            switch (pre)
            {
            case 1:
                out(head, n);
                break;
            case 2:
                cnt(head, n);
                break;
            case 3:
                insrt(head, n);
                break;
            case 4:
                delet(head, tobe_delt);
                break;
            case 5:
                ret(head, n);
                break;

            }
        }
        continue;
    }
}