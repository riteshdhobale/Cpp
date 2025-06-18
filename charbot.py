# chatbot.py

def chatbot_response(user_input):
    user_input = user_input.lower()
    
    if "hello" in user_input or "hi" in user_input:
        return "Hey there! How can I help you today?"
    elif "bye" in user_input:
        return "Goodbye! Have a great day!"
    elif "how are you" in user_input:
        return "I'm just a bunch of code, but I'm running perfectly!"
    else:
        return "I'm not sure how to respond to that."

# Start conversation
print("Chatbot: Hello! Type something to begin (type 'exit' to quit)")
while True:
    user = input("You: ")
    if user.lower() == "exit":
        print("Chatbot: Chat ended.")
        break
    response = chatbot_response(user)
    print("Chatbot:", response)
