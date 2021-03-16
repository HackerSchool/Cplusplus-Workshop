def multiply2Numbers(x,y):
    return x + y


'''
 This is not possible. A string cannot multiply by a number.
 And yet python lets you write this, and then fails while running

 CPP however will warn you about this failure in compile time, and not let you write things like these
'''

multiply2Numbers("ola", 1)