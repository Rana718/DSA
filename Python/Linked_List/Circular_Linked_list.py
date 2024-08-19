class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Circular_Linked_list:
    def __init__(self):
        self.Head = None
    
    def add(self, data):
        new_node = Node(data)
        if self.Head is None:
            self.Head = new_node
            new_node.next = self.Head
            return
        temp = self.Head
        while temp.next != self.Head:
            temp = temp.next
        temp.next = new_node
        new_node.next = self.Head
    
    # other all function are same a normal linked list
    
    def display(self):
        if self.Head is None:
            print("Your Linked list is empty")
            return
        temp = self.Head
        print(temp.data, end=" -> ")
        temp = temp.next
        while temp != self.Head:
            print(temp.data, end=" -> ")
            temp = temp.next
        print(temp.data, end=" -> continue")

if __name__=="__main__":
    l1 = Circular_Linked_list()
    l1.add(85)
    l1.add(4)
    l1.add(7)
    l1.add(3)
    l1.add(78)
    l1.display()
