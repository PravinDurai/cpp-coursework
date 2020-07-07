
void validate(List* node)
{
	List* temp=new List();
	temp=node;
	while(temp!=NULL)
	{
		if(temp->getNext()->getData()%2==1)
		{
		     temp=erase(temp);
		}
		temp=temp->getNext();
	}
}

List* erase(List* node)
{
	node->setNext(node->getNext()->getNext());
	return(node);
}


main()
{
	List* node;
	//get the input from the user and creates the nodes
	node=getData();
	//validates for odd number and call the erase function if odd number
	validate();
}