bool isUgly(int n){
    if(n<=0)
        return false;
    int flag=0;
    while(n!=1)
    {
        if(n%5==0)
            n/=5;
        else if(n%3==0)
            n/=3;
        else if(n%2==0)
            n/=2;
        else
        {
            flag++;
            break;
        }
    }
    if(flag==0)
        return true;
    else
        return false;
}