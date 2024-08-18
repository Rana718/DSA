class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Linked:
    def __init__(self):
        self.Head = None
    
    def app_start(self, data):
        new_node = Node(data)
        if self.Head is None:
            self.Head = new_node
            return
        temp = self.Head
        self.Head = new_node
        new_node.next = temp
    
    def app_key(self, key, data):
        prev = self.Head
        while prev is not None:
            if prev.data == key:
                new_node = Node(data)
                temp = prev.next
                prev.next = new_node
                new_node.next = temp
                return
            prev = prev.next
        print("Your key is out of range")
    
    def app_end(self, data):
        new_node = Node(data)
        if self.Head is None:
            self.Head = new_node
            return
        temp = self.Head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def del_start(self):
        if self.Head is None:
            print("Linked list is Empty")
            return
        self.Head = self.Head.next

    def del_key(self, key):
        if self.Head is None:
            print("Linked list is Empty")
            return
        temp = self.Head
        while temp.next is not None:
            if temp.next.data == key:
                temp.next = temp.next.next 
                return
            temp = temp.next
        print("not found key")

    def del_end(self):
        if self.Head is None:
            print("Linked list is Empty")
            return
        temp = self.Head
        while temp.next.next is not None:
            temp = temp.next
        temp.next = None

    def display(self):
        if self.Head is None:
            print("Your Linked is Empty")
        temp = self.Head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")
    

if __name__=="__main__":
    l1 = Linked()
    l1.app_end(50)
    l1.app_end(41)
    l1.app_end(19)
    l1.app_start(4)
    l1.app_end(85)
    l1.app_key(19, 599)
    l1.display()

    l1.del_start()
    l1.del_key(19)
    l1.del_end()
    l1.display()



