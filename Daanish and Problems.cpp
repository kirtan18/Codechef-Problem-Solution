signed main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
     
    int T;
    cin >> T;
    while(T--){
    
    int arr[11] = {0};

    for (int i = 1; i < 11; ++i)
    {
      cin>>arr[i];
    }

    int n;
    cin>>n;

    int i = 10;

    while(n)
    {
      if(arr[i] >= n)
      {
        arr[i] = arr[i] - n;
        n = 0;
        break;
      }
      else
      {
        n = n - arr[i];
        arr[i] = 0;
      }

      if(n <= 0)
      {
        break;
      }

      i--;
    }

    while(arr[i] == 0)
    {
      i--;
    }

    cout<<i<<endl;
    }  
     return 0;
}
