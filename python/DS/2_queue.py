from time import time

# FUNC


class Queue:
    def __init__(self, max):
        self.max = max
        self.front = -1
        self.rear = -1
        self.queue = []

    def enqueue(self, num):
        if self.rear == self.max-1:
            print("Overflow")
        else:
            if self.front == -1:
                self.front = 0
            self.rear += 1
            self.queue.append(num)

    def dequeue(self):
        if self.front == -1 or self.front > self.rear:
            print("Underflow")
            self.queue.clear()
        else:
            print("Dequeued: ", self.queue[self.front])
            self.front += 1

    def display(self):
        if self.front == -1 or self.front > self.rear:
            print("Underflow")
        else:
            for i in range(self.front, self.rear+1):
                print(self.queue[i])


# START
start_time = time()

# CODE
q = Queue(3)
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
