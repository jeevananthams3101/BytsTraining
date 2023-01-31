int hammingDistance(int x, int y){
    int ham=0;
    while(x>0 || y>0)
    {
        ham+=((x%2)^(y%2));
        x/=2;y/=2;
    }
    return ham;
    
}