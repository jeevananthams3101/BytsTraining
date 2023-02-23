//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


// } Driver Code Ends
//User function Template for C


//Function is to check whether two strings are anagram of each other or not.
bool isAnagram(char a[], char b[]){
    
    int freq1[26]={0};
    int freq2[26]={0};
    
    for(int i=0;i<strlen(a);i++)
        freq1[a[i]-'a']++;
    for(int i=0;i<strlen(b);i++)
        freq2[b[i]-'a']++;
    
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i])
            return false;
    }
    return true;
}


//{ Driver Code Starts.

int main() {
    
    int t;

    scanf("%d", &t);

    while(t--){
        char c[10000], d[10000];

        scanf("%s%s", &c, &d);

        if(isAnagram(c, d)) printf("YES\n");
        else  printf("NO\n");
    }

}

// } Driver Code Ends