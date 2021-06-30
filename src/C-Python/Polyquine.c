#if false
a="""
#endif
int main(){char*b="#if false%ca=%c%c%c%c#endif%cint main(){char*b=%c%s%c;printf(b,10,34,34,34,10,10,34,b,34,10,10,34,34,34,10,10,10,34,34,10,10);}%c#if false%c%c%c%c%cq=chr(34)%cn=chr(10)%cs=%c#if false%%ca=%%c%%c%%c%%s%%c%%c%%c%%cq=chr(34)%%cn=chr(10)%%cs=%%c%%s%%c%%cprint(s %%%% (n,q,q,q,a,q,q,q,n,n,n,q,s,q,n,n))%%c#endif%c%cprint(s %% (n,q,q,q,a,q,q,q,n,n,n,q,s,q,n,n))%c#endif";printf(b,10,34,34,34,10,10,34,b,34,10,10,34,34,34,10,10,10,34,34,10,10);}
#if false
"""
q=chr(34)
n=chr(10)
s="#if false%ca=%c%c%c%s%c%c%c%cq=chr(34)%cn=chr(10)%cs=%c%s%c%cprint(s %% (n,q,q,q,a,q,q,q,n,n,n,q,s,q,n,n))%c#endif"
print(s % (n,q,q,q,a,q,q,q,n,n,n,q,s,q,n,n))
#endif