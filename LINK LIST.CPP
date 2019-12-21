 #include<iostream.h>
 #include<conio.h>
 struct list
 {
  int info;
  list*next;
  };
   void main()
   {
    clrscr();
    list*start,*ptr,*nw;
    start=new list;
    cout<<"Enter number to create first node";
    cin>>start->info;
    start->next=NULL;
    ptr=start;
    while(ptr->info!=-1)
    {
     nw=new list;
     cout<<"Enter the number to continue list:";
     cin>>nw->info;
     nw->next=NULL;
     ptr->next=nw;
     ptr=nw;
     }
     for(ptr=start;ptr!=NULL;ptr=ptr->next);
     if(ptr->info==-1)
     return;
     cout<<ptr->info<<'\t';
     delete start; delete ptr; delete nw;
     getch();
     }