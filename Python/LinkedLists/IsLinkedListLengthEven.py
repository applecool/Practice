#find if the length of the linked list is even or not?

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
    
    def recursiveReverseList(self) :
		self.reverseRecursive(self.head)
		
    def reverseRecursive(self, n) :
		if None != n:
			right = n.getNext()
			if self.head != n:
				n.setNext(self.head)
				self.head = n
			else:
				n.setNext(None)
			self.reverseRecursive(right)
			
    def printListFromEnd(self, list) :
    	if list == None: 
    		return
    	head = list
    	tail = list.getNext()
    	self.printListFromEnd(tail)
    	print head.getData(), 	

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
    
    def isLinkedListLengthEven(self):
        current = self.head
         
        while current != None and current.getNext() != None:
            current = current.getNext().getNext()  
	    
	if current == None:
		return 1
	return 0	

if __name__ == "__main__":
    linkedlst = LinkedList()
    linkedlst.insertAtEnd(1)
    linkedlst.insertAtEnd(2)
    linkedlst.insertAtEnd(3)
    linkedlst.insertAtEnd(4)
     
    linkedlst.printList()
    linkedlst.printListFromEnd(linkedlst.head)
    linkedlst.isLinkedListLengthEven()
