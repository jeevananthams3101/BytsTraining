bool isPalindrome(char * s){
 int len=strlen(s);
 if(len==0) return true;
 int start=0;
 int last=len-1;
 while(start<=last)
 {
     if (!(((s[start]>='A' && s[start]<='Z') || (s[start]>='a' && s[start]<='z')) || (s[start]>='0' && s[start]<='9')))
     start+=1;
     else if (!(((s[last]>='A' && s[last]<='Z') || (s[last]>='a' && s[last]<='z')) || (s[last]>='0' && s[last]<='9')))
     last-=1;
     else{
         if(tolower(s[start])!=tolower(s[last]))
         {
             return false;
         }
         start+=1;
         last-=1;
     }
 }
 return true;
}