from time import time

# FUNC


class CQ:
    def __init__(self, max):
        self.max = max
        self.queue = []
        self.front = -1
        self.rear = -1

    def enqueue(self, num):
        if (self.rear+1) % self.max == self.front:
            print("FULL")
        else:
            if self.front == -1:
                self.front = self.front+1
            self.rear = (self.rear+1) % self.max
        self.queue.append(num)

    def dequeue(self):
        if self.front == self.rear:
            print("EMPTY")
            self.front = -1
            self.rear = -1
            self.queue.clear()
        else:
            print("ELEMENT POPPED", self.queue[self.front])
            self.front = (self.front+1) % self.max

    def display(self):
        if self.front == -1:
            print("EMPTY")
        else:
            i = self.front
            while(True):
                print(self.queue[i])
                if i == self.rear:
                    break
                i = (i+1) % self.max


# START
start_time = time()

# CODE
q = CQ(3)
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.display()
q.dequeue()
q.enqueue(4)
q.display()

# END
end_time = time()
execution_time = (end_time - start_time) * 1000
print(f"Execution time: {execution_time} milliseconds")
