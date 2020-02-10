#include <bits/stdc++.h> 
using namespace std;  
void perm(char* s ,int l1, int l2)  
{  
    
    if (l1 == l2)  
        cout<<s<<endl;  
    else
    {  
        
        for (int j = l1; j <= l2; j++)  
        {  
  
             
            swap(s[l1], s[j]);  
  
            
            perm(s, l1+1, l2);  
  
            
            swap(s[l1], s[j]);  
        }  
    }  
}  
    
int main()  
{  
    int ch=0; int a=97;
    char str[40];
    cout<<"\n Enter the no. of characters.(<=26)\n";
    cin>>ch;
    for(int i=0;i<ch;i++)
	{
	  str[i]=a;
	    a++;
	  }  
    int n= ch;
    perm(str, 0, n-1);  
    return 0;  
}  
  
