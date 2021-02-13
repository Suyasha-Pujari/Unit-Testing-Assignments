#include<iostream>

using namespace std;
void calculate(int r1,int r2,int c1,int c2){
int i, j, arr1[100][100],
              arr2[100][100],
              arr3[100][100];


              if(r1 <=0 || r2 <=0|| c1<=0 || c2<=0 )
                cout<<"\n Input is Invalid!! Please provide Positive inputs"<<endl;
                else if(r1 > 1000 || r2 >1000 || c1>1000 || c2>1000)
                    cout<<"\n please provide valid range!!! ";
              else {

 cout<<"\n Enter Elements of First Matrix :  \n";

    
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"\nEnter Elements of Second matrix :  ";

   
    for(i = 0; i < r2; i++)
        {
        for(j = 0; j < c2; j++)
        {
            cin>>arr2[i][j];
        }
    }

    printf("\n Multiplication of First and Second Matrix = ");

    
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            arr3[i][j] = 0;
             for(int k = 0; k < c1; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }

        printf("\n");
    }


    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
              }
}
int main()
{
    cout<<"Unit Testing";
    
    		
        cout<<"\n Test Case 1 : Enter 1st matrix of 3 rows and 2 column and 2nd matrix of 2 rows and 3 columns";
    		calculate(3,2,2,3);
    		
    		
    		
    		cout<<"\n Test Case 2 : Negative Inputs";
    		calculate(-4,-3,7, 2);
            
    
    		cout<<"\n Test Case 3 : Rows Greater than 1000";
    		calculate(1604,5,15, 14);  
    return 0;
}
