// Stephen Oium 
// 1.23.2021
// CS 260 
// Link Queue 

public:
	//  queue(int size = SIZE);    	// constructor
	// ~queue();                  	// destructor

	void dequeue();
void enqueue(int x);
int peek();
int size();
//  bool isEmpty();
// bool isFull();
};

struct Node
{
	int data;
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;

	Node * link;
};

Node *front = NULL;
Node *rear = NULL;

bool isempty()
{
	if (front == NULL && rear = NULL)
		return true;
	else
	{
		return false;
	}
}

int queue::peek()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	return arr[front];
}

void enqueue(int value)
{
	Node *abc = new Node();
	abc->data = value;
	abc->link = NULL;

	if (front == NULL)
	{
		front = abc;
		rear;
		abc;

	}
	else
}

rear->link = abc;
rear = abc;
}

void dequeue()
	{
		if (isempty())
			cout << "Queue is empty.";
		else
		if (front == rear)
		{
			free(front);
			front = rear = NULL;

		}
		else
		{
			Node *abc = front;
			front = front->link;
			free(abc);
		}

		// show front 

		void showfront()
		{
			if (isempty())
				cout << "Queue is empty.";
			else
				cout << front->data;
		}

		void displayQueue()
		{
			if (isempty())
				cout << "Queue is empty.";
			else
			{
				Node *abc = front;
				while (abc != NULL)
				{
					cout << abc->data << " ";
					abc = abc->link;
				}
			}
		}
