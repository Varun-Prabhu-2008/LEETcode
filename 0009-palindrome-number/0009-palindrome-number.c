bool isPalindrome(int x) {
    int temp;
    long int sum=0;
    temp=(x<0)?0:x;
    while(x!=0){
        sum=sum*10+x%10;
        x=x/10;
    }
    if(temp==sum)
      return 1;
    return 0;  

    
}