https://www.codechef.com/LTIME95C/problems/EQUINOX



void solve() {
   
   long long n , a , b;
   cin >> n >> a >> b;
   long long pl1 = 0;
   long long pl2 = 0;
    
   for(long long i = 0 ; i < n ; i++){
      string s;
      cin >> s;
      if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X'){
         pl1++;
      }else{
        pl2++;
      }

   }

   long long p = pl1 * a;
   long long q = pl2 * b;


   if(p == q){
      cout <<"DRAW"<<"\n";    
   }
   else if(q > p){
     cout <<"ANURADHA"<<"\n";
   }
   else{
     cout <<"SARTHAK"<<"\n";
   }


}
