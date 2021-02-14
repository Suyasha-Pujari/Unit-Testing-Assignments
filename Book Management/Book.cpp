#include <iostream>

using namespace std;

struct node {
  string bookName;
  struct node *next;
};

bool validate(string str){

    if(str.length()==0)
    return false;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==32)
        continue;
        if(!((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)))
        return false;
    }
    return true;
}

struct node *start = NULL;
int count = 0;
void create(string bookName)
{
    if(validate(bookName)){

    struct node *q,*newNode;

    count++;
    newNode=(struct node *)malloc(sizeof(struct node));


    newNode->bookName = bookName;
    newNode->next=NULL;

    if(start==NULL)
    {
        start=newNode;
    }
    else
    {
        q=start;

        while(q->next!=NULL)
        q=q->next;

        q->next=newNode;

    }
    cout<<"Book Added Successfully!!!"<<endl;}
    else{
    cout<<"Please Provide Valid Input "<<endl;

    }
}
void Insert(string bname) {


    if(validate(bname))
    {
  struct node *t, *temp;

  t = (struct node*)malloc(sizeof(struct node));
  t->bookName= bname;
  count++;


  if (start == NULL) {
    start = t;
    start->next = NULL;
    cout<<"Book Added Successfully!!"<<endl;
    return;
  }

  temp = start;

  while (temp->next != NULL)
    temp = temp->next;

  temp->next = t;
  t->next   = NULL;

  cout<<"Book Added Successfully!!"<<endl;}
  else{

      cout<<"Please Provide Valid Input"<<endl;

  }
}

void traverse(){
  struct node *t;

  t = start;

  if (t == NULL) {
    cout<<"Sorry Book is not available!!!\n";
    return;
  }

  cout<<"Total number of "<<count<<" books are available"<<endl;

  while (t->next != NULL) {
   cout<<t->bookName<<endl;
    t = t->next;
  }
  cout<<t->bookName<<endl;
}

void searchBook(string bname)
{

    if(validate(bname)){
    struct node *q,*tmp;

    q=start;

    if(start == NULL)
        {
            cout<<"Book is not available!!!"<<endl;
            return;
        }
    while(q!=NULL)
    {
        if(q->bookName==bname)
        {
            cout<<"Book is available "<<bname<<endl;
            break;
        }
        else
            q=q->next;
    }
    if(q==NULL)
    {
        cout<<"Book is not available !!"<<endl;
    }}
    else
    cout<<"Please Provide Valid Input"<<endl;
}

int main()
{


    string data;
    bool ok=true;

        int i;

         while(ok)
    {
        cout<<"1) Create  \t 2)Search \t 3)Insert   \t 4)Display \t 5) exit \n";
        cout<<"Enter your Choice :";

        cin>>i;


    if (i == 1) {
            cout<<"Enter Name of Book : \n";
      cin>>data;
      create(data);

    }
    else if (i == 3) {
      cout<<"Enter Name of Book : \n";
      cin>>data;
      Insert(data);
    }
    else if (i == 2){
            cout<<"Enter Name of Book : \n";
      cin>>data;
      searchBook(data);
      }
    else if (i == 4)
      traverse();
    else if (i==5)
     ok=false;
     else
      cout<<"Please Provide Valid Input!!!\n";
  }

  return 0;
}
