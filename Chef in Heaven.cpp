// https://www.codechef.com/LTIME95C/problems/CCHEAVEN



void solve() {
    
     int n;
     cin >> n;
     string s;
     cin >> s;

     int s1 = 0 ,s2 = 0,flag = 0;

     for(int i = 0 ; i < n; i++){
        if(s[i] == '0'){
            s2++;
        }else{
            s1++;
        }
        if(s1 >= s2){
            flag = 1;
            break;
        }
     }
     
     if(flag == 1){
        cout<<"YES" <<"\n";
     }else{
        cout <<"NO" <<"\n";
     }
   
}
