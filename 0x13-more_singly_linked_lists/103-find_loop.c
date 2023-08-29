/**
 * find_listint_loop - Finds the starting node of a loop in a linked list
 * @head: Pointer to the head of the linked list
 * Return: Address of the starting node of the loop, or NULL if no loop exists
 */

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head;
    listint_t *fast = head;

    if (!head)
        return (NULL);

    while (slow && fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return (fast);
        }
    }

    return (NULL);
}
