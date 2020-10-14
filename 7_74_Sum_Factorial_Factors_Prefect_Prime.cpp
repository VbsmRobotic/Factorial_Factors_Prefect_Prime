#include<iostream>

using namespace std ;



int SUM(int a)
{    
    int sum = 0 ;  

    for(int i=0; i<=a; i++)
    {         
         sum += i ;
    }
    cout<<"Summation of " << a << " numbers is equaled = " << sum << endl ;      
    return 0 ;
}

int FACTORIAL(int b)
{
    int mul = 1 ;

    for (int j=b; j > 1; j--)
    {
        
        mul *= j ;         
    }
    cout<< b << "! is equaled = " << mul << endl ;      
    return 0 ;
}

int FACTOR(int c)
{
    int mod ;

    for(int i = 1; i <= c; i++ )
    {
        mod = (c % i) ;       

        if(mod != 0)
        {
            cout << i << " is Not factor of " << c << endl ;

        }else
        {
            cout << i << " is a factor of " << c << endl ;

        } 
    }

    return 0 ;
}

int PREFECT(int d)
{
    int mod, Summ = 0 ;

    for (int i = 1 ; i < d ; i++)
    {
        mod = d % i ; 
        if(mod == 0)
        {
            cout << i << endl ;
            Summ += i ;        
            
        }
    }
    
    if(Summ == d)
    {
        cout << d << " is a prefect number" << endl ;
    }else
    {
        cout << d << " is Not a prefect number" << endl ;
    }
}

int PRIME(int e)
{
    int mod ;    
    int PRIME_sum = 0 ;
    
    for(int i = 1 ; i <= e ; i++)
    {
        mod = e % i ;

        if (mod == 0)
        {            
            PRIME_sum += i ;            
        }
        
    }
    
    // cout << "PRIME_SUM = " << PRIME_sum << endl ;  

    if (PRIME_sum == e+1)
    {
        cout << e << " is a Prime Number" << endl ;
    }else
    {
        cout << e << " is Not a Prime Number" << endl ;
    }
    
    
    
}
    
          


int main()
{
    int x ;
    cout << "Enter one number for summation: " << endl ;
    cin >> x ;
    SUM(x) ;   
    FACTORIAL(x) ;
    FACTOR(x) ; 
    PREFECT(x) ;
    PRIME(x) ; 
}

   
    