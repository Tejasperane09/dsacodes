#include<iostream>
#include<string.h>
using namespace std;
struct node
{
 long int key;
 char name[20];
}Hash [10];

class hash
{      

public:

      hash()
          {
            for(int i=0;i<10;i++)
         	{
                  Hash[i].key=0;
                  strcpy(Hash[i].name,"NULL");
				
		}




          }
      void insert();
      int  search(long int x);
      void display();
      void Delate(long int y);
};



int hash::search(long int x)
        {
           int flag=0;
            for(int i=0;i<10;i++)
		{
                  if(Hash[i].key==x)
			{
			flag=1;
                        cout<<"your number found at index"<<i<<endl;
			return i;	
			}		



		}       

            if(flag==0)
		{
		 cout<<"key not found";
                 return -1;	
		}
     
  


        }

void hash::Delate(long int x)
     {
       int index=search(x);
        if(index==-1)
          cout<<"Element is not found";
        else
          { cout<<"delating the number"<<Hash[index].key<<endl;
            Hash[index].key=0;
            strcpy(Hash[index].name,"Null");       

          }
        


     }


void hash::display()
     {
            cout<<"index   Number   Name  "<<endl;
       for(int i=0;i<10;i++)
          {
            
              cout<<i<<"    ---->"<<Hash[i].key<<"---->"<<Hash[i].name<<endl;



          }
     }

void hash::insert()
{
   long int x;
   char arr[20];
    int count=0;
    if(count > 10)
     {
    cout<<"hash table is full";
     }
    else
     {
       cout<<"Enter Mobile number"<<endl;
       cin>>x;
       cout<<"Enter Name";
       cin>>arr;
       int index=x%10;
  
          if(Hash[index].key==0)
              {
                  Hash[index].key=x;
                  strcpy(Hash[index].name,arr);
              }
          else if(index==Hash[index].key%10)
              {
               
                 for(int i=index+1;i<10;i++)
                       {
                         if(Hash[i].key==0)
                           {
                             Hash[i].key=x;
                             strcpy(Hash[i].name,arr);
                           }
                         
 
                       }
                  if(index==9)
                     {
                         for(int i=0;i<index;i++)
                            {
                                if(Hash[i].key==0)
                                  {
                                     Hash[i].key=x;
                                     strcpy(Hash[i].name,arr);
                                  }
                         
 
                            }
                      }


	      }

     }


}

int main()
{ hash h;
  int choice;
  long int x;
  long int y;
  do
  {
    cout<<"1.Insert element\n 2.display \n3.search\n 4.Delate\n";
    cout<<"enter your choice";
    cin>>choice;
    switch(choice)
       {
         case 1:h.insert();
                break;
         
         case 2:h.display();
                break;
         
         case 3:cout<<"enter Number";
                cin>>x;
                h.search(x);
                break;
         
         case 4:cout<<"enter Number";
                cin>>y;
                h.Delate(y);
                break;
       }

 }while(choice!=0);


return 0;
}
