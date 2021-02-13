#include <iostream>

using namespace std;

 bool ok=true;
 bool validate(string s){

     for(int i=0;i<s.length();i++)
     {
         if(s[i]!=48)
         ok=false;

         if(!((s[i]>=48 && s[i]<=57)))
         return false;
     }
     return true;
 }
 void numbertoword(string number){

     if(number.length()>20)
     {
         cout<<"invalid number"<<endl;
         return;
     }
     string ones[]={" ","one", "two", "three", "four", "five", "six", "seven", "eight", "nine" ,"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {" ", " ", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string unit[]={" "," "," "," ","thousands","thousands","lakhs","lakhs","crores","crores","arab","arab","kharab","kharab","neel","neel","padma","padma","shankh","shankh","maha-sankh"};

    if(number.length()==0)
    {cout<<"Please Provide number that contain atleast one digit!!!"<<endl;
        return;
    }
    ok=true;

    string ans=" ";
    int singleDigit,doubleDigit,i;


    if(validate(number)){

        if(ok)
        cout<<"zero"<<endl;
        else{
    int numberlength = number.length();
    int counter = numberlength;

    for(i=0;i<(numberlength-3);){

        if(number[i]=='0')
        {
            i++;
            continue;

        }
    if(counter%2==0){
        singleDigit = (((int)(number[i]))-48);
        ans+=(ones[singleDigit]+" "+unit[counter]+" ");
        i++;
        counter--;
    }else{
        doubleDigit = (((int)(number[i]))-48);

        doubleDigit=(doubleDigit*10)+(((int)(number[i+1]))-48);


        if(doubleDigit<20)
        ans+=(ones[doubleDigit]+" ");
        else
        ans+=(tens[doubleDigit/10]+" "+ones[doubleDigit%10]+" ");
        ans+=unit[counter]+" ";
        i+=2;

        counter-=2;

    }

    }
    if(number.length()==1)
    {
        singleDigit = (((int)(number[0]))-48);
        if(singleDigit!=0)
        ans=ones[singleDigit];
        else
        ans="zero";

    }else if(number.length()==2)
    {
        doubleDigit = (((int)(number[0]))-48);

        doubleDigit=(doubleDigit*10)+(((int)(number[1]))-48);
        if(doubleDigit<20)
        ans+=(ones[doubleDigit]+" ");
        else
        ans+=(tens[doubleDigit/10]+" "+ones[doubleDigit%10]+" ");
        //ans+=unit[i]+" ";

    }else{

        singleDigit = (((int)(number[i]))-48);
        if(singleDigit!=0)
        ans+=(ones[singleDigit]+" "+"hundred ");
        i++;


        doubleDigit = (((int)(number[i]))-48);

        doubleDigit=(doubleDigit*10)+(((int)(number[i+1]))-48);


        if(doubleDigit<20)
        ans+=(ones[doubleDigit]+" ");
        else
        ans+=(tens[doubleDigit/10]+" "+ones[doubleDigit%10]+" ");
        //ans+=unit[i]+" ";
    }

    cout<<ans<<endl;}}
    else
    cout<<"enter valid number"<<endl;


 }
int main()
{


      string number;
        cout<<"Please Enter a Number :";

        cin>>number;
        numbertoword(number);



    return 0;
}
