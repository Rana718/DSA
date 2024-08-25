class DEQueue:
    def __init__(self):
        self.queue = []
    
    def isEmpty(self):
        return len(self.queue) == 0
    
    def enqueue_end(self, val):
        self.queue.append(val)
    
    def enqueue_start(self, val):
        self.queue.insert(0, val)
    
    def dequeue_start(self):
        if self.isEmpty():
            print("Queue is Empty")
            return
        return self.queue.pop(0)
    
    def dequeue_end(self):
        if self.isEmpty():
            print("Queue is Empty")
            return
        return self.queue.pop()
    
    def display(self):
        for ele in self.queue:
            print(ele, end=" ")
        print(".")
    

if __name__=="__main__":
    q = DEQueue()
    q.enqueue_end(50)
    q.enqueue_end(41)
    q.enqueue_end(10)
    q.enqueue_start(78)
    q.enqueue_start(89)
    q.enqueue_start(95)

    print("your DEQueue: ", end=" ")
    q.display()

    q.dequeue_start()
    print("after removing 1st element in the DEQueue: ", end=" ")
    q.display()

    q.dequeue_end()
    print("after removing the 2nd element in the DEQueue: ", end=" ")
    q.display()