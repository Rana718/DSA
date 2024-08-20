class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

class Double_Linked:
    def __init__(self):
        self.Head = None
    
    def append(self, data):
        new_node = Node(data)
        if self.Head is None:
            self.Head = new_node
            return
        last = self.Head
        while last.next:
            last = last.next
        last.next = new_node
        new_node.prev = last
    
    def prepend(self, data):
        new_node = Node(data)
        if not self.Head:
            self.Head = new_node
            return
        new_node.next = self.Head
        self.Head.prev = new_node
        self.Head = new_node
    
    def delete(self):
        if self.Head is None:
            print("Your Linked list is empty")
            return
        temp = self.Head
        if temp.next is None:
            self.Head = None
            return
        while temp.next is not None:
            temp = temp.next
        temp.prev.next = None
        
    
    def display(self):
        if self.Head is None:
            print("Your Linked list is empty")
            return
        temp = self.Head
        while temp is not None:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")
    def print_backward(self):
        current = self.Head
        if not current:
            return
        
        while current.next:
            current = current.next
        
        while current:
            print(current.data, end=' -> ')
            current = current.prev
        print("None")

    

if __name__=="__main__":
    l1 = Double_Linked()
    l1.append(48)
    l1.append(89)

    l1.prepend(95)
    l1.append(67)
    l1.append(15)
    l1.display()
    print("after delete the node")
    l1.delete()
    l1.display()

    l1.print_backward()

        
        