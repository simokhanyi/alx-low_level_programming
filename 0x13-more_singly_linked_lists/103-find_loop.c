/**
 * find_listint_loop - Finds the starting node of a loop in a linked list
 * @head: Pointer to the head of the linked list
 * Return: Address of the starting node of the loop, or NULL if no loop exists
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL || head->next == NULL)
		return (NULL);

	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{

	slow = slow->next;
	fast = fast->next->next;

	if (slow == fast)
	{
		slow = head;

		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}

		return (slow);
	}

	return (NULL);
}
