int firstUniqChar(char * s){
    int len=strlen(s);
    int freq[26]={0};
    for(int i=0;i<len;i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=0;i<len;i++)
    {
        if(freq[s[i]-'a']==1)
        {
            return i;
        }
    }
    return -1;
}