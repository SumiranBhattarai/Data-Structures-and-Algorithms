from time import time

# FUNC


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.head = None

    def insert(self, data):
        new_node = Node(data)
        if self.head == None:
            self.head = new_node
        else:
            current = self.head
            while(current.next != None):
                current = current.next
            current.next = new_node

    def display(self):
        temp = self.head
        while(temp != None):
            print(temp.data)
            temp = temp.next


# START
start_time = time()

# CODE
node = Node(5)
node.insert(1)
node.insert(2)
node.insert(3)
node.display()


# END
end_time = time()
execution_time = (end_time - start_time) * 1000
print(f"Execution time: {execution_time} milliseconds")
