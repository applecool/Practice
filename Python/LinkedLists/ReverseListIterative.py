#reverseiteration
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

    def setData(self, data):
        self.data = data

    def getData(self):
        return self.data

    def setNext(self, next):
        self.next = next

    def getNext(self):
        return self.next


class LinkedList:
    def __init__(self):
        self.head = None

    def isEmpty(self):
        return self.head == None

    def reverseList(self):
	last = None
	current = self.head

	while(current is not None):
		nextNode = current.getNext()
		current.setNext(last)
		last = current
		current = nextNode

	self.head = last

    def insertAtEnd(self, item):
        current = self.head
        if  current == None:
            node = Node(item)
            node.setNext(None)
            self.head = node
            return

        while current.getNext() != None:
            current = current.getNext()

        node = Node(item)
        current.setNext(node)

    def printList(self):
        current = self.head

        while current != None:
            print current.getData()
            current = current.getNext()



if __name__ == "__main__":
    linkedlst = LinkedList()
    linkedlst.insertAtEnd(1)
    linkedlst.insertAtEnd(2)
    linkedlst.insertAtEnd(3)
    linkedlst.insertAtEnd(4)

    linkedlst.printList()
    linkedlst.reverseList()
    linkedlst.printList()
