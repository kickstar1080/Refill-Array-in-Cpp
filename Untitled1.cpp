#include"iostream"


using namespace std;
	
int main(){
	//cheaking if system works
	cout << "hello world\n\n";
	
	//the size of array
	int a;
	cout << "enter the numbers = "<< endl;
	cin >>a;
	
	if (a > 1){
		//create array
		int numbers[a];
		cout << "the array is created\n";
		cout <<&numbers << endl;
		
		//user input fill the array
		for (int i = 0 ; i < a ;i++){
			cout << "enter the number = ";
			//filling the array using the method
			cin >> numbers[i];
			
		}	
		//printing the elements of array
		cout <<"the numbers of the array is =",&numbers[a]; 
		for(int i = 0; i< a ; i++){
			cout <<numbers[i]<<" ";
		}
	}
					
	
	
	//loop system
	return 0;
}