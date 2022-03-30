//INSERTION SORT

#include<iostream>
using namespace std;

void display(int *array, int size)
{
	for(int i=0;i<size;i++)
	cout<<array[i]<<" ";
}

void insertion_sort(int *array, int size)
{
	int key, j ;
	for(int i = 1;i<size;i++)
	{
		key = array[i];
		j=i;
		while(array[j-1]>key)  ///j>0 && 
		{
			array[j]=array[j-1];
			j--;
		}
		array[j]=key;
	}
}

int main()
{
	int n ;
	cout<<"ENTER THE ARRAY SIZE"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"ENTER THE "<<n<<" ELEMENTS FOR THE ARRAY"<<endl;

	for(int i =0;i<n;i++)
	cin>>a[i];
					cout<<endl<<endl;	

			cout<<"BEFORE"<<endl;	

	display(a,n);
			cout<<endl<<endl;	

	insertion_sort(a,n);
		cout<<"AFTER"<<endl;	

	display(a,n);
	return 0;
}
