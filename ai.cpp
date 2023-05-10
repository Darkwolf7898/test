#include <iostream>
#include <string>

// AI chatbot class
class ChatBot {
public:
    void greet() {
        std::cout << "ChatBot: Hello! How can I assist you today?" << std::endl;
    }

    void processInput(const std::string& input) {
        if (input == "hello") {
            std::cout << "ChatBot: Hi there!" << std::endl;
        } else if (input == "how are you") {
            std::cout << "ChatBot: I'm good. Thanks for asking!" << std::endl;
        } else if (input == "bye") {
            std::cout << "ChatBot: Goodbye! Have a great day!" << std::endl;
        } else {
            std::cout << "ChatBot: Sorry, I didn't understand that." << std::endl;
        }
    }
};

int main() {
    ChatBot chatBot;
    chatBot.greet();

    std::string userInput;
    while (userInput != "exit") {
        std::cout << "You: ";
        std::getline(std::cin, userInput);
        chatBot.processInput(userInput);
    }

    return 0;
}
