class Queue:
    def __init__(self):
        self.queue = []
    
    def enqueue(self, item):
        self.queue.append(item)
    
    def dequeue(self):
        if len(self.queue) < 1:
            print("Queue is Empty")
        return self.queue.pop(0)
    
    def peek(self):
        if len(self.queue) < 1:
            print("Queue is Empty")
        print("your peek is: ",self.queue[0])
    
    def display(self):
        for ele in self.queue:
            print(ele,end=" ")
        print()
    


if __name__=="__main__":
    q = Queue()
    q.enqueue(50)
    q.enqueue(37)
    q.enqueue(19)
    q.enqueue(23)
    q.enqueue(41)
    print("your queue: ", end=" ")
    q.display()
    q.dequeue()
    print("your queue after  delete: ", end=" ")
    q.display()
    q.peek()
