#include<iostream>
using namespace std;

class Stack_for_Array
{
	int size,top;
	int *arr;
	
	public:
		Stack_for_Array(int size)
		{
			this->size=size;
			this->top=-1;
			arr=new int(size);
		}
		
		void Push(int value)
		{
			if(top==size-1)
			{
				cout<<"Stack over loading ";
				return;
			}
			top++;
			arr[top]=value;
		}
		
		int Pop()
		{
			if(top==-1)
			{
				cout<<"Stack Empty ";
			}
			else
			{
				int temp=arr[top];
				top--;
			}
			
		}
		
		int Top()
		{
			if(top==-1)
			{
				cout<<"Stack Empty ";	
			}
			else{
				return arr[top];
			}
			
		}
		
		bool is_empty()
		{
			if(top==-1)
			{
				return true;
			}
			else false;
		}
		
		void show()
		{
			int t=top;
			if(t==-1)
			{
				cout<<"Stack Empty ";
				return;
			}
			while(t!=-1)
			{
				cout<<arr[t--]<<" ";
				
			}
		}
};
int main()
{
	Stack_for_Array st(5);
	st.Push(1);
	st.Push(2);
	st.Push(3);
	st.show();
	cout<<"Before Pop function "<<endl;
	st.Pop();
	cout<<"After POP function ";
	st.show();
	cout<<"Top element is "<<st.Top()<<endl;
	cout<<"Calling EmptyFunction "<<st.is_empty();
	
}
