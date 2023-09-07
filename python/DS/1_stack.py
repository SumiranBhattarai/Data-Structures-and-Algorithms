from time import time

# FUNC


class Stack:
    def __init__(self, max):
        self.max = max
        self.top = -1
        self.stack = []

    def push(self, num):
        if self.top == self.max-1:
            print("Stack is FULL")
        else:
            self.top += 1
            self.stack.append(num)

    def pop(self):
        if(self.top == -1):
            print("Stack is Empty")
        else:
            print(f"Popped {self.stack[self.top]}")
            self.stack.pop()
            self.top -= 1

    def display(self):
        for i in range(self.top, -1, -1):
            print(self.stack[i])


# START
start_time = time()

# CODE
stack = Stack(5)
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
stack.pop()
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
stack.display()
# END
end_time = time()
execution_time = (end_time - start_time) * 1000
print(f"Execution time: {execution_time} milliseconds")
