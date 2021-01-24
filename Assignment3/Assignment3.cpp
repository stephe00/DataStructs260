// Stephen Oium 
// 1.23.2021
// CS 260 
// Link Queue 

struct Node
{
	int data;

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
