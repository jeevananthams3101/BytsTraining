int addDigits(int num){
    int temp=num,sum=0;
    while(temp>9)
    {
        if(num==0)
        {
            sum=0;
            num=temp;
        }
        sum=sum+num%10;
        num/=10;
        if(num==0)
            temp=sum;
    }
    return temp;
}