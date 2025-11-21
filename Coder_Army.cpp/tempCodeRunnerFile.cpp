

   for(j=1 ; j<=n ; j++)
   {
    for(i=1; i<=j ; i++)
    {
        cout<<"* ";
    }
    for(i=1; i<=2*n-2*j; i++)
    {
        cout<<"  ";
    }
    for(i=1; i<=j ; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
  
}