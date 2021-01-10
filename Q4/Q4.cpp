//19000081//
#include<iostream>

using namespace std;


class bMoney
{
   private:
      float dollars;
   public:
      bMoney()
      {
         dollars = 0;
     
      }

      bMoney(float x)
      {
         dollars = x;
	  }

      float conversion(){
      	float a;
      	a=dollars/50.00;
      	return a;
      	
	  }
      
};

class sterling
{
   private:
      float pounds;
   public:
      sterling()
      {
         pounds = 0; 
      }

      sterling(float y)
      {
        pounds = y;
      }
   		
   	void operator=(bMoney b){
       pounds=b.conversion();
    }
    operator float()const{
       return pounds*50.00;
    }
    void display(){
        cout << "The final output for the given value in pounds is : " << pounds << endl;
    }
   
   
};

int main()
{
	float a=0;
	float b=0;
	int x;
	cout <<"Conversion of Dollar to pounds and vice versa" <<endl;
    cout <<"1.Convert Pounds to Dollars" <<endl;
    cout << "2.Convert Dollars to Pounds" <<endl;
    cin>>x;
   if(x==1){
        cout<<"Please enter pounds:";
        cin>>a;
        sterling S(a);
        b=S;
        cout<<"So the dollar value is equal to "<<b<<" dollars\n";
    }
    else{
        cout<<"Please enter dollars:";
        cin>>b;
        sterling S(a);
        bMoney B(b);
        S=B;
        S.display();
    }
	return 0;

}
